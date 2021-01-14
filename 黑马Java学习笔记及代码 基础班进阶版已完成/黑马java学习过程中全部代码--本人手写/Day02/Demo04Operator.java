/*
四则运算：首先计算表达式的结果，然后再打印输出这个结果
加：+    减：-   乘：*   除：/    取余(取模)：%
*/

public class Demo04Operator {
	public static void main(String[] args) {
	    	//两个常量之间可以直接进行数学运算
			System.out.println(20+30);
			
			//两个变量之间也可以进行数学运算
			int a = 20;
			int b = 30;
			System.out.println(a-b);
			
			//变量和常量之间可以混合使用
			System.out.println(a * 10);
			
			//整除与取余运算
			int x = 10;
			int y = 3;
			int result1 = x/y;
			int result2 = x%y;
			System.out.println(result1);
			System.out.println(result2);
			
			
		
		
		
	}	
}