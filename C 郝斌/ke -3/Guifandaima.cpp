/*
    2020年2月3日23点00分
	目的：第三节课
	功能： 

*/ 


#include<stdio.h>

int main(void)
{
	printf("helloworld!\n");
	
	// if () //if与()中间间隔空格，与函数调用相区别，符号（）要成对的敲 
	//不同类型之间的相互复制
	int i = 65535;
	int j = 2147483647;
	int k = 2147483648;
	int m = 2147483649;
	printf("i = %d\n",i); 
	printf("j = %d\n",j);
	printf("k = %d\n",k);
	printf("m = %d\n",m);
	
	//什么是ASCII码
	char ch = 'A';
	// char ch = "AB";//Error:字符串不能赋值给单个字符 
	// char ch = "A";//Error
	// char ch = 'AB';//Error
	// char ch = 'B';//Error:因为ch变量被定义了两次，导致变量名被重复定义，出错 
    printf("ch = %c\n",ch);  
	printf("ch = %d\n",ch); 
	ch = 'C';  //ch是变量，可以更新赋值 
	printf("ch = %c\n",ch);   
	printf("ch =    %d\n",ch); 
	int ch1 = 97;
	printf("ch1 = %c\n",ch1);      // ASCII:97-->a            
     
	//printf()的用法
	printf("haha!\n");  // \n表示换行，转义字符:有些字符没有办法用单个字符表示，所以用两个字符表示                
    int n = 10;
	printf("n = %d\n",n); // %d表示十进制  注：尽管n 是int类型，但在计算机中以34进制存储的，所以输出时需指定输出格式
	printf("n = %X\n",n); // %X表示以十六进制大写字母输出 
	printf("n = %#X\n",n); //以十六进制输出，且在输出结果前加OX，并十六进制数值以大写字母输出 
	printf("n = %#x\n",n);
	printf("n = %o\n",n); // %X表示以八进制大写字母输出 
	
	printf("变量ch1和变量n的值分别为 %d %d\n",ch1,n); 
	// printf("%d\n",ch1 n); //Error,输出控制符和输出参数的个数必须互相匹配，不可一对多 
	
	
	                  
	return 0;
} 
/*
    在Dev-c++中的输出结果是：
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
变量ch1和变量n的值分别为 97 10
-------------------------------------    
总结：	 

*/ 
