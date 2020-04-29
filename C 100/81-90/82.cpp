/**
    2020年4月28日  23点45分
    题目：把八进制转为十进制
    分析：
    编码：utf-8
*/

#include<stdio.h>
#include<math.h>

int main(void)
{
	int i,o_num,dec_num=0; //i表示位数

    printf("please input your onum: ");
    scanf("%d",&o_num);

    for(i=0;o_num/10!=0;i++)
    {
        dec_num=dec_num+o_num%10*(int)pow(8,i);
        o_num=o_num/10; 
    }

    dec_num=dec_num+o_num*(int)pow(8,i);
    printf("the onum converts in decimal is %d\n",dec_num);

	return 0;
}

