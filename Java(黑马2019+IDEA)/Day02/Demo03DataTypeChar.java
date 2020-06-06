/*
ASCII表：
48：0
65：A
97：a

*/

public class Demo03DataTypeChar {
	public static void main(String[] args) {
		char ch1 = '1';
		System.out.println(ch1+0);   //ASCII查表：char-->int，因为char类型做加法时，先提升为int再做加运算，结果也为int类型
		
		char ch2 = 'A';  //其实计算机底层保存的是65的补码
		char ch3 = 'c';
		int num = ch3;  // num为99
		System.out.println(num);
		
		//char 是可以用来保存中文的
		
		char ch4 = '中';  //写法正确
		System.out.println(ch4+0);   //结果为20013,Unicode码表
	}	
}