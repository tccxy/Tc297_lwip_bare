/*
 * Copyright (c) 2001-2003 Swedish Institute of Computer Science.
 * All rights reserved. 
 * 
 * Redistribution and use in source and binary forms, with or without modification, 
 * are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 * 3. The name of the author may not be used to endorse or promote products
 *    derived from this software without specific prior written permission. 
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR IMPLIED 
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF 
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT 
 * SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, 
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT 
 * OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS 
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN 
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING 
 * IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY 
 * OF SUCH DAMAGE.
 *
 * This file is part of the lwIP TCP/IP stack.
 * 
 * Author: Adam Dunkels <adam@sics.se>
 *
 */

#include "opt.h"
#include "sys.h"
#include "stats.h"
#include "debug.h"

//#include "FreeRTOS.h"
//#include "task.h"

#include "IfxCpu_bf.h"

#if !NO_SYS

static err_t check_synchronization_value(const sys_sem_t *synchronization_value)
{
  err_t xResult = ERR_OK;

  if (NULL == *synchronization_value)
  {
    xResult = ERR_MEM;
  }

  return xResult;
}

/*
 * Returns the time elapsed (in milliseconds) since a given time
 * param: startTime - the time since we want to calculate how much time has passed
 */
static u32_t get_elapsed_time(u32_t startTime)
{
  u32_t elapsed;

  elapsed = sys_now() - startTime;
  if (0U == elapsed)
  {
    elapsed = 1U;
  }

  return elapsed;
}

static u32_t get_time_ms(void)
{
  portTickType ticks;

  if ((__mfcr(CPU_ICR) & (IFX_CPU_ICR_CCPN_MSK << IFX_CPU_ICR_CCPN_OFF)) != 0)
  {
    ticks = xTaskGetTickCountFromISR();
  }
  else
  {
    ticks = xTaskGetTickCount();
  }

  return TICK_TO_MSEC(ticks);
}

/*
 * Creates and returns a new semaphore. 
 * The "count" argument specifies the initial state of the semaphore.
 */
err_t sys_sem_new(sys_sem_t *sem, u8_t count)
{

  err_t xResult = ERR_OK;

  LWIP_UNUSED_ARG(count);
  LWIP_ASSERT("sem != NULL", sem != NULL);

  portENTER_CRITICAL();
  *sem = xSemaphoreCreateBinary();
  xResult = check_synchronization_value(sem);
  portEXIT_CRITICAL();

  return xResult;
}

void sys_sem_free(sys_sem_t *sem)
{
  LWIP_ASSERT("sem != NULL", sem != NULL);
  vSemaphoreDelete(*sem);
}

/*
 * Blocks the thread while waiting for the semaphore to be
 * signaled. If the "timeout" argument is non-zero, the thread should
 * only be blocked for the specified time (measured in
 * milliseconds).
 *
 * If the timeout argument is non-zero, the return value is the number of
 * milliseconds spent waiting for the semaphore to be signaled. If the
 * semaphore wasn't signaled within the specified time, the return value is
 * SYS_ARCH_TIMEOUT. If the thread didn't have to wait for the semaphore
 * (i.e., it was already signaled), the function may return zero.
 *
 * Notice that lwIP implements a function with a similar name,
 * sys_sem_wait(), that uses the sys_arch_sem_wait() function.
 */

u32_t sys_arch_sem_wait(sys_sem_t *sem, u32_t timeout)
{
  u32_t startTime;

  LWIP_ASSERT("sem != NULL", sem != NULL);

  startTime = sys_now();
  if (timeout != 0U)
  {
    if (pdTRUE == xSemaphoreTake(*sem, pdMS_TO_TICKS(timeout)))
    {
      return get_elapsed_time(startTime);
    }
    else
    {
      return SYS_ARCH_TIMEOUT;
    }
  }
  else /* must block without a timeout */
  {
    while (xSemaphoreTake(*sem, 10000) != pdTRUE)
    {
    }
    return get_elapsed_time(startTime);
  }
}

void sys_sem_signal(sys_sem_t *sem)
{
  LWIP_ASSERT("sem != NULL", sem != NULL);
  (void)xSemaphoreGive(*sem);
}

int sys_sem_valid(sys_sem_t *sem)
{
  return (*sem != 0 ? 1 : 0);
}

void sys_sem_set_invalid(sys_sem_t *sem)
{
  *sem = 0;
}

/*-----------------------------------------------------------------------------------*/

#if LWIP_COMPAT_MUTEX == 0

err_t sys_mutex_new(sys_mutex_t *mutex)
{
  LWIP_ASSERT("mutex != NULL", mutex != NULL);

  portENTER_CRITICAL();
  *mutex = xSemaphoreCreateMutex();
  portEXIT_CRITICAL();

  return check_synchronization_value(mutex);
}

void sys_mutex_free(sys_mutex_t *mutex)
{
  vSemaphoreDelete(*mutex);
}

void sys_mutex_lock(sys_mutex_t *mutex)
{
  LWIP_ASSERT("mutex != NULL", mutex != NULL);
  while (xSemaphoreTake(*mutex, portMAX_DELAY) == pdFALSE)
  {
  }
}

void sys_mutex_unlock(sys_mutex_t *mutex)
{
  LWIP_ASSERT("mutex != NULL", mutex != NULL);
  (void)xSemaphoreGive(*mutex);
}

#endif /*LWIP_COMPAT_MUTEX*/

/*-----------------------------------------------------------------------------------*/

err_t sys_mbox_new(sys_mbox_t *mbox, int size)
{
  LWIP_ASSERT("mbox != NULL", mbox != NULL);

  *mbox = xQueueCreate(size, sizeof(void *));

  return ERR_OK;
}

void sys_mbox_free(sys_mbox_t *mbox)
{
  LWIP_ASSERT("mbox != NULL", mbox != NULL);
  LWIP_ASSERT("mbox not empty", !uxQueueMessagesWaiting(*mbox));

  vQueueDelete(*mbox);
}

void sys_mbox_post(sys_mbox_t *mbox, void *msg)
{
  LWIP_ASSERT("mbox != NULL", mbox != NULL);

  while (pdTRUE != xQueueSend(*mbox, &msg, 10000)) /* time is arbitrary */
  {
  }
}

err_t sys_mbox_trypost(sys_mbox_t *mbox, void *msg)
{
  LWIP_ASSERT("mbox != NULL", mbox != NULL);

  (void)xQueueSend(*mbox, &msg, (TickType_t)0);

  return ERR_OK;
}

/*
 * Blocks the thread until a message arrives in the mailbox, but does
 * not block the thread longer than "timeout" milliseconds (similar to
 * the sys_arch_sem_wait() function). The "msg" argument is a result
 * parameter that is set by the function (i.e., by doing "*msg =
 * ptr"). The "msg" parameter maybe NULL to indicate that the message
 * should be dropped.
 *
 * The return values are the same as for the sys_arch_sem_wait() function:
 * Number of milliseconds spent waiting or SYS_ARCH_TIMEOUT if there was a
 * timeout.

 * Note that a function with a similar name, sys_mbox_fetch(), is
 * implemented by lwIP.
 */

u32_t sys_arch_mbox_fetch(sys_mbox_t *mbox, void **msg, u32_t timeout)
{
  void **msgptr = msg;
  u32_t startTime;

  LWIP_ASSERT("mbox != NULL", mbox != NULL);

  startTime = sys_now();

  if (timeout != 0U)
  {
    if (pdTRUE == xQueueReceive(*mbox, msgptr, pdMS_TO_TICKS(timeout)))
    {
      return get_elapsed_time(startTime);
    }
    else /* timed out blocking for message */
    {
      *msgptr = NULL;
      return SYS_ARCH_TIMEOUT;
    }
  }
  else /* block forever for a message. */
  {
    while (pdTRUE != xQueueReceive(*mbox, msgptr, 10000)) /* time is arbitrary */
    {
    }
    return get_elapsed_time(startTime);
  }
}

u32_t sys_arch_mbox_tryfetch(sys_mbox_t *mbox, void **msg)
{
  void **msgptr = msg;

  LWIP_ASSERT("mbox != NULL", mbox != NULL);

  if (pdTRUE == xQueueReceive(*mbox, msgptr, 0))
  {
    return 0U;
  }
  else /* no message */
  {
    *msgptr = NULL;
    return SYS_MBOX_EMPTY;
  }
}

int sys_mbox_valid(sys_mbox_t *mbox)
{
  return (*mbox != 0 ? 1 : 0);
}

void sys_mbox_set_invalid(sys_mbox_t *mbox)
{
  *mbox = 0;
}

/*-----------------------------------------------------------------------------------*/

/*
 * Create new thread 
 */
sys_thread_t sys_thread_new(const char *name, lwip_thread_fn function, void *arg, int stacksize, int prio)
{
  TaskHandle_t taskHandler;

  if (xTaskCreate(function, name, stacksize, arg, prio, &taskHandler) == pdPASS)
  {
    return taskHandler;
  }
  else
  {
    return (sys_thread_t)0;
  }
}

#if SYS_LIGHTWEIGHT_PROT

/*
 * This optional function does a "fast" critical region protection and returns
 * the previous protection level. This function is only called during very short
 * critical regions. An embedded system which supports ISR-based drivers might
 * want to implement this function by disabling interrupts. Task-based systems
 * might want to implement this by using a mutex or disabling tasking. This
 * function should support recursive calls from the same task or interrupt. In
 * other words, sys_arch_protect() could be called while already protected. In
 * that case the return value indicates that it is already protected.
 */

sys_prot_t sys_arch_protect(void)
{
  portENTER_CRITICAL();
  return 1;
}

void sys_arch_unprotect(sys_prot_t pval)
{
  (void)pval;
  portEXIT_CRITICAL();
}

#endif /* SYS_LIGHTWEIGHT_PROT */

/*
 * This function returns the current time in milliseconds
 */

u32_t sys_now(void)
{
  return get_time_ms();
}

void sys_init(void)
{
}

#endif /* !NO_SYS */
