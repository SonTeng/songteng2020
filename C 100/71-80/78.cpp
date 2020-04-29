/**
    2020年4月28日  22点29分
    题目：找到年龄最大的人，并输出。
    分析：
    编码：utf-8
*/

#include<stdio.h>
#define N 4

static struct man
{
    char name[20];
    int age;
}person[N]={"li",25,"wang",19,"zhang",20,"sun",27};

int main(void)
{
	struct man *q,*p;
    int i,m=0;
    p=person;

    for(i=0;i<N;i++)
    {
        if(m<p->age)
        {
            q=p;   //p++不能放在判断里，如果下一个人年纪小，则指针无效//相当于q=p;p++;
            m=q->age;
        }
        p++;
    }
    printf("\n");
    printf("\40:%s,%d\n",(*q).name,(*q).age);

	return 0;
}

