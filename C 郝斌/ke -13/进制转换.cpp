/**
    2020年4月17日  18点02分
*/

#include<stdio.h>

void DtoB(int num)
{
    int i =1,sum = 0;
    
    if(num/2 != 0)
       {

       }
    printf("%d\n",sum);
}

int main(void)
{
	printf("%#X\n",31);  //十进制31转16进制  31D-->1FH
    printf("%#X\n",031); //八进制31转16进制  31O-->19H
    printf("%o\n",31);  //十进制31转八进制输出 21B-->37O
    //printf("%#X\n",1011011);//二进制1011011转16进制  1011011B-->5CH

    //DtoB(185);
    //printf("%d\n",10^3);

	
	return 0;
}
