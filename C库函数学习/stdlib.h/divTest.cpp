#include <stdio.h>
#include <stdlib.h>

int main()
{
   div_t output;

   output = div(27, 4);
   printf("(27/ 4) 的商  = %d\n", output.quot);
   printf("(27/4) 的余数 = %d\n", output.rem);

   output = div(27, 3);
   printf("(27/ 3) 的商 = %d\n", output.quot);
   printf("(27/3) 的余数 = %d\n", output.rem);

   return(0);
}

/*
(27/ 4) 的商 = 6
(27/4) 的余数 = 3
(27/ 3) 的商 = 9
(27/3) 的余数 = 0
*/