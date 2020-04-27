/**
    2020年4月25日  21点15分
    题目：学习static定义静态变量的用法
    分析：K&R P71:在函数内用static声明的内部变量，与自动变量不同的是，不管函数是否被调用，它一直存在
         而不像自动变量那样，随着所在函数的被调用和退出而存在和消失。
         换句话说：static类型的内部变量是一种只能在某个特定函数中使用，但一直占据存储空间的变量。
    编码：utf-8
*/

#include<stdio.h>

void varfunc()
{
    int var=0;
    static int static_var=0;
    printf("\40:var equal %d\n",var);  //\40:输出结果为空格加冒号
    printf("\40:static var equal %d\n",static_var);
    printf("\n");
    var++;
    static_var++;
}

int main(void)
{
	int i;
    for(i=0;i<3;i++)
       varfunc();

    printf("the program is over!\n");

	return 0;
}

/*
结果：
:var equal 0
 :static var equal 0

 :var equal 0
 :static var equal 1

 :var equal 0
 :static var equal 2

the program is over!
*/
