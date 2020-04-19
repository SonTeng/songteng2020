/**
    2020年4月15日 23点13分
    指针的优点之一：
       快速的传递数据，
       耗用内存小，
       执行速度快。
    示例：
       发送地址还是发送内容
*/

#include<stdio.h>
#include<string.h>

struct Student  
{
    int age;
    char sex;
    char name[100];
};  

void InputStudent(struct Student *pSti)  
{
    pSti->age = 18;
    pSti->sex = 'F';
    strcpy(pSti->name,"John");  
}

void OutputStudent(struct Student Sto)
{
    printf("%d %c %s\n",Sto.age,Sto.sex,Sto.name);
}
int main(void)
{
	struct Student st;
    printf("st have %d B\n",sizeof(st)); //st占用108字节

    InputStudent(&st);  //输入  以地址传递
     
    OutputStudent(st);  //输出  以内容传递  //当发送内容时，就要再分配108B，占用内存比只发送指针变量大，且速度更慢
    //输出可以发送地址，也可以发送内容，但为了减少内存好用，也提高运行速度，推荐使用发送地址

	return 0;
}
