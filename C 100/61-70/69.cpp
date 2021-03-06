/**
    2020年4月28日   00点03分  
    题目：有n个人围成一圈，顺序编号，从第一个人开始报数，从1到3报数，凡是报到3的人退出圈子，问最后留下的是原来几号的那位。
    分析：首先应该确定的是在第3号人退出圈子后，第4号人该报1，其次，这是个圈，第二圈不从第1号开始，而是从第一圈最后一个报3并退出之后下一个报1的人开始。
    编码：utf-8
*/

#include<stdio.h>

int main(void)
{
	int i,k,m,n,*p;

    printf("please input the nums: ");
    scanf("%d",&n);

    int num[n];
    p=num;
    for(i=0;i<n;i++)
       *(p+i)=i+1;

    i=k=m=0;  //i表示数组下标，k表示报数，m表示报3的人数，原则上结束时m=n-1或m=n-2
    while(m<n-1)
    {
        if(*(p+i)!=0)  //把不为0的数进行1-3报数
            k++;
        if(k==3)
        {
            *(p+i)=0;  //所谓报3退出，即将报3置0，而不是从数组中删除
            k=0;
            m++;
        }
        i++;
        if(i==n)  //表示一轮结束
            i=0;
    }

    while(*p==0) //数组中最后一个数
        p++;
    printf("%d is left!\n",*p);


	return 0;
}

