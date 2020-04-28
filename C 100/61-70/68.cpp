/**
    2020年4月27日  23点18分
    题目：有n个整数，使其前面各数顺序向后移m个位置，最后m个数变成最前
    分析：
    编码：utf-8
*/

#include<stdio.h>

void print_array(int *p,int len)
{
    int i;
    for(i=0;i<len;i++)
       printf("%d   ",*(p+i));
    printf("\n");
}

int main(void)
{
	int i,j;
    int len;
    printf("please input the len of array: ");
    scanf("%d",&len);
    int a[len];// = {1,2,3,4,5,6,7,8,9};
    for(i=0;i<len;i++)
        a[i]=i+1;
        
    int b[len];
    
    int m;//向后移动m位
    
    printf("\nplease input the m you want move: ");
    scanf("%d",&m);

    printf("\nLine1: the origin array: ");
    print_array(a,len);
    
    i=j=0;
    while(i<len)
    {
       if(i<len-m)
          b[i]=a[i+m];
       else
          {
              b[i]=a[j];
              j++;
          }
       i++;
    }


    printf("Line2: the origin array: ");
    print_array(b,len);

	return 0;
}

