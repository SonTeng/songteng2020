/**
    2020年4月15日 16点26分
    动态内存分布优点
*/

#include<stdio.h>
#include<malloc.h>

int main(void)
{
	//int a[5];  //如果int占4B，则本数组占有20B，每4B被当作一个int变量来使用
    int *pArr;
    int len;

    printf("please input your len of Shuzu: ");
    scanf("%d",&len);
    //下面为动态构造一维数组，该数组的数组名叫pArr，该数组的元素类型是int型，因为返回的第一个字节的地址是按int型分配的，该数组的长度是len
    pArr = (int *)malloc(sizeof(int)*len);  //假设len是5
    // malloc共分配了4*5=20字节，本身pArr指向第一个字节，但由于int *导致pArr实际上指向这20B中起始的4B
    //所以*pArr代表的是占前4B的变量，即相当于上面静态分配数组中的a[0]变量,但两者并不是一个。
    //*(pArr+1)指向的不是第2个字节，而是第5-8号字节，相当于上面静态分配中的a[1]
    //相当于以4个字节为一个单元，pArr表面上指向第一单元第一个字节地址，实际上指向整个第一个单元的4B，pArr+1相当于第2个单元
    //*(pArr+1) 也可以写作pArr[1],所有的下标形式都可以写成指针的形式

    //总结：18行与这一代码等价，即：int pArr[5];
    
    printf("======================================\n");
    printf("please input the values: ");
    int i;
    for(i=0;i<len;i++)   //对动态一维数组进行赋值
        scanf("%d",&pArr[i]); 

    printf("=====================================\n");
    for(i=0;i<len;i++)   //对一维数组进行输出
       printf("%d  ",pArr[i]); 

    free(pArr);  //手动释放动态数组
	
	return 0;
}


/**
输出结果如下：

please input your len of Shuzu: 5
======================================
please input the values: 2 4 6 8 10
=====================================
2  4  6  8  10

*/

