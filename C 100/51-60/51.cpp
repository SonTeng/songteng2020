/**
    2020年4月25日  19点22分
    题目：学习使用按位与&
    分析：0&0=0,0&1=0,1&0=0,1&1=1。数字在计算机中以补码形式存在。按位与，比如int占4B，共32位。
    编码：utf-8
*/

#include<stdio.h>

int main(void)
{
	int a,b;
    a=077;  //八进制077 相当于十进制下63，二进制补码存储为00000000 00000000 00000000 00111111
    printf("\40:Line1:a = %d\n",a);
    b=a&3;
    printf("\40:Line2:a&b = %d\n",b);
    b&=7;
    printf("\40:Line3:b = %d\n",b);

	


	return 0;
}

