#include "reg52.h"
/***********************

名称：LED单灯闪烁
作者：Taspect
时间：2015年8月28日

***********************/
sbit LED = P0^0;

void main()
{
	unsigned int iTcunort;

	while(1)
	{
	LED = 1;
	LED = 0;
	for (iTcunort = 0; iTcunort < 30000; ++iTcunort);
	LED = 1;
	for (iTcunort = 0; iTcunort < 30000; ++iTcunort);
	}	
	
}
