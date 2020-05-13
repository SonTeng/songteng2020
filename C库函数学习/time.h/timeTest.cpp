#include <time.h>
#include <stdio.h>
 
int main()
{
   time_t second;
   time_t first;

   second = time(NULL);
   time(&first);
   printf("Line1: since 1970-01-01 ,there is %ld hours\n", second/3600);
   printf("Line2: since 1970-01-01 ,there is %ld hours\n", first/3600);
 
   return(0);
}

/*
Line1: since 1970-01-01 ,there is 441492 hours
Line2: since 1970-01-01 ,there is 441492 hours
*/