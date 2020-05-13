#include<stdio.h>
#include<stdlib.h>

int main()
{
    printf("PATH : %s\n",getenv("PATH"));
    printf("HOME : %s\n",getenv("HOME"));
    printf("ROOT : %s\n",getenv("ROOT"));


    return 0;
}

/*
PATH : C:\Program Files (x86)\Common Files\Oracle\Java\javapath;C:\WINDOWS\system32;C:\WINDOWS;C:\WINDOWS\System32\Wbem;C:\WINDOWS\System32\WindowsPowerShell\v1.0\;C:\WINDOWS\System32\OpenSSH\;C:\TDM-GCC-64\bin;C:\Program Files\dotnet\;C:\Program Files\CMake\bin;C:\MinGW\bin;"C:\Program Files\Java\jdk1.8.0_212\bin;C:\Program Files\Java\jdk1.8.0_212\jre\bin;";C:\Program Files (x86)\Intel\Intel(R) Management Engine Components\DAL;C:\Program Files\Intel\Intel(R) Management Engine Components\DAL;C:\Program Files\MySQL\MySQL Shell 8.0\bin\;C:\Program Files (x86)\Microsoft VS Code\Microsoft VS Code\bin
HOME : (null)
ROOT : (null)
*/