/**
    2020年4月8日 16点51分
	数组倒置 
*/

#include<stdio.h>
int main(void)
{
	int a[7] = {1,2,3,4,5,6,7};
	int i;
	
/**	int b[7];
	
	
	for(i=0;i<7;i++)
	    b[6-i] = a[i];
	
	
	for(i=0;i<7;i++)
	    printf("b[%d] = %d\n",i,b[i]); 
*/	
	
	int j;
	int t;
	i = 0;
	j = 6;
	
	while(i<j)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
		i++;
		j--;
	}
	
	for(i=0;i<7;i++)
	    printf("a[%d] = %d\n",i,a[i]); 
	
	
	
	
	
	
	return 0;
}
