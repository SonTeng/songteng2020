/**
    2020年4月8日 16点07分
	数组 
*/

#include<stdio.h>
int main(void)
{
	int a[5] = {1,2,3,4,5};
	// a是数组的名字，5是元素/变量的个数，分别用a[0],a[1],,,a[4]表示，其实a[4]=5]
	
	int i;
	for(i=0;i<5;i++)
	   printf("a[%d] = %d\n",i,a[i]); 
	
	int b[5];
	scanf("%d",&b[3]);
	printf("%d\n",b[3]);
	
	for(i=0;i<5;i++)
	   printf("b[%d] = %d\n",i,b[i]); 
	
	return 0;
}
