/**
    2020��4��7�� 16��29��
	ʾ����break����ѭ������ڲ���if��� 
*/ 

#include<stdio.h>

int main(void)
{
	int i;
	int j;
	for(i=0;i<5;++i)
	{
		printf("ffff!\n");
		if(3>2)
		   break;  //break������if�ڲ�����䣬����ֹ��ȴ���ⲿ��forѭ�� 
		printf("hhhh!\n");
	}
	
	for(i=0;i<5;i++)
	{
		for(j=1;j<4;j++)
		   break;  //�ڶ��Ƕ��ѭ���У�breakֻ����ֹ���������ѭ��
		printf("wwwww!\n");
	 } 
	
	int x,y;
	int a,b;
	x = 1;
	y = 0;
	a=b=0;
	
	switch(x)
	{
		case 1:
			switch(y)
			{
				case 0:
					a++;
					break;
				case 1:
					b++;
					break;
					
			}
			break;   //��ʱ���Ϊ1=1,b=0�������˴�breakע��������Ϊa=2,b=1 
		case 2:
			a++;
			b++;
			break;
		default:
			a = 10;
			b = 11;
			break;
	}
	printf("a = %d, b = %d \n",a,b);
	
	return 0;
 } 
