/**
    2020年4月15日  19点50分
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
    //第一种取法：变量名.成员名
	Student st1 = {18,80.5,'m'};  //初始化，利用结构体定义变量的同时对变量赋初值
	printf("%d %f %c\n",st1.age,st1.score,st1.sex);

    //第二种取法：指针变量->成员名
    Student st2;
    struct Student *s = &st2;  //把struct Student当作数据类型
    st2.age = 20;
    st2.score = 66.6f;//  输出66.599998,默认是double类型，如果要求float类型，需要在整数后面加f
    st2.sex = 'f';
    printf("%d %f %c\n",s->age,s->score,(*s).sex);
    //注：在计算机内部 p-age会被转换成(*p).age，没有为什么，这就是->的含义。

	
	return 0;
}