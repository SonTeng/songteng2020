/**
    2020年4月15日 19点12分
	结构体
	//数组用来定义大量相同类型的变量，结构体用来定义属性，参考面向对象编程中的类
*/

#include<stdio.h>

struct Student{    //相当于定义了一个名叫Student的数据类型，里面有三个成员，再由数据类型类声明变量。
	int age;
	float score;
	char sex;
};

int main(void)
{
	Student st1 = {18,80.5,'m'};  //用数据类型来定义变量st1，则st1也有三个成员。
	printf("%d\n",st1.age);

	
	return 0;
}
