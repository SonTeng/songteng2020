/**
    2020年4月15日  19点39分
*/
#include<stdio.h>

struct Student
{      
	int age;
	float score;
	char sex;
};

int main(void)
{
    //第一种初始化和赋值方式
	Student st1 = {18,80.5,'m'};  //初始化，利用结构体定义变量的同时对变量赋初值
	printf("%d %f %c\n",st1.age,st1.score,st1.sex);

    //第二种初始化和赋值方式
    Student st2;
    st2.age = 20;
    st2.score = 59.9;
    st2.sex = 'f';
    printf("%d %f %c\n",st2.age,st2.score,st2.sex);

	
	return 0;
}