/**
   20200403
   1+2+3+4+....+100=�� 
*/

#include<stdio.h>

int main(void)
{
	int i;
	int sum = 0;
	
	for(i=1;i<=100;++i)  //++i == i+1
	   sum = sum + i;
	   
	printf("the sum = %d\n",sum); 
	
	int j;
	int sum1 = 0;
	 
	for(j=1;j<10;j+=2)  //ѭ��ִ����5�Σ�����forѭ����һ�ִ�����j=3,5,7,9,11�������ѭ�� 
	{
		sum1 = sum1 + j;
		printf("j = %d\n",j);   //printf������У���ζ��ѭ���˼��� 
	}
	printf("sum1 = %d\n",sum1);
	
	// ��1-100֮�䣬���е��ܱ�3��������֮��   for�����Ƕ��if��� 
	int k;
	int sum2 = 0;
	for(k=1;k<=10;++k)
	{
		if (k%3 == 0)
		   sum2 = sum2 + k;
	    printf("the stage sum2 = %d\n",sum2);
	} 
	printf("the total sum2 = %d\n",sum2);
	
	//��1-100֮�������֮�ͺ�ż��֮��
	int b;
	int sum3 = 0;
	
	for(b=1;b<=100;b+=2)
	    sum3 = sum3 + b;
    printf("the sum3 of the even nums is: %d\n",sum3);  //����֮�� 
    
    int sum4 = sum - sum3;
    printf("the sum4 of the odd nums is: %d\n",sum4);  //ż��֮�� 
	
	//��1-100֮�������ĸ���
	int a;
	int count = 0;
	
	for(a=1;a<100;++a)
	{
		if(a%2 == 1)
		  count = count + 1;
		  
	}
	printf("count = %d\n",count); 
	
	//��1+1/2+1/3+...+1/100=?
	int d;
	double sod = 0.00; //sod:sumofdouble
	for(d=1;d<=100;++d)
	  sod = sod + (double)1/d;  //ǿ������ת�� 1/2�����������������������û��С��λ��  Ҳ����д��1.00/i������д��1/(double)(d) 
	printf("sod is: %lf\n",sod);
	
	
	float t = 1;
	printf("t = %f\n",t);
	
	float r = 2.0/3;
	printf("r = %f\n",r); 
	 
	return 0;
	
} 
