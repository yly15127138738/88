/*********************************************************************************************
* 文件：fan.c
* 作者：Lixm 2017.10.17
* 说明：风扇驱动代码
* 修改：
* 注释：
*********************************************************************************************/

/*********************************************************************************************
* 头文件
*********************************************************************************************/
#include "fan.h"

/*********************************************************************************************
* 名称：fan_init()
* 功能：风扇传感器初始化
* 参数：无
* 返回：无
* 修改：
* 注释：
*********************************************************************************************/
void fan_init(void)
{
  P0SEL &= ~0x08;                                               //配置管脚为通用IO模式
  P0DIR |= 0x08;                                                //配置控制管脚为输出模式
  FAN = FAN_OFF;                                                //关闭风扇
}
