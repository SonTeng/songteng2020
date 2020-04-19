/**
    2020年4月15日 15点55分
    malloc的用法
*/

#include<stdio.h>
#include<malloc.h>

void f(int *q)  //此时q是p的一份拷贝/副本，所以q中存放的也是这四个字节的地址，所以q也指向占4B的变量
{
    //只有指针变量前面可以加*，这种写法是错误的**q
    *q = 200;
    //free(q);  //这样写就错了，因为q是p的副本，q指向的是这4B的地址，如果此处释放，则第28行的*p就出错了
}

int main(void)
{
	int *p = (int *)malloc(sizeof(int));  //sizeof(int)返回值是int所占的字节数
    //p是静态的，占8B,malloc分配4B空间，并返回首地址，之后被(int *)类型强制转化，得占4B的一个变量
    //p指向这个首地址，但由于malloc连续分配，所以p指向这个占四个字节的变量
    //把这4B当成一个整型的指针变量来看待
    *p = 10; //正确，此处*p表示已p中的内容为地址的变量,是4B，当然可以存储10

    printf("%d\n",*p);   //10

    f(p);

    printf("%d\n",*p);  //200

	
	return 0;
}
