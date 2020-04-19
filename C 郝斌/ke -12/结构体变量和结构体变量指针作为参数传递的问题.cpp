/**
    2020年4月15日  22点34分
    通过函数完成对结构体变量的输入和输出
    其中输入以“传递地址”，输出以“传递变量名”，前者可以修改和输出，后者则不能修改只能输出
    所以输入相对功能强大，但也不安全。
    在C++中有关键词const可以放在指针变量前面，表示可以传递地址但不能修改
*/

#include<stdio.h>
#include<string.h>

struct Student  
{
    int age;
    char sex;
    char name[100];
};  //这个结构体构造一个变量至少分配105B,实际占108B，因为存储时对齐，见计算机组成原理 

void InputStudent(struct Student *pSti)  //pSti只占8B,因为64位系统
{
    pSti->age = 18;
    pSti->sex = 'F';
    strcpy(pSti->name,"John");  //不能写成pSti->name="John";
    //printf("pSti have %d B\n",sizeof(pSti));
}

void OutputStudent(struct Student Sto)
{
    printf("%d %c %s\n",Sto.age,Sto.sex,Sto.name);
}
int main(void)
{
	struct Student st;

    InputStudent(&st);  //对结构体变量输入  要修改则必须以地址传递
    //如果写成InputStudent(st);  则会出错，因为希望在Input函数内部修改st的值，必须传递地址，而不能是传递变量。    
    OutputStudent(st);  //对结构体变量输出  只传递不修改，则不需要以地址方式传递，只传递变量名即可

    

	
	return 0;
}
