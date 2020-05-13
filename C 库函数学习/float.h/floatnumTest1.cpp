#include <stdio.h>
#include <stdlib.h>

//浮点数结构体
typedef struct {
    unsigned int nMant : 23;  //尾数部分
    unsigned int nExp : 8;  //指数部分
    unsigned int nSign : 1;  //符号位
} FP_SINGLE;

int main()
{
    char strBin[33] = { 0 };
    float f = 19.625;
    FP_SINGLE *p = (FP_SINGLE*)&f;
   
    itoa(p->nSign, strBin, 2);
    printf("sign: %s\n", strBin);
    itoa(p->nExp, strBin, 2);
    printf("exp: %s\n", strBin);
    itoa(p->nMant, strBin, 2);
    printf("mant: %s\n", strBin);
   
    return 0;
}

/*
结果：
sign: 0
exp: 10000011
mant: 111010000000000000000
*/