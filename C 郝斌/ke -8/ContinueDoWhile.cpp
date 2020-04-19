/**
     2020年4月8日 15点51分
	 continue在do...while中和if语句的搭配使用 
*/ 

#include<stdio.h>

int main(void)
{
	int i=0,s=0;
	
	do
	{
		if(i%2)
		{
			i++;
			continue;
		}
		i++;
		s+=i;
		printf("i = %d   ,",i);
		printf("s = %d   ;",s);
		printf("\n");
	}while(i<5);
	
	
	printf("\n");
	printf("%d\n",s);
	
	
	
	return 0;
}
