#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,n;
    int *a;

    printf("please input your num: ");
    scanf("%d",&n);

    a = (int *)calloc(n,sizeof(int));

    for(i=0;i<n;i++)
    {
        printf("\nplease input your no.%d num: ",(i+1));
        scanf("%d",&a[i]);
    }

    printf("the num you input are: ");

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    free(a);


    return 0;
}