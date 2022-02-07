/*
*********************************************************************************************************
*                                            EXAMPLE CODE
*
*               This file is provided as an example on how to use Micrium products.
*
*               Please feel free to use any application code labeled as 'EXAMPLE CODE' in
*               your application products.  Example code may be used as is, in whole or in
*               part, or may be used as a reference only. This file can be modified as
*               required to meet the end-product requirements.
*
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*
*                               USB HOST HID KEYBOARD TEST APPLICATION
*
*                                              TEMPLATE
*
* Filename : app_usbh_keyboard.h
* Version  : V3.42.01
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*                                               MODULE
*********************************************************************************************************
*/

#ifndef  APP_USBH_KEYBOARD_MODULE_PRESENT
#define  APP_USBH_KEYBOARD_MODULE_PRESENT


/*
*********************************************************************************************************
*                                            INCLUDE FILES
*********************************************************************************************************
*/

#include  "app_usbh_hid.h"


/*
*********************************************************************************************************
*                                               EXTERNS
*********************************************************************************************************
*/

#ifdef   APP_USBH_KEYBOARD_MODULE
#define  APP_USBH_KEYBOARD_EXT
#else
#define  APP_USBH_KEYBOARD_EXT  extern
#endif


/*
*********************************************************************************************************
*                                        DEFAULT CONFIGURATION
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                               DEFINES
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                             DATA TYPES
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                          GLOBAL VARIABLES
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                               MACROS
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                         FUNCTION PROTOTYPES
*********************************************************************************************************
*/

void  App_USBH_KBD_CallBack (USBH_HID_DEV  *p_hid_dev,
                             void          *p_buf,
                             CPU_INT08U     buf_len,
                             USBH_ERR       err);


/*
*********************************************************************************************************
*                                        CONFIGURATION ERRORS
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                              MODULE END
*********************************************************************************************************
*/

#endif