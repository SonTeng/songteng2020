#include <assert.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>

static int sigs[]={SIGABRT,SIGFPE,SIGILL,SIGINT,SIGSEGV,SIGTERM};
static void (*rets[])(int)={SIG_DFL,SIG_ERR,SIG_IGN};
static sig_atomic_t atomic;

static void field_fpe(int sig)
{
    assert(sig==SIGFPE);
    puts("success testing <signal.h>");
    exit(EXIT_SUCCESS);
}

int main()
{
    printf("sizeof (sig_atomic_t) = %u\n",sizeof(sig_atomic_t));
    assert(signal(SIGFPE,field_fpe)==SIG_DFL);　　//signal设置SIGFPE信号发生后的处理函数并返回信号处理程序之前的值
    assert(signal(SIGFPE,field_fpe)==&field_fpe);　　//判断信号处理函数是否设置成功
    raise(SIGFPE);　　//发送SIGFPE信号
    puts("fail testing <signal.h>");

    return (EXIT_FAILURE);
}