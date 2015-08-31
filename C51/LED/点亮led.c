#include "reg52.h" //包含特殊功能寄存器定义的头文件
sbit LED0 = P0^0 ;//定义p0^0为LED0

void main(){

	LED0 = 0; //点亮LED
	while(1);
}