//给定三个数字按升序排列 
//程序 = 算法 + 语言
//本题算法：对于给定的三个数字，先交换a和b，让a表示两个数中较大的，b表示其中较小的，
//才是前两个数已完成排序，同样方法完成b和c的排序，此时可确保c为最小值，然后再完成a和b的排序，
//此时可确保a表示最大值，b表示次大值，c表示最小值 

#include<stdio.h>

int main(void)
{
	printf("请输入三个数字，以空格隔开，输完后按回车键：\n");
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	printf("你输入的数字a = %d，b = %d，c = %d\n",a,b,c);
	printf("按升序排列后输出结果如下：\n");
	
	
    int temp1 = a;
    if (b > a)
	{
		a = b;
		b = temp1;
	} 
	
	int temp2 = b;
	if (c > b)
	{
		b = c;
		c = temp2;
	}  
	
	int temp3 = a;
    if (b > a)
	{
		a = b;
		b = temp3;
	} 
	
	
	printf("a = %d，b = %d，c = %d\n",a,b,c);
	
	return 0;
} 
