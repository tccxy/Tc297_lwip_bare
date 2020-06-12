/*
 * sys_arch_ee.h
 *
 *  Created on: 19 Apr 2013
 *      Author: NugrahaD
 */

#ifndef IFX_LWIP_SYS_ARCH_EE_H
#define IFX_LWIP_SYS_ARCH_EE_H

#include "ee.h"
#include "com/inc/ee_comprv.h"
#include "com/inc/ee_api.h"

#ifndef SYS_ARCH_EE_C
#error This file is only included from sys_arch_ee.c
#endif

/* This is the number of threads that can be started with sys_thread_new() */
#define SYS_THREAD_MAX 4

const char        *sys_thread_name[SYS_THREAD_MAX] = {
    "tcpip_thread",
    "http_server_netconn",
    "ping_thread",
    NULL
};

const TaskType     sys_thread_id[SYS_THREAD_MAX] = {
    LwipTaskTcpIp,
    LwipTaskHttpd,
    LwipTaskPingd
};

typedef void (*sys_arch_thread_fn)(void *);
sys_arch_thread_fn sys_thread_fn[SYS_THREAD_MAX];
#if 0

/* *INDENT-OFF* */
TASK(LwipTaskTcpIp) { (sys_thread_fn[0])(NULL); }
TASK(LwipTaskHttpd) { (sys_thread_fn[1])(NULL); }
TASK(LwipTaskPingd) { (sys_thread_fn[2])(NULL); }
/* *INDENT-ON* */

#else

struct
{
    u32_t tcpip;
    u32_t httpd;
    u32_t pingd;
    u32_t rxMsg;
    u32_t txMsg;
} LwipTaskCounters;

TASK(LwipTaskTcpIp)
{
    while (1)
    {
        WaitEvent(LwipEventForTcpIp);
        ClearEvent(LwipEventForTcpIp);
        //SetEvent(LwipTaskHttpd, LwipEventForHttpd);
        SendMessage(LwipMsgForHttpd, &LwipTaskCounters.txMsg);
        LwipTaskCounters.tcpip++;

        if ((LwipTaskCounters.tcpip % 2) == 0)
        {
            SetEvent(LwipTaskPingd, LwipEventForPingd);
            //SendMessage(LwipMsgForPingd, &tcpIpMsg);
        }
    }
}

TASK(LwipTaskHttpd)
{
    u32_t ref;

    while (1)
    {
        WaitEvent(LwipEventForHttpd);
        ClearEvent(LwipEventForHttpd);
        ReceiveMessage(LwipMboxAtHttpd, &ref);
        LwipTaskCounters.rxMsg = ref;
        LwipTaskCounters.httpd++;
    }
}

TASK(LwipTaskPingd)
{
    while (1)
    {
        WaitEvent(LwipEventForPingd);
        ClearEvent(LwipEventForPingd);
        LwipTaskCounters.pingd++;
    }
}

#endif

#endif /* SYS_ARCH_EE_H_ */
