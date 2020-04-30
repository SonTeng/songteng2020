/**
    2020年4月29日  21点02分
    题目：有3个学生，每个学生有3门课的成绩，从键盘输入以上数据（包括学生号，姓名，三门课成绩），计算出平均成绩，并将原有的数据和计算出的平均分数存放在磁盘文件"stu"中。
    分析：
    编码：utf-8
*/

#include<stdio.h>
#include<stdlib.h>

struct Student
{
    int numid;
    char name[30];
    int score[3];
    double aver;
}stu[3];

int main(void)
{
	int i;
    FILE *fp;
    
    for(i=0;i<3;i++)
    {
        printf("please input No.%d student info: numid name score(3): ",i+1);
        scanf("%d %s %d %d %d",&stu[i].numid,&stu[i].name,&stu[i].score[0],&stu[i].score[1],&stu[i].score[2]);
        stu[i].aver=(double)(stu[i].score[0]+stu[i].score[1]+stu[i].score[2]);
    }

    if((fp=fopen("stud","w"))==NULL)
    {
        printf("Cannot open the file stud!\n");
        exit(0);
    }

    for(i=0;i<3;i++)
        fprintf(fp,"%d %s %d %d %d %.1f\n",stu[i].numid,stu[i].name,stu[i].score[0],stu[i].score[1],stu[i].score[2]);
    
    fclose(fp);

	


	return 0;
}

