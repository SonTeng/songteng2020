/**
   2020��4��10�� 15��59��
   ���� �ж� 
*/

#include<stdio.h>

void isSuShu(int num)
{
	int i;
	for(i=2;i<=num/2;i++)
	{
		if(num%i == 0)
		{
		   	printf("the num you input %d is not a ����!\n",num);
		    return;
		}
	}
	printf("the num you input %d is a ����!\n",num);
}

/**
   for(i=2;i<num;i++)
      if(num%2 == 0)
	     break;
   if(i == num)
       printf("yes\n");
   else
       printf("no\n"); 
*/ 

int main(void)
{
	int val;
	printf("please input the num: ");
	scanf("%d",&val);
	
	isSuShu(val);
	 
	
	
	return 0;
}
