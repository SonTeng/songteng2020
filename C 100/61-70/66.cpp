/**
    2020年4月27日  22点25分
    题目：输入3个数，a,b,c，按大小顺序输出
    分析：利用指针方法
    编码：utf-8
*/

#include<stdio.h>

void swap_two_nums(int *p,int *q)
{
    int temp;
    if(*p<*q)
    {
        temp=*p;
        *p=*q;
        *q=temp;
    }
}

int main(void)
{
	int a,b,c;
    printf("please input three nums,between spaces: ");
    scanf("%d %d %d",&a,&b,&c);
    printf("before: a=%d, b=%d, c=%d\n",a,b,c);

    if(a<b)
       swap_two_nums(&a,&b);
    if(a<c)
       swap_two_nums(&a,&c);
    if(b<c)
       swap_two_nums(&b,&c);

    printf("before: a=%d, b=%d, c=%d\n",a,b,c);

	


	return 0;
}

