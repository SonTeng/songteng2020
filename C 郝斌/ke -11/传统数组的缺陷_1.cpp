/**
    2020年4月14日 22点16分
    专题：动态内存分配之传统数组的缺点
*/

#include<stdio.h>

void g(int *pArr,int len)
{
    pArr[2] = 88;;
}


void f(void)
{
    int a[5] = {1,2,3,4,5};  //这个数组占20B，但这20字节的存储空间程序员无法手动编程释放它，只能由本函数运行完毕后由系统自动释放它
    //即只有当f运行完了，这个数组占有的20B空间才会释放
    g(a,5);

    printf("a[2] = %d\n",a[2]);
}

int main(void)
{
	f();

	
	return 0;
}
