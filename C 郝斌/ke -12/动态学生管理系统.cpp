/**
    2020年4月17日 16点16分
    练手：管理系统
*/

#include<stdio.h>
#include<malloc.h>

struct Student
{
    int age;
    //char sex;
    float score;
    char name[100];
};

int main(void)
{
	int len;
    int i,j;
    struct Student t;

    printf("please input the nums of students: \n");
    printf("len = ");
    scanf("%d",&len);
    printf("\n");
    
    struct Student *pArr = (struct Student *)malloc(sizeof(struct Student) * len);

    for(i=0;i<len;i++)
    {
        //int sage,sscore,sname;
        printf("please input No. %d student information: \n",i+1);
        printf("age = ");
        //scanf("%d",&sage);
        //pArr[i].age = sage;
        scanf("%d",&pArr[i].age);
        printf("\n");
        printf("name = ");
        scanf("%s",pArr[i].name);  //此处不加&，因为name是数组名，本身就已经是数组首元素的地址
        printf("\n");
        printf("score = ");
        scanf("%f",&pArr[i].score);

        printf("\n");
    }
    
    for(i=0;i<len-i;i++)
    {
        for(j=0;j<len-1-i;j++)
        {
            if(pArr[j].score<pArr[j+1].score)
            {
                t = pArr[j];   //不可这样写：t.score = pArr[j].score，这样只会交换分数，而原来的变量对应关系就改变了
                pArr[j] = pArr[j+1];
                pArr[j+1] = t;
            }
        }
    }

    printf("The all students information: \n");
    printf("==============================\n");

    for(i=0;i<len;i++)
    {
        printf("No. %d student :\n",i+1);
        printf("%-10s%-5d%-5.1f\n",pArr[i].name,pArr[i].age,pArr[i].score);
        printf("\n");
    }
	
	return 0;
}
