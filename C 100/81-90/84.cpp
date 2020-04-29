/**
    2020年4月29日   00点14分
    题目：一个偶数总能表示为两个素数之和
    分析：
    编码：utf-8
*/

#include<stdio.h>
#include<math.h>

int isPrime(int n)
{
    int k;
    int s=0;
    for(k=2;k<=sqrt(n);k++)
    {
        if(n%k==0)
            s++;        
    }
    return (s!=0)?0:1;
}

int main(void)
{
	int i,j,num;
    int count=0;//只打印一个成立等式即可
    
    printf("please input your num: ");
    scanf("%d",&num);

    printf("\nLine1: %d\n",isPrime(9));
    printf("Line2: %d\n",isPrime(7));

    for(i=2;i<num;i++)
    {   
        for(j=2;j<=num-i;j++)
            if(isPrime(i) && isPrime(j) && (i+j==num))
            {
                printf("Line3: %d = %d + %d\n",num,i,j);
                count++;
                break;
            } 
        if(count!=0)
            break;
    } 

	return 0;
}

