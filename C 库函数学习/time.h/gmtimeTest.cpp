#include <stdio.h>
#include <time.h>
 
#define BST (+1)
#define CCT (+8)
 
int main ()
{
 
   time_t rawtime;
   struct tm *info;
 
   time(&rawtime);
   /* 获取 GMT 时间 */
   info = gmtime(&rawtime );
   
   printf("the current world Time:\n");
   printf("London: %2d:%02d\n", (info->tm_hour+BST)%24, info->tm_min);
   printf("Beijing: %2d:%02d\n", (info->tm_hour+CCT)%24, info->tm_min);
 
   return(0);
}

/*
the current world Time:
London: 14:11
Beijing: 21:11
*/