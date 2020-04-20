/**
    2020年4月20日  17点03分
    题目：打印楼梯，同时在楼梯上方打印两个笑脸
    分析：用i控制行，用j控制列，j根据i的变化来控制输出黑方格的个数
    编码：utf-8
*/

#include<stdio.h>

int main(void)
{
	int i,j;
    printf("%c%c\n",1,1);

    for(i=1;i<11;i++)
    {
        for(j=1;j<=i;j++)
           printf("%c%c",168,128);
        printf("\n");
    }

	return 0;
}
