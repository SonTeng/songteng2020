#include <signal.h>
#include <stdio.h>
#include<stdlib.h>

void signal_catchfunc(int signal)
{
   printf("!! 信号捕获 !!\n");
}

int main()
{
   int ret;

   signal(SIGINT, signal_catchfunc);

   printf("开始生成一个信号\n");
   ret = raise(SIGINT);
   if( ret !=0 ) 
   {
      printf("错误：不能生成 SIGINT 信号。\n");
      exit(0);
   }

   printf("退出...\n");
   return(0);
}

/*
开始生成一个信号
!! 信号捕获 !!
退出...
*/
