/**
     2020��4��8�� 15��51��
	 continue��do...while�к�if���Ĵ���ʹ�� 
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
