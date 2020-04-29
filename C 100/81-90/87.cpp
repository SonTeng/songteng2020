/**
    2020年4月29日  01点04分
    题目：回答结果（结构体变量传递）
    分析：结构体变量做实参传递时，并不能修改结果。
    编码：utf-8
*/

#include<stdio.h>

struct Student
{
    char name[30];
    int age;
    int score;
};


void fun_struct1(struct Student stu_temp)
{
    //stu_temp.name = "jixiaolan"; //error: incompatible types in assignment of 'const char [10]' to 'char [30]'
    stu_temp.age = 20;
    stu_temp.score = 78;
}

void fun_struct2(struct Student *stu_temp)
{
    //(*stu_temp).name = "jixiaolan";
    (*stu_temp).age = 20;
    (*stu_temp).score = 78;
}


int main(void)
{
	struct Student student1 = {"heshen",25,99};
    printf("Before: %-10s%-5d%-5d\n",student1.name,student1.age,student1.score);

    fun_struct1(student1);
    printf("After: %-10s%-5d%-5d\n",student1.name,student1.age,student1.score);

    fun_struct2(&student1);
    printf("Last: %-10s%-5d%-5d\n",student1.name,student1.age,student1.score);


	return 0;
}

