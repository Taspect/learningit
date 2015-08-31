#include "reg52.h"
/***************************************************
	名称：不同频率闪烁LED
	作者：Taspect
	日期：2015/08/31
**************************************************/

void main()
{
	unsigned int im,in;
	unsigned int iTcunort;
	do
	{

		for (im = 0; im < 10; ++im)
		{
			P0 = 0xAA; //1010 1010
			for(iTcunort = 0; iTcunort < 20000; ++iTcunort);//周期1
			P0 = 0x55; //0101 0101
		}

		for (in = 0; in < 10; ++in)
		{
			P0 = 0xAA;
			for (iTcunort = 0; iTcunort < 10000; ++iTcunort);//周期2
			P0 = 0x55;
		}
	}while(1);

}