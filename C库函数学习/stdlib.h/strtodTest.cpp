#include<stdio.h>
#include<stdlib.h>

int main()
{
    char str[30] = "20.30300 This is test 38.984";
    char *ptr;
    double ret;

    ret = strtod(str,&ptr);
    printf("the double value is %lf\n",ret);
    printf("the string part is |%s|\n",ptr);


    return 0;
}



/*
结果：
the double value is 20.303000
the string part is | This is test 38.984|
*/
/*
double strtod(const char *nptr, char **endptr);
strtod()会扫描参数nptr字符串，跳过前面的空格字符，直到遇上数字或正负符号才开始做转换，到出现非数字或字符串结束时('\0')才结束转换，并将结果返回。
若endptr不为NULL，则会将遇到不合条件而终止的nptr中的字符指针由endptr传回。
*/