/**
     2020��4��8�� 17��15��
	 ��ά���� 
*/

#include<stdio.h>
int main(void)
{
	int a[3][4] = {
	     {1, 2, 3, 4},
	     {5, 6, 7, 8},
	     {9,10,11,12}	
	};
	
	int i;
	int j;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
	       printf("a[%d][%d] = %-2d   ",i,j,a[i][j]);
		printf("\n");
	}
	    
	
	
	return 0;
}
