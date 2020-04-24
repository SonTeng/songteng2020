/**
    2020年4月20日  17点49分
    题目：判断101-200之间有多少素数，并输出所有素数。
    分析：判断一个数是否为素数，用这个数分别去除2到sqrt(这个数)，如果能整除，则表明此数不是素数，反之则为素数。
    编码：utf-8
*/

#include<stdio.h>
#include<math.h>

bool isPrime(int *p)
{
    int i;
    for(i=2;i<sqrt(*p);i++)
    {
        if(*p % i == 0)
           return true;
        else 
           return false;
    }
}

int main(void)
{
	int k;
    int total = 0;

    for(k=101;k<201;k++)
    {
        if(isPrime(&k) == 1)
        {
            printf("%-5d",k);  //每次输出占5位靠左对齐
            total++;
            if(total%10 == 0)  //每输出10个素数就换行
                printf("\n");
        }           
    }

    printf("\ntotal = %d\n",total);

	
	return 0;
}
