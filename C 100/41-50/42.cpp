/**
    2020年4月25日  21点28分
    题目：学习使用auto定义变量的用法
    分析：具有自动存储期的变量在进入声明该变量的程序块时被建立，它在该程序块活动时存在，退出该程序块时撤销。
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
            auto int num=1;  //这个num和上面的num不是一个num，auto表明num是一个自动存储的临时变量。
            printf("\40:The internal block num equal %d\n",num);
            num++;
        }  //auto在这个大括号内的程序块中声明，当程序块结束时被撤销
    }

	return 0;
}


/*
结果：
 :The num equal 2
 :The internal block num equal 1
 :The num equal 3
 :The internal block num equal 1
 :The num equal 4
 :The internal block num equal 1
*/