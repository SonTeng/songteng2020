#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    wchar_t s[] = {25105, 29233, 20320, 0};   //unicode编码的字符一般以wchar_t类型存储
    //Unicode: &#29233;等同于“爱”
    setlocale(LC_ALL, "");

    printf("%ls\n", s); 

    return 0;
}

//结果：我爱你