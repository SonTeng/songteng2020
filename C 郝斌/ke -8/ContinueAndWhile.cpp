/**
    2020��4��7�� 17��10��
	ʾ����continue��while 
*/ 

#include<stdio.h>

int main(void)
{
	int i,j;
	char ch;
	
	printf("pkease input your number i: ");
	scanf("%d",&i);
	printf("i = %d\n",i);
	
	while((ch = getchar())!='\n')   // \n���з���������iʱ�������µ�enter��Ĭ��Ϊ���н��� 
	    continue;
	    
    printf("pkease input your number j: ");
	scanf("%d",&j);
    printf("j = %d\n",j);
	
	return 0;
}
