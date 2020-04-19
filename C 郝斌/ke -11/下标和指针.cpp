/**

*/

#include<stdio.h>

int main(void)
{
	int a[5];
    printf("%d\n",a[0]);  //输出结果为垃圾值

    int b[] = {1,2,4};
    printf("b[1] = %d, b[4] = %d\n",b[1],b[4]); //输出结果为2，0，说明未赋值元素被初始化为0

    int c[5] = {1,2,3,4,5};
    printf("%d\n",c);   //c表示数组c的开始的地址，&c[0]表示c中第一个元素的起始地址
    printf("%d\n",&c[0]);  //这上下两句printf输出结果相同
    //说明数组名和第一个元素名是等价的，可以使用数组变量名访问第一个元素
    
    //数组名是指针常量，不是变量，不可更改

    printf("%d\n",*c);   //输出1，为第一个元素的值
    printf("%d\n",*(c+2));   //输出3，为第3个元素的值

    //猜想：*(c+4)为第5个元素的值，应该等于c[4],均为第五个元素的值
    if(*(c+4) == c[4])
       printf("your guess is correct! *(c+4)= %d\n",*(c+4));
    else
       printf("your guess is wrong! *(c+4)=%d, c[4]=%d\n",*(c+4),c[4]);
    //结论 c[i] == *(c+i)

    printf("%d\n",&c[0]);   //结果：6487504
    printf("%d\n",&c[1]);   //结果：6487508
    printf("%d\n",&c[1]-&c[0]);  // 结果：1
    //注：int占4B，计算机中内存按字节为单位存储

    printf("%d\n",c);    //结果：6487504
    printf("%d\n",c+1);  //结果：6487508
    printf("%d\n",c+2);  //结果：6487512
    //c+1表示向后移了一个单元，在int类型中，int占4B,
	
	return 0;
}
