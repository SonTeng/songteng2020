/*
当数据类型不一样时，当会发生数据类型转换

自动类型转换（隐式）
      1.特点：代码不需要进行特殊处理，自动完成
	  2.规则：数据范围从小到大
	  注：数据范围从小到大与它所占的字节数不一定相关。比如float占4B，long占8B，但前者表示范围更大。
	  注：byte、short、char   -->  int  -->  long  -->  float  -->  double
强制类型转换（显式）
*/

public class Demo01DataTye {
    public static void main(String[] args) {
           System.out.println(1024);   //这是一个整数常量，默认是int类型
		   System.out.println(3.14);   //这是一个浮点数常量，默认是double类型
		   
		  //long num1 = 100L;   //定义一个long类型变量，在100后默认使用L
		  long num1 = 100;   //左边是long类型，右边是默认的int类型，左右不一样，但不会报错，因为类型转换
		  //一个等号代表赋值，将右侧的int常量，交给左侧的long变量进行存储
		  //int --> long，符合了数据范围从小到大的要求，这一行代码发生了自动类型转换
		   System.out.println(num1);
		   
		   //左侧是double类型，右边是float类型，左右不一样
		   //float --> double，符合从小到大的规则，也发生了自动类型转换。
		   double num2 = 2.5F;
		   System.out.println(num2);
		   
		   //左边是float类型，右边是long类型，左右不一样
		   //尽管long占8字节，float占4字节，但float表示的范围比Long更大
		   //long --> float，范围从小到大，也发生了自动类型转换
		   float num3 = 30L;
		   System.out.println(num3);  //结果：30.0
	}		
}