/*
*********************************************************************************************************
*                                              uC/MQTTc
*                                Message Queue Telemetry Transport Client
*
*                    Copyright 2014-2020 Silicon Laboratories Inc. www.silabs.com
*
*                                 SPDX-License-Identifier: APACHE-2.0
*
*               This software is subject to an open source license and is distributed by
*                Silicon Laboratories Inc. pursuant to the terms of the Apache License,
*                    Version 2.0 available at www.apache.org/licenses/LICENSE-2.0.
*
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*
*                                             MQTT CLIENT
*
* Filename : mqtt-c_sock.h
* Version  : V1.02.00
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*********************************************************************************************************
*                                               MODULE
*
* Note(s) : (1) This main network protocol suite header file is protected from multiple pre-processor
*               inclusion through use of the MQTTc module present pre-processor macro definition.
*********************************************************************************************************
*********************************************************************************************************
*/

#ifndef  MQTTc_CONN_MODULE_PRESENT
#define  MQTTc_CONN_MODULE_PRESENT


/*
*********************************************************************************************************
*********************************************************************************************************
*                                            INCLUDE FILES
*********************************************************************************************************
*********************************************************************************************************
*/

#include  "mqtt-c.h"


/*
*********************************************************************************************************
*********************************************************************************************************
*                                             DATA TYPES
*********************************************************************************************************
*********************************************************************************************************
*/

typedef  enum  mqttc_sel_desc_type {
    MQTTc_SEL_DESC_TYPE_RD,
    MQTTc_SEL_DESC_TYPE_WR,
    MQTTc_SEL_DESC_TYPE_ERR
} MQTTc_SEL_DESC_TYPE;


/*
*********************************************************************************************************
*********************************************************************************************************
*                                         FUNCTION PROTOTYPES
*********************************************************************************************************
*********************************************************************************************************
*/

void         MQTTc_SockConnOpen   (MQTTc_CONN           *p_conn,
                                   MQTTc_ERR            *p_err);

void         MQTTc_SockConnClose  (MQTTc_CONN           *p_conn,
                                   MQTTc_ERR            *p_err);

CPU_INT32U   MQTTc_SockTx         (MQTTc_CONN           *p_conn,
                                   CPU_INT08U           *p_buf,
                                   CPU_INT32U            buf_len,
                                   MQTTc_ERR            *p_err);

CPU_INT32U   MQTTc_SockRx         (MQTTc_CONN           *p_conn,
                                   CPU_INT08U           *p_buf,
                                   CPU_INT32U            buf_len,
                                   MQTTc_ERR            *p_err);

void         MQTTc_SockSelDescSet (MQTTc_CONN           *p_conn,
                                   MQTTc_SEL_DESC_TYPE   sel_desc_type);

void         MQTTc_SockSelDescClr (MQTTc_CONN           *p_conn,
                                   MQTTc_SEL_DESC_TYPE   sel_desc_type);

CPU_BOOLEAN  MQTTc_SockSelDescProc(MQTTc_CONN           *p_conn,
                                   MQTTc_SEL_DESC_TYPE   sel_desc_type);

void         MQTTc_SockSel        (MQTTc_CONN           *p_head_conn,
                                   MQTTc_ERR            *p_err);


/*
*********************************************************************************************************
*********************************************************************************************************
*                                             MODULE END
*********************************************************************************************************
*********************************************************************************************************
*/

#endif