/**
    2020年4月24日  17点16分
    题目：给定一个五位数，判断是否是回文数。如12321。
    分析：
    编码：utf-8
*/

#include<stdio.h>

int main(void)
{
    int x,a,b,c,d,e;

    printf("please input the num: ");
    scanf("%d",&x);
    printf("the num you input is %d\n",x);

    a=x/10000;  // 析解出万位
    b=x%10000/1000;  //析解出千位
    //c=x%1000/100;  //析解出百位
    d=x%100/10;   //析解出十位
    e=x%10;   //析解出个位

    if(a==e && b==d)
        printf("this num %d is a huiwenshu\n",x);
    else 
        printf("the num %d is not a huiwenshu\n",x);

	
	return 0;
}

