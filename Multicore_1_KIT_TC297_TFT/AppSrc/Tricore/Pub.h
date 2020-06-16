#ifndef _PUB_H
#define _PUB_H

#include "Bsp.h"
#include "Cpu/Std/Ifx_Types.h"
#include "IfxScuWdt.h"
#include "Ifx_Types.h"
#include "IfxMultican.h"
#include "string.h"

struct test_data
{
    char sync_single;
    IfxMultican_Message msg;
};

IFX_EXTERN struct test_data g_test_data;



#endif