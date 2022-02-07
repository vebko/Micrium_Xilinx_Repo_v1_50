/*
*********************************************************************************************************
*                                                uC/FS
*                                      The Embedded File System
*
*                    Copyright 2008-2021 Silicon Laboratories Inc. www.silabs.com
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
*                                     FILE SYSTEM FAT MANAGEMENT
*
*                                       LONG FILE NAME SUPPORT
*
* Filename : fs_fat_lfn.h
* Version  : V4.08.01
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*                                               MODULE
*
* Note(s) : (1) The following FAT-module-present configuration value MUST be pre-#define'd in
*               'fs_cfg_fs.h' PRIOR to all other file system modules that require FAT LFN Layer
*               Configuration (see 'fs_cfg_fs.h  FAT LAYER CONFIGURATION  Note #2b') :
*
*                   FS_FAT_LFN_MODULE_PRESENT
*********************************************************************************************************
*/

#ifndef  FS_FAT_LFN_H
#define  FS_FAT_LFN_H

#ifdef   FS_FAT_LFN_MODULE_PRESENT                              /* See Note #1.                                         */


/*
*********************************************************************************************************
*                                               EXTERNS
*********************************************************************************************************
*/

#ifdef   FS_FAT_LFN_MODULE
#define  FS_FAT_LFN_EXT
#else
#define  FS_FAT_LFN_EXT  extern
#endif


/*
*********************************************************************************************************
*                                            INCLUDE FILES
*********************************************************************************************************
*/

#include  <cpu.h>
#include  "../Source/fs_cfg_fs.h"
#include  "../Source/fs_err.h"


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

extern  const  FS_FAT_FN_API  FS_FAT_LFN_API;                   /* Long file name API.                                  */


/*
*********************************************************************************************************
*                                               MACRO'S
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                         FUNCTION PROTOTYPES
*********************************************************************************************************
*/

#if (FS_FAT_CFG_VOL_CHK_EN == DEF_ENABLED)
void  FS_FAT_LFN_DirChk(FS_VOL          *p_vol,                 /* Chk dir.                                             */
                        FS_BUF          *p_buf,
                        FS_FAT_SEC_NBR   dir_sec,
                        FS_ERR          *p_err);
#endif


/*
*********************************************************************************************************
*                                        CONFIGURATION ERRORS
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                             MODULE END
*
* Note(s) : (1) See 'MODULE  Note #1'.
*********************************************************************************************************
*/

#endif                                                          /* End of FAT LFN module include (see Note #1).         */
#endif