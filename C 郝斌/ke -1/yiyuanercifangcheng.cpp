/** һԪ���η��̵ĳ���
    ax^2 + bx + c = 0
	��ⷽ��
*/

// ��ȡa,b,c����ϵ�������棬�ж�b^2-4*a*c�Ƿ���ڵ���0����Ĺ�ʽΪ��-b+sqrt(b^2-4*a*c))/2�ͣ�-b-sqrt(b^2-4*a*c))/2 ���������� 

#include<stdio.h>
#include<math.h>
 
int main(void)
{
	//������ϵ�����浽������� ��ͨ�����������棬�����������������ӡ� 
	int a = 1;   
	int b = -5;
	int c = 6;
	
	float delta; //delta��ʾ  b*b - 4*a*c 
	float x1;
	float x2;

	delta = b*b - 4*a*c;
	
	if(delta>0)
	{
		//������ 
		x1 = (-b + sqrt(delta))/(2*a);
		x2 = (-b - sqrt(delta))/(2*a);
		printf("��һԪ���η����������⣬x1 = %f, x2 = %f\n",x1,x2);
	}
	else if(delta == 0)
	{
		//һ���� 
		x1 = (-b + sqrt(delta))/(2*a);
		x2 = x1;
		printf("��һԪ���η�����Ψһ�⣬x1 = x2 = %f\n",x1);
	 } 
	 else
	 {
	 	//�޽� 
	 	printf("�÷����޽�");
	 }
	
	 
	
	return 0;
 } 
