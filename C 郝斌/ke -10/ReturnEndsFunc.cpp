/**
   2020��4��9�� 00��03��
   return��ֹ���� 
*/

#include<stdio.h>

void f(void)
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("AAAAAAAAAAAAA\n");
		//break;   //��ֹforѭ�� 
		//continue; //��ֹcontinue�������䣬��ʼ��һ��ѭ�� 
		return; //��ֹf���� 
	}
	printf("BBBBBBBBB\n");
}


int main(void)
{
	f();
	
	
	return 0;
}
