//������������������ȼ�

#include<stdio.h>

int main(void)
{
	float score;
	printf("��������ķ�����\n");
	scanf("%f",&score);
	
	if (score > 100 || score< 0)
	    printf("�������������Ч��ֵ��\n");
	else if (score > 90)
	    printf("��ĳɼ�Ϊ�ŵȣ�\n"); 
	else if (score > 80)
	    printf("��ĳɼ�Ϊ���ã�\n");
	else if(score > 60)
	    printf("��ĳɼ�Ϊ����\n");
	else
	    printf("��ĳɼ�Ϊ������\n"); 
	
	return 0;
} 
