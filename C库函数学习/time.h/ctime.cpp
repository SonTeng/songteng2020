#include <stdio.h>
#include <time.h>
 
int main ()
{
   time_t curtime;
 
   time(&curtime);
 
   printf("the current time: %s", ctime(&curtime));
 
   return(0);
}

/*
the current time: Wed May 13 20:52:15 2020
*/