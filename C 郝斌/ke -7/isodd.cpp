#include<stdio.h>

int main(void)
{
	
	if(1>2);   //����䣬�ڷֺ�ǰ����Լӿո�򰴻س���������ͬЧ���� 
	   printf("AAAA!\n");
	printf("BBBB!\n");
	
	
	if(3>2)  // �������ӷֺţ����ᵼ�³�����뵽��13��ʱ���� 
	  printf("hhh\n");
	else
	  printf("fff\n"); 
	  
	  
    if(3>2)
       printf("ABABA\n");
    else if(3>1)
       printf("BABAB\n");
    else 
       printf("CACAB\n");
/**
�����˴���ִ�н��Ϊ��
AAAA!
BBBB!
hhh
ABABA 
*/

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
	//else
	//    printf("��ĳɼ�Ϊ������\n"); 
//��������else���ע�͵�֮�󣬼�ʹ����ĳɼ�Ϊ55��Ҳû�������ִ�У�������Ȼ�������У�ֻ�ǲ�ִ��δע�͵�֮ǰ�Ľ�����ѡ� 
	
}
