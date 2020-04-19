/**
    2020年4月7日 17点10分
	示例：continue和while 
*/ 

#include<stdio.h>

int main(void)
{
	int i,j;
	char ch;
	
	printf("pkease input your number i: ");
	scanf("%d",&i);
	printf("i = %d\n",i);
	
	while((ch = getchar())!='\n')   // \n换行符，而输入i时结束按下的enter则默认为换行结束 
	    continue;
	    
    printf("pkease input your number j: ");
	scanf("%d",&j);
    printf("j = %d\n",j);
	
	return 0;
}
