#include<stdio.h>

int main(void)
{
	
	if(1>2);   //空语句，在分号前面可以加空格或按回车键，有相同效果。 
	   printf("AAAA!\n");
	printf("BBBB!\n");
	
	
	if(3>2)  // 如果这里加分号，将会导致程序编译到第13行时出错 
	  printf("hhh\n");
	else
	  printf("fff\n"); 
	  
	  
    if(3>2)
       printf("ABABA\n");
    else if(3>1)
       printf("BABAB\n");
    else 
       printf("CACAB\n");
/**
截至此处，执行结果为：
AAAA!
BBBB!
hhh
ABABA 
*/

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
	//else
	//    printf("你的成绩为不及格！\n"); 
//当把最后的else语句注释掉之后，即使输入的成绩为55，也没有语句来执行，程序仍然正常运行，只是不执行未注释掉之前的结果而已。 
	
}
