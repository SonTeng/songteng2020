/** 一元二次方程的程序
    ax^2 + bx + c = 0
	求解方程
*/

// 读取a,b,c三个系数并保存，判断b^2-4*a*c是否大于等于0，解的公式为（-b+sqrt(b^2-4*a*c))/2和（-b-sqrt(b^2-4*a*c))/2 ，将结果输出 

#include<stdio.h>
#include<math.h>
 
int main(void)
{
	//把三个系数保存到计算机中 ，通过变量来保存，变量就是容器，杯子。 
	int a = 1;   
	int b = -5;
	int c = 6;
	
	float delta; //delta表示  b*b - 4*a*c 
	float x1;
	float x2;

	delta = b*b - 4*a*c;
	
	if(delta>0)
	{
		//两个解 
		x1 = (-b + sqrt(delta))/(2*a);
		x2 = (-b - sqrt(delta))/(2*a);
		printf("该一元二次方程有两个解，x1 = %f, x2 = %f\n",x1,x2);
	}
	else if(delta == 0)
	{
		//一个解 
		x1 = (-b + sqrt(delta))/(2*a);
		x2 = x1;
		printf("该一元二次方程有唯一解，x1 = x2 = %f\n",x1);
	 } 
	 else
	 {
	 	//无解 
	 	printf("该方程无解");
	 }
	
	 
	
	return 0;
 } 
