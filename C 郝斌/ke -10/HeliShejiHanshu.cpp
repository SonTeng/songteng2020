/**
   2020��4��10�� 19��48��
   ��κ�����ƺ���
   �ж�һ������ʵ�ֺò��ã�Ҫ������Ŀ��ظ������Ը߲��� 
   �õ�������ʵ�֣�����Ŀ����������
   ���򣺸���һ�����֣����1~������֮�������������������� 
*/

#include<stdio.h>

bool isPrime(int val)
{
	int i;
	for(i=2;i<val;i++)
	   if(val%i == 0)
	      break;
	      
	if(i == val)
	   return true;
	else
	   return false;
	   
}

void printPrime(int m)
{
	
	if(isPrime(m))
	  printf("%-8d",m);
	//else
	//  printf("the num you input %5d is not a prime num!\n",m);
} 

void traverseVal(int n)
{
	printf("the prime nums between 1 and %d are: \n",n);
	int j;
	for(j=2;j<=n;j++){
		printPrime(j);
	}
}

int main(void)
{
	int num;
	printf("please input the num: ");
	scanf("%d",&num);
	
	traverseVal(num);
	
	return 0;
}
