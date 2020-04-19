/**
    2020年4月7日 16点29分
	示例：break用于循环语句内部的if语句 
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
		   break;  //break尽管是if内部的语句，但终止的却是外部的for循环 
		printf("hhhh!\n");
	}
	
	for(i=0;i<5;i++)
	{
		for(j=1;j<4;j++)
		   break;  //在多层嵌套循环中，break只能终止距它最近的循环
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
			break;   //此时结果为1=1,b=0，若将此处break注销，则结果为a=2,b=1 
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
