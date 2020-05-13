#include<stdio.h>
#include<stdlib.h>

void funcA()
{
    printf("this is functionA\n");
}

int main()
{
    int i;
    i = atexit(funcA);

    if(!i)
        printf("atexit succeedfully!\n");
    else
        printf("atexit failed!\n");
    
    printf("Line1:...............\n");
    printf("Line2:******************\n");

    return 0;
}

/*
atexit succeedfully!
Line1:...............
Line2:******************
this is functionA
*/