/* lwIP includes. */
#include "lwip/debug.h"
#include "lwip/def.h"
#include "lwip/sys.h"
#include "lwip/mem.h"

#if !NO_SYS
#if LWIP_SYS == LWIP_SYS_EE

#define SYS_ARCH_EE_C
#include "sys_arch_ee.h"

/* Message queue constants. */
#define archMESG_QUEUE_LENGTH       (6)
#define archPOST_BLOCK_TIME_MS      ((unsigned long)10000)

/* DIAN:
 * struct timeoutlist
 * {
 * struct sys_timeouts timeouts;
 * xTaskHandle pid;
 * };
 */

#define lwipTCP_STACK_SIZE          600
#define lwipBASIC_SERVER_STACK_SIZE 250

//DIAN: static struct timeoutlist timeoutlist[SYS_THREAD_MAX];
static u16_t nextthread = 0;
int          intlevel   = 0;

/*-----------------------------------------------------------------------------------*/
/* Check if an mbox is valid/allocated: return 1 for valid, 0 for invalid */
int sys_mbox_valid(sys_mbox_t *mbox)
{
    return 1;
}


/** Set an mbox invalid so that sys_mbox_valid returns 0 */
void sys_mbox_set_invalid(sys_mbox_t *mbox)
{}

//  Creates an empty mailbox.
err_t sys_mbox_new(sys_mbox_t *mbox, int size)
{}

/*
 * Deallocates a mailbox. If there are messages still present in the
 * mailbox when the mailbox is deallocated, it is an indication of a
 * programming error in lwIP and the developer should be notified.
 */
void sys_mbox_free(sys_mbox_t *mbox)
{}

//   Posts the "msg" to the mailbox.
void sys_mbox_post(sys_mbox_t *mbox, void *msg)
{
    //SendMessage(*mbox, msg);
}


err_t sys_mbox_trypost(sys_mbox_t *mbox, void *msg)
{
    return ERR_MEM;
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
 *
 * Note that a function with a similar name, sys_mbox_fetch(), is
 * implemented by lwIP.
 */
u32_t sys_arch_mbox_fetch(sys_mbox_t *mbox, void **msg, u32_t timeout)
{
    u32_t starttime = sys_now();

    if (timeout != 0)
    {}
    else // block forever for a message.
    {}

    return sys_now() - starttime;
}


u32_t sys_arch_mbox_tryfetch(sys_mbox_t *mbox, void **msg)
{}

/*-----------------------------------------------------------------------------------*/
/** Check if a semaphore is valid/allocated: return 1 for valid, 0 for invalid */
int sys_sem_valid(sys_sem_t *sem)
{
    return 1;
}


/** Set a semaphore invalid so that sys_sem_valid returns 0 */
void sys_sem_set_invalid(sys_sem_t *sem)
{}

//  Creates and returns a new semaphore. The "count" argument specifies
//  the initial state of the semaphore. TBD finish and test
err_t sys_sem_new(sys_sem_t *sem, u8_t count)
{
    InitSem(sem, count);
    return ERR_OK;
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
    u32_t starttime = sys_now();

    if (timeout != 0)
    {               /* wait with blocking time */
        __debug();  // not yet supported.
    }
    else
    {               /* wait forever until semaphore is obtained */
        WaitSem(sem);
    }

    return sys_now() - starttime;
}


// Signals a semaphore
void sys_sem_signal(sys_sem_t *sem)
{
    PostSem(sem);
}


// Deallocates a semaphore
void sys_sem_free(sys_sem_t *sem)
{}

/*-----------------------------------------------------------------------------------*/

/* Create a new mutex
 * @param mutex pointer to the mutex to create
 * @return a new mutex */
err_t sys_mutex_new(sys_mutex_t *mutex)
{
    return ERR_OK;
}


/* Lock a mutex
 * @param mutex the mutex to lock */
void sys_mutex_lock(sys_mutex_t *mutex)
{
    GetResource(*mutex);
}


/** Unlock a mutex
 * @param mutex the mutex to unlock */
void sys_mutex_unlock(sys_mutex_t *mutex)
{
    ReleaseResource(*mutex);
}


/* Delete a semaphore
 * @param mutex the mutex to delete */
void sys_mutex_free(sys_mutex_t *mutex)
{}

/*-----------------------------------------------------------------------------------*/

int strcmp(const char *, const char *);

// Initialize sys arch
void sys_init(void)
{
    int i;

    // Initialize the the per-thread sys_timeouts structures
    // make sure there are no valid pids in the list
    for (i = 0; i < SYS_THREAD_MAX; i++)
    {
        //DIAN: timeoutlist[i].pid = 0;
    }

    // keep track of how many threads have been created
    nextthread = 0;
}


/*
 * Starts a new thread with priority "prio" that will begin its execution in the
 * function "thread()". The "arg" argument will be passed as an argument to the
 * thread() function. The id of the new thread is returned. Both the id and
 * the priority are system dependent.
 */
void sys_thread_new(const char *name, lwip_thread_fn thread, void *arg, int stacksize, int prio)
{
    int i = 0, found = 0;

    do
    {
        if (strcmp(name, sys_thread_name[i]) == 0)
        {
            found = 1;
            break;
        }

        i++;
    } while (sys_thread_name[i] != NULL);

    if (found)
    {
        sys_thread_fn[i] = thread;
        ActivateTask(sys_thread_id[i]);
    }
    else
    {
        __debug();
    }
}


#if 0
/*
 * This optional function does a "fast" critical region protection and returns
 * the previous protection level. This function is only called during very short
 * critical regions. An embedded system which supports ISR-based drivers might
 * want to implement this function by disabling interrupts. Task-based systems
 * might want to implement this by using a mutex or disabling tasking. This
 * function should support recursive calls from the same task or interrupt. In
 * other words, sys_arch_protect() could be called while already protected. In
 * that case the return value indicates that it is already protected.
 *
 * sys_arch_protect() is only required if your port is supporting an operating
 * system.
 */
sys_prot_t sys_arch_protect(void)
{
    //portENTER_CRITICAL();

    return 1;
}


/*
 * This optional function does a "fast" set of critical region protection to the
 * value specified by pval. See the documentation for sys_arch_protect() for
 * more information. This function is only required if your port is supporting
 * an operating system.
 */
void sys_arch_unprotect(sys_prot_t pval)
{
    (void)pval;
    //portEXIT_CRITICAL();
}


#endif
#endif
#endif

/*
 * Prints an assertion messages and aborts execution.
 */

#include "Comm/Ifx_Console.h"

void xsys_assert(const char *msg)
{
    //fputs(msg, stderr );
    //fputs("\n\r", stderr );
    Ifx_Console_print(msg);
    //portENTER_CRITICAL();
#if 0

    for ( ; ;)
    {
        vTaskDelay(OsTimeConst_ms(1000));
        __debug();
    }

#endif
}


void sys_debug(const char *const fmt, ...)
{
#if 0
    //va_list ap;
    //va_start( ap, fmt );
    //(void) vprintf(fmt, ap);
    //(void) putchar( '\r' );
    //va_end( ap );
    Ifx_Console_print(fmt);
#endif
}


extern u32_t Core0_Stm_1ms;

/** Returns the current time in milliseconds */
u32_t sys_now(void)
{
    return Core0_Stm_1ms;
}


/*-----------------------------------------------------------------------------------*/
#if 0
/*
 * Returns a pointer to the per-thread sys_timeouts structure. In lwIP,
 * each thread has a list of timeouts which is represented as a linked
 * list of sys_timeout structures. The sys_timeouts structure holds a
 * pointer to a linked list of timeouts. This function is called by
 * the lwIP timeout scheduler and must not return a NULL value.
 *
 * In a single threaded sys_arch implementation, this function will
 * simply return a pointer to a global sys_timeouts variable stored in
 * the sys_arch module.
 */
struct sys_timeouts *sys_arch_timeouts(void)
{
    // Error
    return NULL;
}


#endif

/*-----------------------------------------------------------------------------------*/
/*-----------------------------------------------------------------------------------*/
PACK_STRUCT_BEGIN
struct dns_hdr
{
    PACK_STRUCT_FIELD(u16_t id);
    PACK_STRUCT_FIELD(u8_t flags1);
    PACK_STRUCT_FIELD(u8_t flags2);
    PACK_STRUCT_FIELD(u16_t numquestions);
    PACK_STRUCT_FIELD(u16_t numanswers);
    PACK_STRUCT_FIELD(u16_t numauthrr);
    PACK_STRUCT_FIELD(u16_t numextrarr);
} PACK_STRUCT_STRUCT;
PACK_STRUCT_END

#define SIZEOF_DNS_HDR (12)

PACK_STRUCT_BEGIN
struct pppoehdr
{
    PACK_STRUCT_FIELD(u8_t vertype);
    PACK_STRUCT_FIELD(u8_t code);
    PACK_STRUCT_FIELD(u16_t session);
    PACK_STRUCT_FIELD(u16_t plen);
} PACK_STRUCT_STRUCT;
PACK_STRUCT_END

#define SIZEOF_PPPOEHDR (6)
/*-----------------------------------------------------------------------------------*/
