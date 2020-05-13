#include<stdio.h>
#include<string.h>
#include<windows.h>

int main()
{
    char buff[1024];

    memset(buff,'\0',sizeof(buff));
    //void *memset(void *str, int c, size_t n):复制字符 c（一个无符号字符）到参数 str 所指向的字符串的前 n 个字符。

    fprintf(stdout,"Line1: 启用全缓冲\n");  //stdout：标准输出，是指向FILE类型的指针
    setvbuf(stdout,buff,_IOFBF,1024);
    //int setvbuf(FILE *stream, char *buffer, int mode, size_t size)
    //另一个定义流 stream 应如何缓冲的函数。
    //_IOFBF:全缓冲：对于输出，数据在缓冲填满时被一次性写入。对于输入，缓冲会在请求输入且缓冲为空时被填充。

    fprintf(stdout,"Line2: 这是我呀\n");
    fprintf(stdout,"Line3: 该输出将保存到buff\n");

    //printf("LineString1:%s\n",buff);

    fflush(stdout);

    fprintf(stdout,"Line4: 这将会在编程时出现\n");
    fprintf(stdout,"Line5: 最后休眠5秒钟\n");

    Sleep(5000);

    //printf("LineString2:%s\n",buff);


    return 0;
}