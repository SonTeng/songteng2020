/**
    2020年4月24日  19点56分
    题目：求100以内的素数
    分析：
    编码：utf-8
*/

#include<stdio.h>
#include<math.h>

bool isPrime(int num)
{
    int i;
    int flag=1;
    for(i=2;i<=sqrt(num);i++)
    {
        if(num%i==0)
           flag=0;
    }
    if(flag==0)
       return false;
    else
       return true;
    
}

void printPrime(int n)
{
    int value = isPrime(n);

    if(value!=0)
       printf("%-5d",n);


}

int main(void)
{
	int j,count=1;
    
    printf("the prime nums between 1-100:\n");
    
    for(j=2;j<101;j++)
    {
        printPrime(j);
        count++;
    }
        
	return 0;
}

