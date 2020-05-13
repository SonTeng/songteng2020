#include<stdio.h>
#include<string.h>

int main()
{
    FILE *fp;
    char c[]="hello,the morning!";
    char buffer[20];

    fp = fopen("freadTest.txt","w+");

    int i = fwrite(c,strlen(c)+1,1,fp);
    //size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream)
    //把 ptr 所指向的数组中的数据写入到给定流 stream 中
    //如果成功，该函数返回一个 size_t 对象，表示元素的总数，该对象是一个整型数据类型。如果该数字与 nmemb 参数不同，则会显示一个错误。
    printf("i = %d\n",i); //i=1

    fseek(fp,0,SEEK_SET);
    //int fseek(FILE *stream, long int offset, int whence)
    //设置流 stream 的文件位置为给定的偏移 offset，以字节为单位，参数 offset 意味着从给定的 whence 位置查找的字节数。
    //whence的取值：三个常量：SEEK_SET:文件的开头，SEEK_CUR:文件指针的当前位置，SEEK_END:文件的结尾

    fread(buffer,strlen(c)+1,1,fp);
    printf("%s\n",buffer);

    fclose(fp);


    return 0;
}