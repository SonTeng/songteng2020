/**
   2020��4��8�� 23��52��
   �����������ͺͺ���ִ���巵�����Ͳ�һ�� 
*/

#include<stdio.h>

int f()   //f�ķ�������Ϊint���� 
{
	return 10.6;  //return����Ϊfloat���� 
}


int main(void)
{
	double x;
	x=f();
	
	printf("x = %lf\n",x);   //���Ϊ��x = 10.000000 
	
	
	return 0;
}
