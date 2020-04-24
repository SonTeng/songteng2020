/**
    2020年4月20日  20点29分
    题目：打印出所有水仙花数，所为水仙花数，就是一个三位数，其各位数字立方和等于该数本身。例153这个数
    分析：利用for循环控制100-999个数，每个数分解出个位、十位、百位。求其立方和与数本身是否相等
    编码：utf-8
*/

#include<stdio.h>

int main(void)
{
	int i,j,k,num;

    printf("water flower numbers is:\n");

    for(num=100;num<=999;num++)
    {
        i = num/100;  //百位
        j = (num/10)%10; //十位
        k = num%10;  //个位

        if(i*i*i+j*j*j+k*k*k == num)
            printf("%-5d",num);
    }

	
	return 0;
}
