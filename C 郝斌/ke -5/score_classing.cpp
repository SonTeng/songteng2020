//输入分数，给定分数等级

#include<stdio.h>

int main(void)
{
	float score;
	printf("请输入你的分数：\n");
	scanf("%f",&score);
	
	if (score > 100 || score< 0)
	    printf("请输入分数的有效数值！\n");
	else if (score > 90)
	    printf("你的成绩为优等！\n"); 
	else if (score > 80)
	    printf("你的成绩为良好！\n");
	else if(score > 60)
	    printf("你的成绩为及格！\n");
	else
	    printf("你的成绩为不及格！\n"); 
	
	return 0;
} 
