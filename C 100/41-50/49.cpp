/**
    2020年4月25日  23点02分
    题目：#if #ifdef 和 #ifndef的综合应用
    分析：条件编译，每个条件编译指令(if, elif, else, #endif)在程序中均单独占一行
         #ifdef 等价于 #if defined ，#ifndef 等价于 #if ! defined
    编码：utf-8
*/

#include<stdio.h>

#define MAX
#define MAXIMUM(x,y) (x>y)?x:y
#define MINIMUM(x,y) (x>y)?y:x

int main(void)
{
	int a=10,b=20;
    
    #ifdef MAX
       printf("\40:Line1 The larger one is %d\n",MAXIMUM(a,b));
    #else
       printf("\40:Line2 The lower one is %d\n",MINIMUM(a,b));
    #endif

    #ifndef MIN
       printf("\40:Line3 The lower one is %d\n",MINIMUM(a,b));
    #else
       printf("\40:Line4 The larger one is %d\n",MAXIMUM(a,b));
    #endif

    #undef MAX
    #ifdef MAX
       printf("\40:Line5 The larger one is %d\n",MAXIMUM(a,b));
    #else
       printf("\40:Line6 The lower one is %d\n",MINIMUM(a,b));
    #endif

    #define MIN
    #ifndef MIN
       printf("\40:Line7 The lower one is %d\n",MINIMUM(a,b));
    #else
       printf("\40:Line8 The larger one is %d\n",MAXIMUM(a,b));
    #endif

	return 0;
}

/*
结果：
 :Line1 The larger one is 20
 :Line3 The lower one is 10
 :Line6 The lower one is 10
 :Line8 The larger one is 20
*/