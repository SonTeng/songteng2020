/**
    2020年4月17日 15点49分
	冒泡排序
*/

#include<stdio.h>

void sort(int *a,int len) 
{
    int i,j,t;
	for(i=0;i<len-1;i++)
	{
		for(j=0;j<len-1-i;j++)
		{
			if(a[j]>a[j+1])   //大于号表示升序排序，小于号表示降序排序
			{
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
			    
		}
	}
}

int main(void)
{
	int a[6] = {10,2,8,-8,11,0};
	int i;

	sort(a,6);
	
	for(i=0;i<6;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");

	
	return 0;
}
