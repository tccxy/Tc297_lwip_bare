#include "hDrv.h"
#include "Pub.h"

#define SRC_MESSAGE_OBJECT_ID (IfxMultican_MsgObjId)0 /* Source message object ID                          */
#define DST_MESSAGE_OBJECT_ID (IfxMultican_MsgObjId)1 /* Destination message object ID                     */
#define CAN_MESSAGE_ID 0x777                          /* Message ID that will be used in arbitration phase */
#define TX_INTERRUPT_SRC_ID IfxMultican_SrcId_0       /* Transmit interrupt service request ID             */
#define RX_INTERRUPT_SRC_ID IfxMultican_SrcId_1       /* Receive interrupt service request ID              */
#define INVALID_DATA_VALUE (uint32)0xDEADBEEF         /* Used to invalidate RX message data content        */
#define INVALID_ID_VALUE (uint32)0xFFFFFFFF           /* Used to invalidate RX message ID value            */
#define ISR_PRIORITY_CAN_TX 2                         /* Define the CAN TX interrupt priority              */
#define ISR_PRIORITY_CAN_RX 1                         /* Define the CAN RX interrupt priority              */

struct drv_multi_can g_drv_multi_can;

IFX_INTERRUPT(canIsrTxHandler, 0, ISR_PRIORITY_CAN_TX);
IFX_INTERRUPT(canIsrRxHandler, 0, ISR_PRIORITY_CAN_RX);

/* Interrupt Service Routine (ISR) called once the TX interrupt has been generated.
 * Turns on the LED1 to indicate successful CAN message transmission.
 */
void canIsrTxHandler(void)
{
    /* Just to indicate that the CAN message has been transmitted by turning on LED1 */
    //Ifx_print("canIsrTxHandler \r\n");
}

/* Interrupt Service Routine (ISR) called once the RX interrupt has been generated.
 * Compares the content of the received CAN message with the content of the transmitted CAN message
 * and in case of success, turns on the LED2 to indicate successful CAN message reception.
 */
int flag = 0;
int led_state = 0;
void canIsrRxHandler(void)
{
    IfxMultican_Status readStatus;
    //Ifx_print("canIsrRxHandler .....\r\n");
    /* Read the received CAN message and store the status of the operation */
    readStatus = IfxMultican_Can_MsgObj_readMessage(&g_drv_multi_can.can_rcv_msgobj, &g_drv_multi_can.can_rx_msg);

    /* If no new data has been received, report an error */
    if (!(readStatus & IfxMultican_Status_newData))
    {
        while (1)
        {
        }
    }

    /* If new data has been received but with one message lost, report an error */
    if (readStatus == IfxMultican_Status_newDataButOneLost)
    {
        while (1)
        {
        }
    }
#if 0
    if (g_test_data.sync_single == 0)
    {
        memcpy((char *)&g_test_data.msg, (char *)&g_drv_multi_can.can_rx_msg, sizeof(IfxMultican_Message));
        g_test_data.sync_single = 1;
    }
#endif
    flag++;

    if (flag == 100)
    {
        if (led_state == 0)
        {
            led_107_on();
            led_state = 1;
        }
        else
        {
            led_107_off();
            led_state = 0;
        }

        flag = 1;
    }
}

void init_multi_can_module(void)
{
    IfxMultican_Can_initModuleConfig(&g_drv_multi_can.can_config, &MODULE_CAN);

    g_drv_multi_can.can_config.nodePointer[TX_INTERRUPT_SRC_ID].priority = ISR_PRIORITY_CAN_TX;
    g_drv_multi_can.can_config.nodePointer[RX_INTERRUPT_SRC_ID].priority = ISR_PRIORITY_CAN_RX;
    g_drv_multi_can.can_config.nodePointer[RX_INTERRUPT_SRC_ID].typeOfService = IfxSrc_Tos_cpu1;

    IfxMultican_Can_initModule(&g_drv_multi_can.can, &g_drv_multi_can.can_config);

    IfxMultican_Can_Node_initConfig(&g_drv_multi_can.can_node_config, &g_drv_multi_can.can);

    g_drv_multi_can.can_node_config.nodeId = IfxMultican_NodeId_0;

    g_drv_multi_can.can_node_config.rxPin = &IfxMultican_RXD0B_P20_7_IN;
    g_drv_multi_can.can_node_config.rxPinMode = IfxPort_InputMode_pullUp;
    g_drv_multi_can.can_node_config.txPin = &IfxMultican_TXD0_P20_8_OUT;
    g_drv_multi_can.can_node_config.txPinMode = IfxPort_OutputMode_pushPull;

    //node 0
    IfxMultican_Can_Node_init(&g_drv_multi_can.can_node, &g_drv_multi_can.can_node_config);

    //send msg obj
    IfxMultican_Can_MsgObj_initConfig(&g_drv_multi_can.can_msg_obj_config, &g_drv_multi_can.can_node);

    g_drv_multi_can.can_msg_obj_config.msgObjId = SRC_MESSAGE_OBJECT_ID;
    g_drv_multi_can.can_msg_obj_config.messageId = CAN_MESSAGE_ID;
    g_drv_multi_can.can_msg_obj_config.frame = IfxMultican_Frame_transmit;
    g_drv_multi_can.can_msg_obj_config.txInterrupt.enabled = TRUE;
    g_drv_multi_can.can_msg_obj_config.txInterrupt.srcId = TX_INTERRUPT_SRC_ID;

    IfxMultican_Can_MsgObj_init(&g_drv_multi_can.can_send_msgobj, &g_drv_multi_can.can_msg_obj_config);
    //rcv msg obj
    IfxMultican_Can_MsgObj_initConfig(&g_drv_multi_can.can_msg_obj_config, &g_drv_multi_can.can_node);

    g_drv_multi_can.can_msg_obj_config.msgObjId = DST_MESSAGE_OBJECT_ID;
    g_drv_multi_can.can_msg_obj_config.messageId = 0;
    g_drv_multi_can.can_msg_obj_config.frame = IfxMultican_Frame_receive;
    g_drv_multi_can.can_msg_obj_config.rxInterrupt.enabled = TRUE;
    g_drv_multi_can.can_msg_obj_config.rxInterrupt.srcId = RX_INTERRUPT_SRC_ID;
    g_drv_multi_can.can_msg_obj_config.acceptanceMask = 0;
    IfxMultican_Can_MsgObj_init(&g_drv_multi_can.can_rcv_msgobj, &g_drv_multi_can.can_msg_obj_config);

    IfxMultican_Message_init(&g_drv_multi_can.can_rx_msg,
                             INVALID_ID_VALUE,
                             INVALID_DATA_VALUE,
                             INVALID_DATA_VALUE,
                             g_drv_multi_can.can_msg_obj_config.control.messageLen);

    Ifx_print("init_multi_can_module done.\r\n");
}

void multi_can_send_msg(void)
{
    /* Define the content of the data to be transmitted */
    const uint32 dataLow = 0xC0CAC01A;
    const uint32 dataHigh = 0xBA5EBA11;

    /* Invalidation of the RX message */

    /* Initialization of the TX message */
    IfxMultican_Message_init(&g_drv_multi_can.can_tx_msg,
                             g_drv_multi_can.can_msg_obj_config.messageId,
                             dataLow,
                             dataHigh,
                             g_drv_multi_can.can_msg_obj_config.control.messageLen);

    /* Send the CAN message with the previously defined TX message content */
    while (IfxMultican_Status_notSentBusy ==
           IfxMultican_Can_MsgObj_sendMessage(&g_drv_multi_can.can_send_msgobj, &g_drv_multi_can.can_tx_msg))
    {
    }
}
