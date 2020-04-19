/**
     2020年4月8日 22点52分
	 函数 
*/

#include<stdio.h>

void max_both_two_nums(int i,int j)  //函数,i,j被称为形参，void表示函数没有返回值 
	{
		if(i>j)
		    printf("the two nums you input %2d an %2d, the max is: %2d\n",i,j,i);
		else
		    printf("the two nums you input %2d an %2d, the max is: %2d\n",i,j,j);
		// return 0;  //如果返回类型不是void而是int 
	}
	
int main(void)  //C语言中一定先执行main函数 
{
	int a,b,c,d,e,f;
	a=1,b=2,c=3,d=7,e=8,f=-9; 
	
	
	
	max_both_two_nums(a,b);
	max_both_two_nums(c,d);
	max_both_two_nums(e,f);
	
	return 0;
}	
