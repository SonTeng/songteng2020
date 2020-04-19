/**
    2020年4月14日 19点32分
    指针+一维数组
*/

#include<stdio.h>

void f(int *pArr,int len)  //f函数可以输出任何数组?如果一个函数需要处理一个数组，则需要接收该数组的那些信息？
{
    //*pArr == a[0],则*(pArr+1) == a[1],*(pArr+i) == a[i]
    int i;
    for(i=0;i<len;i++)
      printf("*(pArr+%d) = %d\n",i,*(pArr+i));
    
    printf("===============================================================\n");

}

int main(void)
{
	int a[5] = {1,2,3,4,5};  //a不是int型，而是int *类型
    int b[6] = {-1,-2,-3,4,5,-6};
    int c[100] = {1,99,2,98,3,97};

    f(a,5);  
    f(b,5);
    f(c,100);

	
	return 0;
}
