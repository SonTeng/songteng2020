/**
    2020年4月25日  19点36分
    题目：取一个整数a从右端开始的4-7位。
    分析：先使a向右移4位，设置一个低4位全为1其余位全为0的数，将两者进行&运算。
         注1：在标准C语言的文档里，取反、左移、按位与、按位异或、按位或都属于双目运算符。结合方向是“自左至右”，即：先左后右，也叫“左结合性”。
         注2：Q: how to get 1111 by <<   A: c=~(~0<<4);
    编码：utf-8
*/

#include<stdio.h>

int main(void)
{
	unsigned a,b,c,d;
    printf("please input the value a(in Octal): ");
    scanf("%o",&a);  //例如0777 =  0 00000001 11111111
    printf("\40:Line1 a in Octal is %o\n",a);

    b=a>>4;
    printf("\40:Line2 b in Octal is %o\n",b);
    c=~(~0<<4); // c = 1111 how to get 1111 by <<
    printf("\40:Line3 c int Octal is %o\n",c);

    d = b&c;
    printf("\40:Line 4 a is %o,and the d is %o\n",a,d);
    
	


	return 0;
}

