/*
自增运算符：++
自减运算符：--

基本含义：让一个变量涨一个数字1，或者让一个变量降一个数字1.
使用格式：写在变量名称之前，或者写在变量名称之后，例如：++num，也可以num++
使用方式：
   1.单独使用：不和其他操作混合，自减独立成为一个步骤。
   2.混合使用：和其他操作混合，例如与赋值混合，或者与打印操作混合等等。
使用区别：
   1.在单独使用的时候，前++和后++没有任何区别，即++num和num++效果完全一样。
   2.在混合使用的时候，有重大区别：
       A：如果是前++，则该变量立刻马上加1，然后拿着加1后的结果进行使用，即【先加后用】。
       B：如果是后++，那么首先使用变量本来的数值，然后再让变量+1，即【先用后加】。
注意：只有变量才能使用自增、自减运算符，常量不可使用，因为常量不能发生改变。

*/


public class Demo06Operator {
	public static void main(String[] args) {
		int num1 = 20;
		System.out.println(++num1);   //21
		System.out.println(num1);   //21
		
		int num2 = 30;
		System.out.println(num2++);  //30
		System.out.println(num2);   //31
		
		int num3 = 40;
		int result1 = --num3;  
		System.out.println(num3); //39
		System.out.println(result1); //39
		
		int num4 = 40;
		int result2 = num4--; 
		System.out.println(num4);   //39
		System.out.println(result2);    //40
		
		int x = 10;
		int y = 20;
		int result3 = ++x + y--;
		System.out.println(result3); //31
		System.out.println(x); //11
		System.out.println(y); //19
	}
}