/**
   2020��4��10�� 16��24��
   �����ж�+�ṹ������ 
*/

#include<stdio.h>

bool isPrime(int val)  //����Ҫ�ֿ�д���������ֻ�ж��ǲ������������ڽ�����������д����������� 
{
	int i;
	
	for(i=2;i<val;i++)
	   if(val%i == 0)
	      break;
	if(i==val)
	   return true;
	else
	   return false;
}

int main(void)
{
	int m;
	printf("please input the nmu: ");
	scanf("%d",&m);
	
	if(isPrime(m))
	    printf("Yes!\n");
	else
	    printf("No!\n");
	
	return 0;
}
