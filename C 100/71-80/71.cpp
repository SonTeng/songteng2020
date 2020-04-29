/**
    2020年4月28日  20点04分
    题目：编写input()和output()函数输入，输出5个学生的数据记录。
    分析：
    编码：utf-8
*/

#include<stdio.h>
#define N 5

struct student
{
    char num[6];
    char name[8];
    int score[4];
};

void input(struct student stu[])
{
    int i,j;
    for(i=0;i<N;i++)
    {
        printf("\nPlease input %d of %d\n",i+1,N);
        printf("\nnum:");
        scanf("%s",stu[i].num);
        printf("\nname:");
        scanf("%s",stu[i].name);

        for(j=0;j<3;j++)
        {
            printf("\nscore %d:",j+1);
            scanf("%d",&stu[i].score[j]);
        }
        printf("\n");
    }
}

void output(struct student stu[])
{
    int i,j;
    printf("\nNo.   Name     Sco1  Sco2  Sco3\n");
    for(i=0;i<N;i++)
    {
        printf("%-6s%-10s",stu[i].num,stu[i].name);
        for(j=0;j<3;j++)
            printf("%-6d",stu[i].score[j]);
        printf("\n");
    }
}

int main(void)
{
	struct student stu[N];

    input(stu);

    output(stu);

	return 0;
}

/*
输出结果参考：
Please input 1 of 5

num:1

name:张三

score 1:11

score 2:22

score 3:33


Please input 2 of 5

num:2

name:李四

score 1:22

score 2:33

score 3:44


Please input 3 of 5

num:3

name:王五

score 1:33

score 2:44

score 3:55


Please input 4 of 5

num:4

name:赵六

score 1:44

score 2:55

score 3:66


Please input 5 of 5

num:5

name:刘七

score 1:89

score 2:98

score 3:76


No.   Name     Sco1  Sco2  Sco3
1     张三      11    22    33
2     李四      22    33    44
3     王五      33    44    55
4     赵六      44    55    66
5     刘七      89    98    76
*/
