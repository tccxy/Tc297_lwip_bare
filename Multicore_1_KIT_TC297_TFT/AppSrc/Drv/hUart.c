
/**********************************************************************************************************************
 * \file    uart.c
 * \brief
 * \version V1.0.0
 * \date    2020��6��8��
 * \author  zw
 *********************************************************************************************************************/

/*********************************************************************************************************************/
/*-----------------------------------------------------Includes------------------------------------------------------*/
/*********************************************************************************************************************/
#include "hDrv.h"
#include <string.h>
#include <stdio.h>
#include <stdarg.h>

/*********************************************************************************************************************/
/*-------------------------------------------------Global variables--------------------------------------------------*/
/*********************************************************************************************************************/
/* Communication parameters */
#define ISR_PRIORITY_ASCLIN_TX 8  /* Priority for interrupt ISR Transmit  */
#define ISR_PRIORITY_ASCLIN_RX 4  /* Priority for interrupt ISR Receive   */
#define ISR_PRIORITY_ASCLIN_ER 12 /* Priority for interrupt ISR Errors    */
#define ASC_BAUDRATE 115200       /* Define the UART baud rate            */

/* The transfer buffers allocate memory for the data itself and for FIFO runtime variables.
 * 8 more bytes have to be added to ensure a proper circular buffer handling independent from
 * the address to which the buffers have been located.
 */


struct drv_asc_lin_uart g_drv_asc_lin_uart;
/*********************************************************************************************************************/
/*--------------------------------------------Private Variables/Constants--------------------------------------------*/
/*********************************************************************************************************************/

/*********************************************************************************************************************/
/*------------------------------------------------Function Prototypes------------------------------------------------*/
/*********************************************************************************************************************/

/*********************************************************************************************************************/
/*---------------------------------------------Function Implementations----------------------------------------------*/
/*********************************************************************************************************************/
IFX_INTERRUPT(asc0TxISR, 0, ISR_PRIORITY_ASCLIN_TX);

void asc0TxISR(void)
{
    IfxStdIf_DPipe_onTransmit(&g_drv_asc_lin_uart.asc_sandard_interface);
}

IFX_INTERRUPT(asc0RxISR, 0, ISR_PRIORITY_ASCLIN_RX);

void asc0RxISR(void)
{
    IfxStdIf_DPipe_onReceive(&g_drv_asc_lin_uart.asc_sandard_interface);
}

IFX_INTERRUPT(asc0ErrISR, 0, ISR_PRIORITY_ASCLIN_ER);

void asc0ErrISR(void)
{
    IfxStdIf_DPipe_onError(&g_drv_asc_lin_uart.asc_sandard_interface);
}

void init_serial_interface(void)
{
    IfxAsclin_Asc_Config asc_conf;

    /* Set default configurations */
    IfxAsclin_Asc_initModuleConfig(&asc_conf, &MODULE_ASCLIN0); /* Initialize the structure with default values      */

    /* Set the desired baud rate */
    asc_conf.baudrate.baudrate = ASC_BAUDRATE;                        /* Set the baud rate in bit/s       */
    asc_conf.baudrate.oversampling = IfxAsclin_OversamplingFactor_16; /* Set the oversampling factor      */

    /* Configure the sampling mode */
    asc_conf.bitTiming.medianFilter = IfxAsclin_SamplesPerBit_three;          /* Set the number of samples per bit*/
    asc_conf.bitTiming.samplePointPosition = IfxAsclin_SamplePointPosition_8; /* Set the first sample position    */

    /* ISR priorities and interrupt target */
    asc_conf.interrupt.txPriority = ISR_PRIORITY_ASCLIN_TX; /* Set the interrupt priority for TX events             */
    asc_conf.interrupt.rxPriority = ISR_PRIORITY_ASCLIN_RX; /* Set the interrupt priority for RX events             */
    asc_conf.interrupt.erPriority = ISR_PRIORITY_ASCLIN_ER; /* Set the interrupt priority for Error events          */
    asc_conf.interrupt.typeOfService = IfxSrc_Tos_cpu0;

    /* Pin configuration */
    const IfxAsclin_Asc_Pins pins = {
        .cts = NULL_PTR, /* CTS pin not used                                     */
        .ctsMode = IfxPort_InputMode_pullUp,
        .rx = &IfxAsclin0_RXA_P14_1_IN,     /* Select the pin for RX connected to the USB port      */
        .rxMode = IfxPort_InputMode_pullUp, /* RX pin                                               */
        .rts = NULL_PTR,                    /* RTS pin not used                                     */
        .rtsMode = IfxPort_OutputMode_pushPull,
        .tx = &IfxAsclin0_TX_P14_0_OUT,        /* Select the pin for TX connected to the USB port      */
        .txMode = IfxPort_OutputMode_pushPull, /* TX pin                                               */
        .pinDriver = IfxPort_PadDriver_cmosAutomotiveSpeed1};
    asc_conf.pins = &pins;

    /* FIFO buffers configuration */
    asc_conf.txBuffer = g_drv_asc_lin_uart.uart_tx_buffer;         /* Set the transmission buffer                          */
    asc_conf.txBufferSize = ASC_TX_BUFFER_SIZE; /* Set the transmission buffer size                     */
    asc_conf.rxBuffer = g_drv_asc_lin_uart.uart_rx_buffer;         /* Set the receiving buffer                             */
    asc_conf.rxBufferSize = ASC_RX_BUFFER_SIZE; /* Set the receiving buffer size                        */

    /* Init ASCLIN module */
    IfxAsclin_Asc_initModule(&g_drv_asc_lin_uart.asclin, &asc_conf); /* Initialize the module with the given configuration   */
}

/* Function to initialize the Shell */
void init_uart_module(void)
{
    /* Initialize the hardware peripherals */
    init_serial_interface();

    /* Initialize the Standard Interface */
    IfxAsclin_Asc_stdIfDPipeInit(&g_drv_asc_lin_uart.asc_sandard_interface, &g_drv_asc_lin_uart.asclin);

    /* Initialize the Console */
    Ifx_Console_init(&g_drv_asc_lin_uart.asc_sandard_interface);

    /* Initialize the Assert */
    Ifx_Assert_setStandardIo(&g_drv_asc_lin_uart.asc_sandard_interface);
}

#if 1
void Ifx_print(pchar format, ...)
{
    if (!g_drv_asc_lin_uart.asc_sandard_interface.txDisabled)
    {
        char message[STDIF_DPIPE_MAX_PRINT_SIZE + 1];
        Ifx_SizeT count;
        va_list args;
        va_start(args, format);
        vsprintf((char *)message, format, args);
        va_end(args);
        count = (Ifx_SizeT)strlen(message);
        IFX_ASSERT(IFX_VERBOSE_LEVEL_ERROR, count < STDIF_DPIPE_MAX_PRINT_SIZE);
        //return
        IfxStdIf_DPipe_write(&g_drv_asc_lin_uart.asc_sandard_interface, (void *)message, &count, TIME_INFINITE);
    }
    else
    {
        //return TRUE;
    }
}
#else
void Ifx_print(pchar format, ...)
{
}
#endif