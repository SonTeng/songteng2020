/**
    2020年4月25日  21点40分
    题目：学习使用static的另一种用法
    分析：static不同于自动变量（auto等，随着所在函数的被调用和退出而存在和小时）,它一直存在。
    编码：utf-8
*/

#include<stdio.h>

int main(void)
{
	int i,num;
    num=2;
    for(i=0;i<3;i++)
    {
        printf("\40:The num equal %d\n",num);
        num++;
        {
            static int num=1;//static类型的内部变量是一种只能在某个特定函数中使用但一直占据存储空间的变量。
            printf("\40:The internal block num equal %d\n",num);
            num++;
        }
    }

	return 0;
}

/*
结果：
 :The num equal 2
 :The internal block num equal 1
 :The num equal 3
 :The internal block num equal 2
 :The num equal 4
 :The internal block num equal 3
*/