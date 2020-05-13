#include<stdarg.h>
#include<stdio.h>

int sum(int, ...);

int main(void)
{
   printf("10 和 20 的和 = %d\n",  sum(2, 10, 20) );
   printf("10、20 和 30 的和 = %d\n",  sum(3, 10, 20, 30) );
   printf("4、20、25 和 30 的和 = %d\n",  sum(4, 4, 20, 25, 30) );

   return 0;
}

int sum(int num_args, ...)
{
   int sum_result = 0;
   va_list ap;
   int i;

   va_start(ap, num_args);
   for(i = 0; i < num_args; i++)
   {
      sum_result += va_arg(ap, int);
   }
   va_end(ap);
 
   return sum_result;
}

/*
结果是：
10 和 20 的和 = 30
10、20 和 30 的和 = 60
4、20、25 和 30 的和 = 79
*/