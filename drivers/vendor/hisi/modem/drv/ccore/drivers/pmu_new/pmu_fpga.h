/*************************************************************************
*   版权所有(C) 1987-2020, 深圳华为技术有限公司.
*
*   文 件 名 :  pmu_fpga.h
*
*   作    者 :  xuwenfang
*
*   描    述 :  pmu_fpga.c 的头文件
*
*   修改记录 :  2013年3月29日  v1.00  x00195528  创建
*
*************************************************************************/

#ifndef __PMU_FPGA_H__
#define __PMU_FPGA_H__

/*函数声明*/
/*****************************************************************************
 函 数 名  : pmu_fpga_init
 功能描述  : pmu fpga模块初始化
 输入参数  : 无
 输出参数  : 无
 返 回 值  : 无
 调用函数  : fastboot中pmu模块适配层
 被调函数  :
*****************************************************************************/
void pmu_fpga_init(void);

#endif