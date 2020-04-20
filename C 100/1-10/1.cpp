/**
    2020年4月20日 14点16分
    题目：有1，2，3，4四个数字，能组成多少个互不相同且无重复数字的三位数，都是多少？
    分析：用三重循环，可填在百位、十位、个位的数字都是1，2，3，4，组成所有排列后再去掉不满足条件的排列
    编码：utf-8
*/

#include<stdio.h>

int main(void)
{
    int i,j,k;
    int count;

    for(i=1;i<5;i++)
        for(j=1;j<5;j++)
            for(k=1;k<5;k++)
            {
                if(i!=j && i!=k && j!=k)
                    {
                        count++;
                        printf("%d%d%d  ",i,j,k);
                    }                        
            }	
    printf("\n");
    printf("共有%d个这样的无重复数字的三位数。\n",count);
	
	return 0;
}
