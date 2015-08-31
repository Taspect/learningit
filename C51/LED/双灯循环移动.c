#include "reg52.h"

/************************************
	名称：双灯循环移动
	作者：Taspect
	日期：2015/08/31
	说明：左移操作"<<" 右移符号">>"
************************************/

void main()
{
	unsigned int iTcunort;
	P1 = 0x3F;
	do
	{
		for (iTcunort = 0; iTcunort < 20000; ++iTcunort);

		if (P1 == 0xFC)
		{
			P1 = 0x7E;
		}
		else if(P1 == 0x7E)
		{
			P1 >>= 1;
		}
		else
		{
			P1 >>= 1;
			P1 = P1|0x80;
		}


	}while(1);
}