/**
   2020��4��8�� 23��31��
   �����β�void 
*/

#include<stdio.h>

int func(void)  //�β�void��ʾ�ú������ܽ������ݣ�int��ʾ��������ֵ��int���� 
{
	return 10;  //return��ʾ��������������10 
} 

void g(void) //��һ��void��ʾ�ú���û�з���ֵ 
{
	//return 0;//��Ϊvoid��ʾû�з���ֵ����return��ʾ�з���ֵ�����﷨���� 
}

int main(void)  
{
	int j;
	j = 99;
	
	j = func();
	//j = func(80);//���� 
	//j = g();//��Ϊg����û�з���ֵ���ʸ�ֵ���� 
	printf("j = %d\n",j);	
	
	return 0;
}
