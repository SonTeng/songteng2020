/**
    2020��4��14�� 21��19��
*/

#include<stdio.h>

int main(void)
{
	int i = 5;
    int j = 10;

    int *p = &i;
    int *q = &j;

    //p-q ������

    int a[5];
    p = &a[1];
    q = &a[4];
    printf("p��q֮�����%d����Ԫ\n",q-p);
    printf("���������������������ڷ���\n");
    
    char ch = 'A';
    double d = 1.23;
    char *r = &ch;
    double *w = &d;

    printf("intռ%d�ֽ�\n",sizeof(int));
    printf("charռ%d�ֽ�\n",sizeof(char));
    printf("doubleռ%d�ֽ�\n",sizeof(double));
    printf("int *����ָ�����ռ%d�ֽ�\n",sizeof(p));
    printf("char *����ָ�����ռ%d�ֽ�\n",sizeof(r));
    printf("double *����ָ�����ռ%d�ֽ�\n",sizeof(w));

	
	return 0;
}
