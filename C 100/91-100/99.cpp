/**
    2020年4月29日  20点08分
    题目：有两个磁盘文件A和B，各存放一行字母，要求把这两个文件中的信息合并（按字母顺序排列），输入到新文件C中。
    分析：
    编码：utf-8
*/

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char A[40],B[40],C[100];
    char ch,temp;
    int i,j,numA,numB,numC;
    FILE *fpA,*fpB,*fpC;

    fpA=fopen("A.txt","r"); //A.txt在本代码所在的文件夹下，'r'表示读的权限
    printf("File A has characters: ");
    for(i=0;(ch=fgetc(fpA))!=EOF;i++)   //提取A文件中的字符
    {
        A[i]=ch;
        printf("%c",A[i]);
    }
    numA=i;   //记录文件A中的字符数
    fclose(fpA);
    printf("\n");
    
    fpB=fopen("B.txt","r");
    printf("\nFile B has characters: ");
    for(i=0;(ch=fgetc(fpB))!=EOF;i++)
    {
        B[i]=ch;
        printf("%c",B[i]);
    }
    numB=i;
    fclose(fpB);
    printf("\n");

    for(i=0;i<numA;i++)    //将A[40]、B[40]中的字符存到C[100]中
        C[i]=A[i];
    for(j=0;j<numB;j++)
    {
        C[i]=B[j];
        i++;
    }
    numC=i;

    //for(i=0;i<numC;i++)
    printf("\nC is: %s\n",C);

    for(i=0;i<numC;i++)       //排序
        for(j=i+1;j<numC;j++)
            if(C[i]>C[j])
            {
                temp=C[i];
                C[i]=C[j];
                C[j]=temp;
            }
    
    if((fpC=fopen("C.txt","w"))==NULL)
    {
        printf("\nCannot open C.txt!\n");
        exit(0);
    }
    for(i=0;i<numC;i++)
        fputc(C[i],fpC);
    fclose(fpC);

    if((fpC=fopen("C.txt","r"))==NULL)
    {
        printf("\nCannot open C.txt!\n");
        exit(0);
    }
    else
    {
        printf("\nFile C has characters: ");
        for(i=0;(ch=fgetc(fpC))!=EOF;i++)
        {
            C[i]=ch;
            printf("%c",C[i]);
        }
    }
    fclose(fpC);

	return 0;
}

/*
结果：
File A has characters: h i j klmn,

File B has characters: abcd e f g!

C is: h i j klmn,abcd e f g!

File C has characters:       !,abcdefghijklmn
*/
/**
    关于字符串的赋值问题：
    char name[20];
    name = "I do like you!";   //Error:incompatible types in assignment of 'const char [15]' to 'char [20]'
    printf("%s\n",name);
*/
/**
    char name[20] = "I do like you!"; //Right!
*/