/**
    2020年4月20日  21点14分
    题目：利用条件运算符的嵌套来完成此题：
         学习成绩：>=90分，用A表示
                 60-89分之间，用B表示
                 69分以下，用C表示
    分析：条件运算符：(a>b)?a:b;
    编码：utf-8
*/

#include<stdio.h>

int main(void)
{
	int score;
    char grade;

    printf("please input your score: ");
    scanf("%d",&score);
    printf("\n");

    if(score>100 || score<0)
        printf("the score you input is wrong!\n");
    else
    {
        printf("your score is : %d\n",score);
        grade = (score>=90)?'A':((score>=60)?'B':'C');
        printf("your grade is : %c\n",grade);
    }
    

	
	return 0;
}
