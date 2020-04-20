/**
    2020年4月20日  16点45分
    题目：输出特殊图案，请在C环境中运行，看一看
    分析：字符共有256个，不同字符，图案不同。
    编码：utf-8
*/

#include<stdio.h>

int main(void)
{
	//char a=32,b=33;  
    char a=34,b=35;  //此处更改a,b的值，输出结果则不同，多试一试
    printf("%c%c%c%c%c\n",b,a,a,a,b);
    printf("%c%c%c%c%c\n",a,b,a,b,a);
    printf("%c%c%c%c%c\n",a,a,b,a,a);
    printf("%c%c%c%c%c\n",a,b,a,b,a);
    printf("%c%c%c%c%c\n",b,a,a,a,b);

	return 0;
}
