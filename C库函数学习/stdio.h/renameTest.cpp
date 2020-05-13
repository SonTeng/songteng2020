#include<stdio.h>
#include<string.h>

int main()
{
    int ret;
    char oldfilename[] = "file.txt";
    char newfilename[] = "newfile.txt";

    ret = rename(oldfilename,newfilename);
    
    if(ret == 0)
       printf("renamed successfully\n");
    else
    {
        printf("renamed failed\n");
    }

    return 0;
    
}