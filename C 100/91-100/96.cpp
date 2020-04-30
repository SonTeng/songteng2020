/**
    2020年4月29日  19点13分
    题目：计算字符串中子串出现的次数
    分析：
    编码：utf-8
*/

#include<stdio.h>
#include<string.h>

int main(void)
{
	char a[50],b[20];
    int i,j,k,count=0;
    printf("Line1: please input your long string: ");
    gets(a);
    printf("Line2: please input your short string: ");
    gets(b);

    for(i=0;i<strlen(a);i++)
    {
        k=i;
        for(j=0;j<strlen(b)&&(a[k]==b[j]);j++)
            k++;
        if(j==strlen(b))
            count++;
    }
    printf("Line3: %s has emerged %d times.\n",b,count);

	return 0;
}

/*
结果：
Line1: please input your long string: I like eating apple,appalling to hear you eating two.
Line2: please input your short string: eating
Line3: eating has emerged 2 times.
*/