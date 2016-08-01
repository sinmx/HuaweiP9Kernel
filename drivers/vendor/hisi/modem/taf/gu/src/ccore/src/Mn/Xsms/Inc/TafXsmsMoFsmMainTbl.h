/******************************************************************************

                  版权所有 (C), 2001-2011, 华为技术有限公司

 ******************************************************************************
  文 件 名   : TafXsmsMoFsmMainTbl.h
  版 本 号   : 初稿
  作    者   : c00290064
  生成日期   : 2014年11月07日
  功能描述   : TafXsmsMoFsmMainTbl.c 的头文件
  函数列表   :
  修改历史   :
  1.日    期   : 2014年10月31日
    作    者   : c00299064
    修改内容   : 创建文件
******************************************************************************/

#ifndef _TAF_XSMS_MO_FSM_MAIN_TBL_H_
#define _TAF_XSMS_MO_FSM_MAIN_TBL_H_

/*****************************************************************************
  1 其他头文件包含
*****************************************************************************/
#include  "vos.h"
#include  "TafFsm.h"


#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


#pragma pack(4)

/*****************************************************************************
  2 宏定义
*****************************************************************************/


/*****************************************************************************
  3 枚举定义
*****************************************************************************/


/*****************************************************************************
  4 全局变量声明
*****************************************************************************/
/* Mo状态机状态全局变量 */
extern TAF_FSM_DESC_STRU                       g_stTafXsmsMoFsmDesc;

/* Xsms Mo状态机状态处理表 */
extern TAF_STA_STRU                            g_astTafXsmsMoStaTbl[];

/* XSMS Mo_IDLE下的事件处理表 */
extern TAF_ACT_STRU                            g_astTafXsmsMoIdleActTbl[];

/* XSMS MoWaitFdnCnf 的事件处理表 */
extern TAF_ACT_STRU                            g_astTafXsmsMoWaitFdnCnfActTbl[];


/* XSMS Mo_WAIT_CC_CNF的事件处理表 */
extern TAF_ACT_STRU                            g_astTafXsmsMoWaitCcCNFActTbl[];

/* XSMS MO_WAITING_XCC_ORIG_CALL_CNF的事件处理表 */
extern TAF_ACT_STRU                            g_astTafXsmsMoWaitXccCallCnfActTbl[];

/* XSMS Mo_WAITING_XCC_SO_IND的事件处理表 */
extern TAF_ACT_STRU                            g_astTafXsmsMoWaitXccSoIndActTbl[];

/* XSMS MO_WAITING_AS_CNF状态下事件处理表 */
extern TAF_ACT_STRU                            g_astTafXsmsMoWaitAsCnfActTbl[];

/* XSMS MO_WAITING_TL_ACK状态下事件处理表 */
extern TAF_ACT_STRU                            g_astTafXsmsMoWaitTlAckActTbl[];

/* XSMS MO_WAITING_XCC_END_CALL_CNF 状态下事件处理表 */
extern TAF_ACT_STRU                            g_astTafXsmsMoWaitCallEndActTbl[];




/*****************************************************************************
  5 消息头定义
*****************************************************************************/


/*****************************************************************************
  6 消息定义
*****************************************************************************/


/*****************************************************************************
  7 STRUCT定义
*****************************************************************************/


/*****************************************************************************
  8 UNION定义
*****************************************************************************/


/*****************************************************************************
  9 OTHERS定义
*****************************************************************************/


/*****************************************************************************
  10 函数声明
*****************************************************************************/
#if (FEATURE_ON == FEATURE_UE_MODE_CDMA)

extern VOS_UINT32 TAF_XSMS_GetMoFsmTblNum(VOS_VOID);

#endif

#if (VOS_OS_VER == VOS_WIN32)
#pragma pack()
#else
#pragma pack(0)
#endif




#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of TafXsmsMoFsmMainTbl.h */

