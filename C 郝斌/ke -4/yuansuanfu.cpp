/**
   ���ݣ���������������� 

*/

#include<stdio.h>

int main(void)
{
	int s = 0;
	
	/** 
	int i;
	int j = 30;
	for(i=1;i<=5;i++)
	{
		s += j/i;
	}
	
	printf("s = %d\n",s);
	*/
	
	printf("����������������1��%d\n",17/3);
	printf("����������������2��%f\n",17/3.0);
	printf("����������������3��%f\n",17.0/3);
	
	printf("ȡ��������������1��%d\n",-13%3);
	printf("ȡ��������������2��%d\n",13%-3);
	printf("ȡ��������������3��%d\n",-13%-3);
	printf("ȡ��������������4��%d\n",-13%-23);
	
	//�߼������
	int k = 33;
	int m;
	m = (3>2) && (k==8);
	printf("m = %d, k = %d\n",m,k); 
	m = (3>2) && (k=8);
	printf("m = %d, k = %d\n",m,k);
	m = (1>2) && (k=75);
	printf("m = %d, k = %d\n",m,k);
	//��ʱ��m=0;k=8
	m = (1>2) || (k=75);
	printf("m = %d, k = %d\n",m,k);  //���Ϊ��m=1,k=75 
	
	
	int q = 0;
	(q = 3 + 2 * 4 && 5 || 6 - 4)+=6 ;
	printf("q = %d\n",q); 
	
	int p;
	char ch1 ;
	printf("please intput p: ");
	scanf("%d",&p);                    //����ڴ˴�����123m����ch1���������룬����ֱ�ӽ�m��ֵ��ch1 
	printf("p = %d\n",p);
	printf("please input ch1: ");
	scanf("%c",&ch1);
	printf("ch1 = %c\n",ch1);
	
	
	
	return 0;
} 
