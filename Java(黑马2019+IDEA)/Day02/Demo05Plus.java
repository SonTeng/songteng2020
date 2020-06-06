/*
四则运算中的加号“+”有常见的三种用法：
1.对于数值来说，那就是算术加法运算。
2.对于字符char类型来说，在计算之前，char会被提升为int，然后再计算，char和int之间的对应关系参考ASCII和Unicode表
3.字符串String是引用类型，而不是基本类型，加号代表字符串连接操作。
注：任何数据类型和字符串进行连接操作时，结果都会变成字符串。
*/

public class Demo05Plus {
	public static void main(String[] args) {
	     //字符串类型的变量基本使用
         //数据类型 变量名称 = 数据值;
         String str1 = "Hello";		
         System.out.println(str1);   //Hello		 
		 
		 System.out.println("Hello" + "World");   //HelloWorld
		 
		 String str2 = "Java";
		 System.out.println(str2 + 20);   //Java20
		 
		 //优先级问题  String + int + int  --> String + int  --> String
		 System.out.println(str2+20+30);//Java2030，而不是Java50，因为两个加号，从左到右一次运算。 
		 System.out.println(str2+(20+30));  //Java50
	}	
}