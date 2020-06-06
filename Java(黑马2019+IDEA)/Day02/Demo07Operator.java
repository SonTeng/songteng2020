/*
赋值运算符分为：
基本赋值运算符：就是一个等号“=”，代表将右侧的数据交给左侧的变量，例int a = 1;

符合赋值运算符：
加等   +=     例如 a+=3    相当于 a=a+3
减等   -=
乘等   *=
除等   /=
模等   %=
注：只有变量才能够使用赋值运算符，常量不能赋值操作。
注：复合赋值运算符其中隐含了一个强制类型转换，由编译器实现。例如，byte num = 13; num +=5;此时5为int类型，等价于byte = byte + int，所有先将右侧的byte提升为int类型进行相加运算，再将得到的int型结果强制转换为byte。
*/

public class Demo07Operator {
	public static void main(String[] args) {
		int a = 10;
		a+=5;
		System.out.println(a);  //15
		
		int x = 10;
		x%=3;
		System.out.println(x);  //3
		
	}
}