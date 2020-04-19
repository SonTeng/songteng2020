/**
    2020年4月14日 
*/

#include<stdio.h>

int main(void)
{
	int a[5] = {11,2,4,8,12};  //a是数组名，5是数组元素的个数，a[0] -- a[4]

    //int a[3][4];  //3行4列，a[i][j]是第i+1行j+1列的元素

    //int b[5];

    //a = b;//error,a 是常量，不是变量

    //a = &a[2];  //error,a是常量

    printf("%#X\n",&a[0]);  //&a[0]中第一个元素的地址
    printf("%#X\n",a);   //a表示a[]中第一个元素的地址
    //以上两句输出结果相同



	
	return 0;
}
