/**
    2020年4月20日 17点02分
    题目：要求输出国际象棋棋盘
    分析：用i控制行，用j控制列，根据 i+j 的和的变化来控制输出黑方格还是白方格?
    编码：utf-8
*/

#include<stdio.h>

int main(void)
{
	int i,j;
    for(i=1;i<8;i++)
    {
       if(i%2!=0)  //奇数行
          {
              for(j=1;j<=4;j++)
              {
                 printf("%c%c",168,128);
                 printf(" ");
              }
          }
        else
        {
            for(j=1;j<=4;j++)
            {
                printf(" ");
                printf("%c%c",168,128);
            }            
        }     
        printf("\n");
    }

    //printf("%c%c\n",168,128);此语句可以打印出白色方块
    //printf("%c\n",128);或printf("%c\n",168);单独的一句则无此效果
	
	return 0;
}

/**
输出结果为： 

█ █ █ █
 █ █ █ █
█ █ █ █
 █ █ █ █
█ █ █ █
 █ █ █ █
█ █ █ █
*/
