#include <stdio.h>
#include <stdlib.h>

int values[] = { 88, 56, 100, 2, 25 };

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int main()
{
   int n;

   printf("Before list: \n");
   for( n = 0 ; n < 5; n++ ) 
   {
      printf("%d ", values[n]);
   }

   qsort(values, 5, sizeof(int), cmpfunc);

   printf("\nAfter list: \n");
   for( n = 0 ; n < 5; n++ ) 
   {
      printf("%d ", values[n]);
   }
  
  return(0);
}

/*
Before list:
88 56 100 2 25
After list:
2 25 56 88 100
*/