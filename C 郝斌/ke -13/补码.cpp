/**
    2020年4月17日 19点16分
*/

#include<stdio.h>

int main(void)
{
	int i = -3;

    printf("%#X\n",i);

    int j = -1;
    printf("%#X\n",j);

    int k = 0XFFFFFFEF;
    printf("%d\n",k);

    int m = 0XFFFFFFCA;
    printf("%d\n",m);

    char ch = 0x80;  //char占1B，一个字节占8位  80H = 1000 0000B(补码) == -128D
    printf("%d\n",ch); //字符的存储本质上是整型数，输出结果-128

    char ch2 = 128;
    printf("%d\n",ch2);//输出结果为-128
    //因为128是int型，占4B，把它赋值给char类型，则截去前3B，只剩最后1B，内部存储是1000 0000
    //计算机按补码存取，则输出结果为-128

    char ch3 = 129;
    printf("%d\n",ch3);

	
	return 0;
}
