#include <stdio.h>
#include <string.h>

int main()
{
   char dest[20];
   char src[20];
   int len;

   strcpy(src, "W3C School");
   len = strxfrm(dest, src, 20);

   printf("字符串 |%s| 的长度是： |%d|\n", dest, len);

   printf("src is %s\n",src);
   printf("dest is %s\n",dest);
   
   return(0);
}