#include <stdio.h>
#include <float.h>

int main()
{
   printf("The maximum value of float = %.10e\n", FLT_MAX);
   printf("The minimum value of float = %.10e\n", FLT_MIN);

   printf("The number of digits in the number = %.10e\n", FLT_MANT_DIG);
} 


/*
The maximum value of float = 3.4028234664e+038
The minimum value of float = 1.1754943508e-038
The number of digits in the number = 1.1857575500e-322
*/


