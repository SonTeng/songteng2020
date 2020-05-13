#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <signal.h>

void sighandler(int signum)
{
   printf("Catch   a   termination   single.\n");
   exit(1);
}

int main()
{
   signal(SIGINT, sighandler); //SIGINT: (Signal Interrupt) 中断信号，如 ctrl-C，通常由用户生成。
   //signal(SIGINT, SIG_IGN);

   Sleep(10000);
   
   return(0);
}


/*
库函数 void (*signal(int sig, void (*func)(int)))(int) 设置一个函数来处理信号，即带有 sig 参数的信号处理程序。
sig -- 在信号处理程序中作为变量使用的信号码
func -- 一个指向函数的指针。它可以是一个由程序定义的函数，也可以是预定义的函数，如SIG_DFL或SIG_IGN
*/
/*
只要在10秒内输入Ctrl+C，屏幕上会打印出"Catch   a   termination   single."
*/