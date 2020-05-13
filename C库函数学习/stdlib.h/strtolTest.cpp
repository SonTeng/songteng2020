#include <stdio.h>
#include <stdlib.h>

int main()
{
   char buffer[20]="10379cend$3";
   char *stop;
   printf("%d\n",strtol(buffer, &stop, 8));
   printf("%s\n", stop);

   



   return(0);
}

/*
结果：
543
9cend$3
*/
/*
说明：
函数：long int strtol(const char *nptr, char **endptr, int base)
当base设置为8时，则合法字符为0-7，即1037，这是个8进制数，而返回结果时long int型，需转换为十进制，八进制下1037对应十进制为543.
*/