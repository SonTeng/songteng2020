/**
    2020年4月14日 20点12分
*/

#include<stdio.h>

void f(int *pArr,int len)  
{
    int i;
    for(i=0;i<len;i++)
      printf("%-4d   ",*(pArr+i));   //等价于 pArr[i]
    
    printf("\n");
}

int main(void)
{
	int a[5] = {1,2,3,4,5};  //a不是int型，而是int *类型
    int b[6] = {-1,-2,-3,4,5,-6};
    int c[100] = {1,99,2,98,3,97};

    f(a,5);  
    f(b,5);
    f(c,100);

	
	return 0;
}