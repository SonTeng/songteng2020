/**
   ������������Լ�
   2020��4��5��20��23�� 
*/ 

#include<stdio.h>

int main(void)
{
	int i;
	int j;
	int k;
	int m;
	
	i = j = 3;
	k = i++;
	m = ++j;
	
	printf(" i = %d\n j = %d\n k = %d\n m = %d\n",i,j,k,m);
	
	
	int n = (1>0)?2:3; 
	printf(" n = %d\n",n);
	
	//���ű��ʽ
	i = 3;
	int p = (i++,++i,i+2,i-3);   // i+2����ִ���ˣ���ִ�н��û�ж�i���и�ֵ 
	printf(" p = %d\n",p); 
	
	return 0;
}
