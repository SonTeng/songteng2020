/**
    2020年4月20日  14点46分
    题目：如果一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平放式，请问这个数是多少？
    分析：在10万内判断，先加上100开方，再将该数加上268开方，如果开方后的结果再平方满足原有条件，则是结果
    编码：utf-8
*/

#include<stdio.h>
#include<math.h>

int main(void)
{
	long int i;
    long int x,y;

    for(i=1;i<100000;i++)
    {
        x = sqrt(i+100);
        y = sqrt(i+268);

        if(x*x == (i+100) && y*y == (i+268))
           printf("%ld\n",i);
    }
    
	return 0;
}
