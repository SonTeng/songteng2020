/**
     2020��2��6��01��04��
	 ���ݣ��±�C���� ��4��
	 Ŀ�꣺scanf�������÷� 

*/


#include<stdio.h>

int main(void)
{
	//printf("hello world!\n");
	
	int i;
	//printf("%d\n",&i); 
	printf("please input the number you want i to be: ");
	scanf("%d",&i);    //&:ȡ��ַ������ʾi�ĵ�ַ 
	//scanf("m%d",&i); //��������ʱ��Ҫ��m��ͷ��Ȼ������ֵ��������֮��������ֵ��m��֮Ϊ�ǿ�������� 
	//scanf("%d\n",&i);//���ʾ������������ֵ����Ҫ������/n��Ȼ��enter����ܽ�������ȷ���� 
	printf("i = %d\n",i);
	
/**
	//һ�θ�����������̸�ֵ
	int m,n,j;
	printf("please input m,n,j the number:\n");
	scanf("%d%d%d",&m,&n,&j);
	//scanf("%d,%d,%d",&m,&n,&j);  //�����ڷ�������Ʒ�����ʱ������ԭ�����룬����һ�� 
	printf("m = %d, n = %d, j = %d\n",m,n,j);
	 
	//printf("%d\n",&i); 
*/ 
    //�����ϴ�����ʱ����������
	int j;
	char ch;
	/** 
	printf("please input the number you want j to be: "); 
	scanf("%d",&j);
	printf("%d\n",j);//��ʱ����i����180m����i������180����j���������룬�����ȡ�ϴ�����180mʱ����ƥ��i��ʣ�µĲ�����Ϊj��ֵ��� 
	*/
	while((ch = getchar())!='\n')
	   continue;
	printf("please input the number you want j to be: "); 
	scanf("%d",&j);
	printf("j = %d\n",j);  //��ʱ��j�����룬��������i���������ֵӰ�� 
		
	
	return 0;
}
