/**
    2020��4��10�� 19��18��
	�����ĵ����뺯���Ķ����˳�� 
*/

#include<stdio.h>

void f(void); //���û����仰��������ĺ���˳��һ��������f�����g���������� 

void g(void)
{
	f();
}

void f(void)
{
	printf("ŶŶŶŶŶ��\n");
} 


int main(void)//
{
	g();
	
	
	return 0;
}
