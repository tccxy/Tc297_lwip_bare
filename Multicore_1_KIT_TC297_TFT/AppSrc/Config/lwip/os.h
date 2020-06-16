/*
 * os.h
 *
 *  Created on: 20 Apr 2013
 *      Author: NugrahaD
 */

#ifndef OS_H_
#define OS_H_

#include "Ifx_Types.h"

#define IFX_OS_EE       1
#define IFX_OS_FREERTOS 2

//#define IFX_OS IFX_OS_EE
#define IFX_OS          IFX_OS_FREERTOS

#if IFX_OS == IFX_OS_EE
//#include "ee.h"
//#include "com/inc/ee_comprv.h"
//#include "com/inc/ee_api.h"

#elif IFX_OS == IFX_OS_FREERTOS

#if 0

#include "FreeRTOS.h"
#include "queue.h"
#include "semphr.h"

typedef xQueueHandle     EventType;
typedef xSemaphoreHandle ResourceType;

#define ActivateTask(task)
#define GetResource(resource)     xSemaphoreTake(resource, portMAX_DELAY)
#define ReleaseResource(resource) xSemaphoreGive(resource)

#define SetEvent(task, event)     xQueueSendToBack(event, NULL, portMAX_DELAY)
#define WaitEvent(event)          xQueueReceive(event, &eventDump, portMAX_DELAY)
#define ClearEvent(event)

extern int eventDump;

void InitOS(void);
#define StartOS(a)                InitOS()

#include "oscfg.h"
#endif

#define ActivateTask(task)
#define GetResource(resource)
#define ReleaseResource(resource)

#define TASK(entry)         void TASK_##entry(void)

#define DisableInterrupts() __disable()
#define EnableInterrupts()  __enable()

#endif

#endif /* OS_H_ */
