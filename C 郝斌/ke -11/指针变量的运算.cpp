/**
    2020年4月14日 21点19分
*/

#include<stdio.h>

int main(void)
{
	int i = 5;
    int j = 10;

    int *p = &i;
    int *q = &j;

    //p-q 无意义

    int a[5];
    p = &a[1];
    q = &a[4];
    printf("p和q之间相隔%d个单元\n",q-p);
    printf("雨绵绵情依依多少往事在风里\n");
    
    char ch = 'A';
    double d = 1.23;
    char *r = &ch;
    double *w = &d;

    printf("int占%d字节\n",sizeof(int));
    printf("char占%d字节\n",sizeof(char));
    printf("double占%d字节\n",sizeof(double));
    printf("int *类型指针变量占%d字节\n",sizeof(p));
    printf("char *类型指针变量占%d字节\n",sizeof(r));
    printf("double *类型指针变量占%d字节\n",sizeof(w));

	
	return 0;
}
