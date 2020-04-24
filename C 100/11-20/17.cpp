/**
    2020年4月20日  21点43分
    题目：输入一行字符，分别统计出其中的英文字母，空格，数字和其他字符的个数。
    分析：利用while语句，条件为输入的字符不为 '\n'
    编码：utf-8
*/

#include<stdio.h>

int main(void)
{
	char c;
	int letters=0,spaces=0,digit=0,othors=0;

	printf("please input one line characters: ");

	while((c=getchar())!= '\n')
	{
		if(c>='a' && c<='z' || c>='A' && c<='Z')
		   letters++;
		else if(c == ' ')
		   spaces++;
		else if(c>='0' && c<='9')
		   digit++;
		else
		   othors++;		
	}

	printf("\nthe analyse result of the line you input :\n");
	printf("the chars is %d\n",letters);
	printf("the spaces is %d\n",spaces);
	printf("the digits is %d\n",digit);
	printf("others is %d\n",othors);

	
	return 0;
}

/**
结果如下：
please input one line characters: I want buy 132 APPLES by paid $20.

the analyse result of the line you input :
the chars is 20
the spaces is 7
the digits is 5
others is 2

*/