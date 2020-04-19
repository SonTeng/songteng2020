/** 
   2020年4月7日 15点52分 
   switch的用法 
*/

#include<stdio.h>

int main(void)
{
	int val;
	printf("please input you want enterto the floor: ");
	scanf("%d",&val);
	
	switch(val)   //选择执行 
	{
		case 1:         // case和default是程序的入口 
			printf("go for 1 floor\n");
			break;      // break终止switch 
		case 2:
			printf("go for 2 floor\n");
			break;
		case 3:
			printf("go for 3 floor\n");
		    break;
		default:
			printf("the floor is not exited\n");
			break;
	}
	
	
	
	return 0;
} 
