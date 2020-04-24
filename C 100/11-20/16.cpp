/**
    2020年4月20日  21点27分
    题目：输入两个正整数m和n，求出其最大公约数，和最小公倍数
    分析：先交换m和n，使得m表示较小数，n表示较大数
    编码：utf-8
*/

#include<stdio.h>

int main(void)
{
	int m,n;
    //int minnum,maxnum;
    int i,j,temp;

    printf("please input the num m: ");
    scanf("%d",&m);
    printf("\nplease input the num n: ");
    scanf("%d",&n);
    printf("\nthe two nums you input : m=%d   n=%d\n",m,n);

    if(m>n)  //交换m和n，使得m表示较小数，n表示较大数
    {
        temp = m;
        m = n;
        n = temp;
    }

    for(i=m;i>=1;i--)
        if(m%i==0 && n%i==0)
            {
                printf("the maxgys is %d\n",i);
                break;
            }
    
    for(j=n;j>=n;j++)
        if(j%m==0 && j%n==0)
        {
            printf("the mingbs is %d\n",j);
            break;
        }

	
	return 0;
}
