/**
    2020年4月14日 22点43分
    molloc是memory allocate内存分配的缩写
*/

#include<stdio.h>
#include<malloc.h>

int main(void)
{
	int i = 5;//分配了4个字节  静态分配

    int *p = (int *)malloc(4);  //重点代码语句
    /**
    * 1.要使用malloc函数，必须添加malloc.h这个头文件。
    * 2.malloc函数只有一个形参，并且形参是整型，形参接收的就是要申请的内存个数，内存以字节为单位。
    * 3.malloc(4)中的4表示请求系统为本程序分配4个字节。
    * 4.malloc函数只能返回第一个字节的地址，所以前面必须加上强制类型转换，即(int *)malloc(整数)
    *    例如 （int *)malloc(100);  
    *    意思是：向系统请求分配100个字节，malloc指向第一个字节的地址，可以存放100/4=25个变量
    *    如果是 (char *)malloc(100);   则可以存放100/1=100个变量
    *    如果是 (double *)malloc(200);   则可以存放200/8=25个变量
    * 5.int *p = (int *)malloc(4);最终分配了12个字节，12=8+4，其中p作为指针变量占8B（64位系统），malloc分配4B，这个分配的4B内存由p指向
    *   这其中，p的8B内存是静态分配的，而另外4B内存则是动态分配的
    *   即：p本身是静态的，p指向的是动态的
    */

    *p = 5;  //*p代表的就是一个int变量，只不过*p这个整型变量的内存分配方式和11行的i变量的分配方式不同
    free(p);  //free(p)表示把p所指向的内存释放掉，因为p指向的是动态的，但它不能释放p本身的内存，因为p本身是静态的
   //即p本身内存是静态的，不能由程序员释放，只能由p所在的函数运行结束后由系统自动释放


    printf("hello world!");

	
	return 0;
}
