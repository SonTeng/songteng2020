#include<stdio.h>
#include<string.h>

int main()
{
    const char str[] = "heep://www.baidu.com";
    const char ch = '.';
    char *ret;

    ret = (char *)memchr(str,ch,strlen(str));

    printf("After |%c|, there is the string - |%s|\n",ch,ret);

    printf("After |%c|, there is the string - |%s|\n",ch,ret+1);

    return 0;
}

/*
output:
After |.|, there is the string - |.baidu.com|
After |.|, there is the string - |baidu.com|
*/