/*
    2020��2��3��23��00��
	Ŀ�ģ������ڿ�
	���ܣ� 

*/ 


#include<stdio.h>

int main(void)
{
	printf("helloworld!\n");
	
	// if () //if��()�м����ո��뺯�����������𣬷��ţ���Ҫ�ɶԵ��� 
	//��ͬ����֮����໥����
	int i = 65535;
	int j = 2147483647;
	int k = 2147483648;
	int m = 2147483649;
	printf("i = %d\n",i); 
	printf("j = %d\n",j);
	printf("k = %d\n",k);
	printf("m = %d\n",m);
	
	//ʲô��ASCII��
	char ch = 'A';
	// char ch = "AB";//Error:�ַ������ܸ�ֵ�������ַ� 
	// char ch = "A";//Error
	// char ch = 'AB';//Error
	// char ch = 'B';//Error:��Ϊch���������������Σ����±��������ظ����壬���� 
    printf("ch = %c\n",ch);  
	printf("ch = %d\n",ch); 
	ch = 'C';  //ch�Ǳ��������Ը��¸�ֵ 
	printf("ch = %c\n",ch);   
	printf("ch =    %d\n",ch); 
	int ch1 = 97;
	printf("ch1 = %c\n",ch1);      // ASCII:97-->a            
     
	//printf()���÷�
	printf("haha!\n");  // \n��ʾ���У�ת���ַ�:��Щ�ַ�û�а취�õ����ַ���ʾ�������������ַ���ʾ                
    int n = 10;
	printf("n = %d\n",n); // %d��ʾʮ����  ע������n ��int���ͣ����ڼ��������34���ƴ洢�ģ��������ʱ��ָ�������ʽ
	printf("n = %X\n",n); // %X��ʾ��ʮ�����ƴ�д��ĸ��� 
	printf("n = %#X\n",n); //��ʮ���������������������ǰ��OX����ʮ��������ֵ�Դ�д��ĸ��� 
	printf("n = %#x\n",n);
	printf("n = %o\n",n); // %X��ʾ�԰˽��ƴ�д��ĸ��� 
	
	printf("����ch1�ͱ���n��ֵ�ֱ�Ϊ %d %d\n",ch1,n); 
	// printf("%d\n",ch1 n); //Error,������Ʒ�����������ĸ������뻥��ƥ�䣬����һ�Զ� 
	
	
	                  
	return 0;
} 
/*
    ��Dev-c++�е��������ǣ�
-------------------------------------
helloworld!
i = 65535
j = 2147483647
k = -2147483648
m = -2147483647
ch = A
ch = 65
ch = C
ch =    67
ch1 = a
haha!
n = 10
n = A
n = 0XA
n = 0xa
n = 12
����ch1�ͱ���n��ֵ�ֱ�Ϊ 97 10
-------------------------------------    
�ܽ᣺	 

*/ 
