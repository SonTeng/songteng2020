//»¥»»Á½¸öÊý×Ö


#include<stdio.h>

int main(void) 
{
	int i = 3;
	int j = 4;
	
	printf("i = %d; j = %d\n",i,j);
	
	int temp;
	
	temp = i;
	i = j;
	j = temp;
	
	printf("i = %d; j = %d\n",i,j);
	
	
	return 0;
}
