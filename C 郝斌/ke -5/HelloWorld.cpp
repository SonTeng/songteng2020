/** 20200219 0:24
 * @songteng0604
 *郝斌C语音教程第五课
 *流程控制
 */ 


#include<stdio.h> 

int main(void)
{
	printf("hello world!\n");
	
	if (2)
	   printf("1aaaaa!\n");
	   printf("1ababab!\n");
	
	//if的范围：默认只能控制一个语句的执行或不执行 
	if (0)
	   printf("2aaaaa!\n");
	   printf("2ababab!\n");
    // 大括号
	if (0)
	{ 
	   printf("3aaaaa!\n");
	   printf("3ababab!\n"); 
    }
	if (0)
	   printf("bbbbb!\n");
	else
	   printf("bcbcbc!\n");
	   printf("dddddd!\n");    //else默认只能控制一个语句 
	   
/**	   
	int i,j;
	printf("请输入i,j的值，用空格隔开：\n"); 
	scanf("%d %d",&i,&j);
	if (i > j)
	    printf("i大于j\n");
	else
	    printf("i小于j\n");
*/	
	return 0;
} 
