/**
   2020��4��10��  21��38��
   ȫ�ֱ����;ֲ����� 
*/

#include<stdio.h>

int k = 1000;    //ȫ�ֱ��� 

void g(void)
{
	printf("k = %d\n",k);
}
 
void f(void)
{
	g();
	int j = 20;   // j�Ǿֲ����� 
	printf("%d / %d = %d\n",k,j,k/j);
 } 

int main(void)
{
	int i;   //i�Ǿֲ����� 
	f();
	
	//k = 10;
	//printf("k = %d\n",k);
	
	
	return 0;
}
