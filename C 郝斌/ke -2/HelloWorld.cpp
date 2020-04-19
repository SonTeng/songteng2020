#include<stdio.h>

int main(void)
{
	printf("HelloWorld!\n");
	int i = 10.6;
	printf("%d\n",i);
	char b = 'A';
	printf("%c\n",b); 
	
	printf("int 的大小%dB\n",sizeof(int));
	
	int c;
	printf("%d\n",c);
	
	int d = 22;
	printf("%d\n",d);   //十进制输出 
	printf("%x\n",d);   //十六进制小写字母输出 
	printf("%o\n",d);   //八进制输出 
	//printf("%\n",d);
	
	int e = 0x2C;
	printf("%d\n",e); 
	
	int f = 017;
	printf("%d\n",f);
	
	float g = 3.2e3;
	printf("%f\n",g);  
	
	return 0;
	
	
 } 
