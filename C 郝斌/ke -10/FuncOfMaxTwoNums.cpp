/**
     2020��4��8�� 22��52��
	 ���� 
*/

#include<stdio.h>

void max_both_two_nums(int i,int j)  //����,i,j����Ϊ�βΣ�void��ʾ����û�з���ֵ 
	{
		if(i>j)
		    printf("the two nums you input %2d an %2d, the max is: %2d\n",i,j,i);
		else
		    printf("the two nums you input %2d an %2d, the max is: %2d\n",i,j,j);
		// return 0;  //����������Ͳ���void����int 
	}
	
int main(void)  //C������һ����ִ��main���� 
{
	int a,b,c,d,e,f;
	a=1,b=2,c=3,d=7,e=8,f=-9; 
	
	
	
	max_both_two_nums(a,b);
	max_both_two_nums(c,d);
	max_both_two_nums(e,f);
	
	return 0;
}	
