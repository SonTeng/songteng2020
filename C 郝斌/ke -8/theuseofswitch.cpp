/** 
   2020��4��7�� 15��52�� 
   switch���÷� 
*/

#include<stdio.h>

int main(void)
{
	int val;
	printf("please input you want enterto the floor: ");
	scanf("%d",&val);
	
	switch(val)   //ѡ��ִ�� 
	{
		case 1:         // case��default�ǳ������� 
			printf("go for 1 floor\n");
			break;      // break��ֹswitch 
		case 2:
			printf("go for 2 floor\n");
			break;
		case 3:
			printf("go for 3 floor\n");
		    break;
		default:
			printf("the floor is not exited\n");
			break;
	}
	
	
	
	return 0;
} 
