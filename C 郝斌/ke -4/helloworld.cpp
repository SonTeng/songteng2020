/**
     2020年2月6日01点04分
	 内容：郝斌C语言 第4讲
	 目标：scanf函数的用法 

*/


#include<stdio.h>

int main(void)
{
	//printf("hello world!\n");
	
	int i;
	//printf("%d\n",&i); 
	printf("please input the number you want i to be: ");
	scanf("%d",&i);    //&:取地址符，表示i的地址 
	//scanf("m%d",&i); //代表，输入时需要以m开头，然后是数值，而不能之间输入数值，m称之为非控制输入符 
	//scanf("%d\n",&i);//这表示，在输入完数值后，需要再输入/n，然后按enter后才能将数据正确输入 
	printf("i = %d\n",i);
	
/**
	//一次给多个变量键盘赋值
	int m,n,j;
	printf("please input m,n,j the number:\n");
	scanf("%d%d%d",&m,&n,&j);
	//scanf("%d,%d,%d",&m,&n,&j);  //当存在非输入控制符逗号时，必须原样输入，可试一试 
	printf("m = %d, n = %d, j = %d\n",m,n,j);
	 
	//printf("%d\n",&i); 
*/ 
    //清理上次输入时产生的垃圾
	int j;
	char ch;
	/** 
	printf("please input the number you want j to be: "); 
	scanf("%d",&j);
	printf("%d\n",j);//此时若在i输入180m，则i会先是180，但j不用再输入，它会读取上次输入180m时，不匹配i的剩下的部分作为j的值输出 
	*/
	while((ch = getchar())!='\n')
	   continue;
	printf("please input the number you want j to be: "); 
	scanf("%d",&j);
	printf("j = %d\n",j);  //此时，j的输入，将不再受i输入的垃圾值影响 
		
	
	return 0;
}
