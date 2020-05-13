#include <string.h>
#include <stdio.h>
 
int main () {
   char str[80] = "This is - www.baidu.com - website";
   const char s[2] = "-";
   char *token;

   printf("Before: %s\n",str);
   
   /* 获取第一个子字符串 */
   token = strtok(str, s);

   printf("After: %s\n",str);
   
   /* 继续获取其他的子字符串 */
   while( token != NULL ) {
      printf( "%s\n", token );
    
      token = strtok(NULL, s);
   }

   printf("Last: %s\n",str);
   
   return(0);
}

/*
Before: This is - www.baidu.com - website
After: This is
This is
 www.baidu.com
 website
Last: This is
*/