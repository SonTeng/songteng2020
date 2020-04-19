/**
    2020年4月14日 19点48分
*/

#include<stdio.h>

void f(int *pArr,int len)
{
    *(pArr+3) = 88;
    return;
}

void g(int *qArr,int len)
{
    qArr[2] = 323;    //尽管形参是指针，但仍可以按数组操作
}

int main(void)
{
	int a[6]={1,2,3,4,5,6};

    printf("a[3] = %d\n",a[3]);

    f(a,6);   //此时：pArr相当于a的一份拷贝

    printf("a[3] = %d\n",a[3]);

    g(a,6);
    printf("a[2] = %d\n",a[2]);    //a是数组

    printf("*********************\n");
    printf("a[4] = %d\n",*(a+4));   //如果a是数组，也可以直接将其当作指针操作,如: a[4]等价于*(a+4)

	
	return 0;
}
