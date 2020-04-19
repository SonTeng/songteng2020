/**
    2020年4月15日 19点26分
    结构体的三种定义方法，推荐只使用第一种
*/

#include<stdio.h>

//第一种定义结构体方法
struct Student
{      
	int age;
	float score;
	char sex;
};

//第二种定义结构体的方法
struct Student
{      
	int age;
	float score;
	char sex;
}st2;

//第三种定义结构体的方法
struct
{      
	int age;
	float score;
	char sex;
}st3;

int main(void)
{
	Student st1 = {18,80.5,'m'};

	
	return 0;
}
