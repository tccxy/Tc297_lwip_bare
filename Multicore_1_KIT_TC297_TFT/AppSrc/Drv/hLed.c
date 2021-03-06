/**********************************************************************************************************************
 * \file Multicore.c
 * \copyright Copyright (C) Infineon Technologies AG 2019
 *
 * Use of this file is subject to the terms of use agreed between (i) you or the company in which ordinary course of
 * business you are acting and (ii) Infineon Technologies AG or its licensees. If and as long as no such terms of use
 * are agreed, use of this file is subject to following:
 *
 * Boost Software License - Version 1.0 - August 17th, 2003
 *
 * Permission is hereby granted, free of charge, to any person or organization obtaining a copy of the software and
 * accompanying documentation covered by this license (the "Software") to use, reproduce, display, distribute, execute,
 * and transmit the Software, and to prepare derivative works of the Software, and to permit third-parties to whom the
 * Software is furnished to do so, all subject to the following:
 *
 * The copyright notices in the Software and this entire statement, including the above license grant, this restriction
 * and the following disclaimer, must be included in all copies of the Software, in whole or in part, and all
 * derivative works of the Software, unless such copies or derivative works are solely in the form of
 * machine-executable object code generated by a source language processor.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
 * WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT SHALL THE
 * COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN
 * CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 *********************************************************************************************************************/

/*********************************************************************************************************************/
/*-----------------------------------------------------Includes------------------------------------------------------*/
/*********************************************************************************************************************/
#include "hDrv.h"

/*********************************************************************************************************************/
/*------------------------------------------------------Macros-------------------------------------------------------*/
/*********************************************************************************************************************/
#define LED1 &MODULE_P13, 0 /* LED D107                             */
#define LED2 &MODULE_P13, 1 /* LED D108                             */
#define LED3 &MODULE_P13, 2 /* LED D109                             */
#define LED4 &MODULE_P13, 3 /* LED D110                             */
/*********************************************************************************************************************/
/*-------------------------------------------------Global variables--------------------------------------------------*/
/*********************************************************************************************************************/

/*********************************************************************************************************************/
/*---------------------------------------------Function Implementations----------------------------------------------*/
/*********************************************************************************************************************/
/* Function to initialize the LED port pin and the time constants */
void init_led(void)
{
    /* Turn off the LED (LED is low-level active) */
    IfxPort_setPinHigh(LED1);
    /* Set the port pin mode to output push-pull */
    IfxPort_setPinMode(LED1, IfxPort_Mode_outputPushPullGeneral);

    IfxPort_setPinHigh(LED2);
    /* Set the port pin mode to output push-pull */
    IfxPort_setPinMode(LED2, IfxPort_Mode_outputPushPullGeneral);
    IfxPort_setPinHigh(LED3);
    /* Set the port pin mode to output push-pull */
    IfxPort_setPinMode(LED3, IfxPort_Mode_outputPushPullGeneral);

    /* Initialize the time constants */
    //initTime();
}

#define TEST_COUNT 300000000
uint16 flag1 = 1;
uint16 flag2 = 1;
uint16 flag3 = 1;

void led_107_on(void)
{
    IfxPort_setPinLow(LED1);
}

void led_107_off(void)
{
    IfxPort_setPinHigh(LED1);
}

void led_107_blink(void)
{
    int i = TEST_COUNT;

    if (flag1 == 0)
    {
        IfxPort_setPinHigh(LED1); /* Turn off the LED (LED is low-level active)   */
        flag1 = 1;
    }
    else
    {
        IfxPort_setPinLow(LED1);
        flag1 = 0;
    }
    #if 1
    while (i--)
        ;
    i = TEST_COUNT;
    #endif
    //wait(TimeConst_1s);
}

void led_108_on(void)
{
    IfxPort_setPinLow(LED2);
}

void led_108_off(void)
{
    IfxPort_setPinHigh(LED2);
}

void led_108_blink(void)
{
    int j = TEST_COUNT;

    if (flag2 == 0)
    {
        IfxPort_setPinHigh(LED2); /* Turn off the LED (LED is low-level active)   */
        flag2 = 1;
    }
    else
    {
        IfxPort_setPinLow(LED2);
        flag2 = 0;
    }
    while (j--)
        ;
    j = TEST_COUNT;
    while (j--)
        ;
    j = TEST_COUNT;
}

void led_109_on(void)
{
    IfxPort_setPinLow(LED3);
}

void led_109_off(void)
{
    IfxPort_setPinHigh(LED3);
}

void led_109_blink(void)
{
    int k = TEST_COUNT/3;

    if (flag3 == 0)
    {
        IfxPort_setPinHigh(LED3); /* Turn off the LED (LED is low-level active)   */
        flag3 = 1;
    }
    else
    {
        IfxPort_setPinLow(LED3);
        flag3 = 0;
    }
    while (k--);
    k = TEST_COUNT;
}
