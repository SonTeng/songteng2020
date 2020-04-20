/**
    2020年4月20日  14点24分
    题目：企业发放的奖金，根据利润提成
         利润：1.低于或等于10万元时，奖金可提10%;
              2.利润高于10万元，低于20万元时，低于10万元部分按10%提成，高于10万元部分按7.5%提成；
              3.20万到40万之间，高于20万部分，可提成5%；
              4.40万到60万之间，高于40万部分，可提成3%；
              5.60万到100万之间，高于60万部分，可提成1.5%；
              6.高于100万元，超过100万部分按1%提成；
         从键盘输入当月的利润inst，求应发放的奖金总数？
    分析：利用数轴来分界，定义。
        注：需把奖金定义成长整型
    编码：utf-8
*/

#include<stdio.h>

int main(void)
{
	long int inst;//利润
    int bonus1,bonus2,bonus3,bonus4,bonus5,bonus;

    printf("please input your inst nums: ");
    scanf("%ld",&inst);

    bonus1 = 100000 * 0.1;
    bonus2 = bonus1 + (200000 - 100000) * 0.075;
    bonus3 = bonus2 + (400000 - 200000) * 0.05;
    bonus4 = bonus3 + (600000 - 400000) * 0.03;
    bonus5 = bonus4 + (1000000 - 600000) * 0.015;

    if(inst<0)
        printf("the inst number you input is wrong!\n");
    else if(inst<100000)
    {
        bonus = inst * 0.1;
        printf("your bonus is: %d\n",bonus);
    }
    else if(inst<200000)
        bonus = bonus1 + (inst-100000)*0.075;
    else if(inst<400000)
        bonus = bonus2 + (inst-200000)*0.05;
    else if(inst<600000)
        bonus = bonus3 + (inst-400000)*0.03;
    else if(inst<1000000)
        bonus = bonus4 + (inst-600000)*0.015;
    else 
        bonus = bonus5 + (inst-1000000)*0.01;

    printf("the inst nums id %ld, and your bonus is %d.\n",inst,bonus);

	
	return 0;
}
