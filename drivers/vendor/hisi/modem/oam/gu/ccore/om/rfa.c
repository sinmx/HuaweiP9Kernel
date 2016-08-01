/******************************************************************************

                  版权所有 (C), 2001-2011, 华为技术有限公司

 ******************************************************************************
  文 件 名   : RFA.C
  版 本 号   : 初稿
  作    者   : 李霄 46160
  生成日期   : 2008年2月1日
  最近修改   :
  功能描述   : RF校准模块
  函数列表   :
  修改历史   :
  1.日    期   : 2008年2月1日
    作    者   : 李霄 46160
    修改内容   : 创建文件

******************************************************************************/


#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

/*****************************************************************************
    协议栈打印打点方式下的.C文件宏定义
*****************************************************************************/
/*lint -e767 修改人：m00128685；检视人：l46160；原因简述：打点日志文件宏ID定义*/
#define    THIS_FILE_ID        PS_FILE_ID_RFA_C
/*lint +e767 修改人：m00128685；检视人：l46160*/


/*****************************************************************************
  1 头文件包含
*****************************************************************************/
#include "rfa.h"



/*****************************************************************************
 函 数 名  : RFA_MsgProc
 功能描述  : RFA模块的消息处理函数
 输入参数  : pMsg  消息块


 输出参数  : 无
 返 回 值  : 成功，失败
 调用函数  :
 被调函数  :

 修改历史  :

*****************************************************************************/
VOS_UINT32 RFA_MsgProc(MsgBlock *pMsg)
{
    return VOS_OK;
}


/*****************************************************************************
 函 数 名  : WuepsRfaPidInit
 功能描述  :
 输入参数  : 无


 输出参数  : 无
 返 回 值  :
 调用函数  :
 被调函数  :

 修改历史  :

*****************************************************************************/
VOS_UINT32 WuepsRfaPidInit ( enum VOS_INIT_PHASE_DEFINE ip )
{
    return VOS_OK;
}
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

