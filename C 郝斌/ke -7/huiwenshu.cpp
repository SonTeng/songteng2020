/**
   2020��4��7�� 14��11��
   �±� C���Խ̳� 
   �жϻ����� ���Ӽ�������һ�����֣������������ǻ��������򷵻�yes�����򷵻�no 
*/ 

#include<stdio.h>

int main(void)
{
	int val;
	int temp;
	int a;
	a = 0;
	printf("please the input nums: ");
	scanf("%d",&val);
	
	temp = val;
	while(temp)
	{
		a = a*10 + temp%10;
		temp /= 10;
	}
	
	if(a == val)
	   printf("yes\n");
	else
	   printf("no\n");
	
	return 0;
	
} 
