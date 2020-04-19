/**

*/

#include<stdio.h>

int main(void)
{
	int *p;
    int i = 5;
    
    char ch = 'A';

    //p = ch;  //error
    //p = 5;  // error
    //p = &ch;  //error

    p = &i;

    printf("i = %d\n",*p);

	
	return 0;
}
