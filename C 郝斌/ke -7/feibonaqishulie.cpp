/**
   2020年4月7日 14点58分
   斐波那契数列 
*/

#include<stdio.h>

int main(void)
{
	int f1,f2,f3;
	f1 = 1;
	f2 = 2;
	int i;
	int n;
	
	printf("please input the nums: ");
	scanf("%d",&n);
	printf("\n");
	printf("斐波那契数列如下：\n");
	
	if(1==n)
	   printf("1");//f3 = 1;
	else if(2==n)
	   printf("1 2");//f3 = 2;
	else
	{
		printf("1 2 ");
		for(i=3;i<=n;++i)
		{
			
			f3 = f1 + f2;  //f3代表f(n) 
			f1 = f2;   // f1代表f(n-2) 
			f2 = f3;   //f2代表f(n-1) 
			printf("%d ",f3);
		}
	}
	printf("\n");
	//printf("%d\n",f3);
}
