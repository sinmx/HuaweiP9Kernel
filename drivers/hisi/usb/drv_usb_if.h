/******************************************************************************

                  版权所有 (C), 2001-2011, 华为技术有限公司

 ******************************************************************************
  文 件 名   : usb_api.h
  版 本 号   : 初稿
  作    者   : 夏青 00195127
  生成日期   : 2012年9月15日
  最近修改   :
  功能描述   : usb_api.c 的头文件
  函数列表   :
  修改历史   :
  1.日    期   : 2012年9月15日
    作    者   : 夏青 00195127
    修改内容   : 创建文件

******************************************************************************/

/*****************************************************************************
  1 其他头文件包含
*****************************************************************************/

#ifndef __USB_API_H__
#define __USB_API_H__

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif



/*****************************************************************************
  2 宏定义
*****************************************************************************/
#define USB_API_DBG printk

#define M_ZERO          0x0001

/*USB_UDI_ENABLE_CB_T在 hisi\include\drv\acore\mdrv_usb.h中也有一份定义，
请注意同步修改*/
#ifndef _MDRV_USB_H_
typedef void (*USB_UDI_ENABLE_CB_T)(void);
typedef void (*USB_UDI_DISABLE_CB_T)(void);
#endif

typedef int (*ACM_HANDLE_COMMAND_CB_T)(int cmd, int tty_idx, char *buf, int size);

/*****************************************************************************
  3 枚举定义
*****************************************************************************/

/*****************************************************************************
  4 消息头定义
*****************************************************************************/


/*****************************************************************************
  5 消息定义
*****************************************************************************/


/*****************************************************************************
  6 STRUCT定义
*****************************************************************************/
typedef struct PNP_CALLBACK_STACK
{
    void (*pCallback)(void);
    struct PNP_CALLBACK_STACK *pPre;
} PNP_CALLBACK_STACK;

/*****************************************************************************
  7 UNION定义
*****************************************************************************/


/*****************************************************************************
  8 OTHERS定义
*****************************************************************************/


/*****************************************************************************
  9 全局变量声明
*****************************************************************************/


/*****************************************************************************
  10 函数声明
*****************************************************************************/
unsigned int BSP_ACM_RegCmdHandle(ACM_HANDLE_COMMAND_CB_T pFunc);


#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of usb_api.h */
