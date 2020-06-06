/*
强制类型转换
   1.特点：代码需要进行特殊的格式处理，不能自动完成。
   2.格式：范围小的类型 范围小的变量名 = （范围小的类型）原本范围大的数据；
   
   注意事项：
   

*/

public class Demo02DataTye {
	public static void main(String[] args) {
		//左边是int类型，右边是long类型，不一样
		//long --> int，范围不是从小到大
		//不能发生自动类型转换
		//int num = 100L;
		int num = (int)100L;
		System.out.println(num);
		
		//long强制转换成为int类型
		int num2 = (int)6000000000L;
		System.out.println(num2);  //结果为1705032704
		
		//double强制转换成为int
		int num3 = (int)3.99;
		System.out.println(num3);  //结果为3，这不是四舍五入，所有小数位会被舍弃
		
		char ch1 = 'A';  //这是一个字符型变量，里面是大写字母A
		System.out.println(ch1+1);   //结果为66,因为A是65，这是ASCII表
		//计算机的底层会用一个数字（二进制）来代表字符A，就是65
		//一旦char类型进行了数学运算，那么字符就会按照一定的规则翻译成为一个数字
		
		byte num4 = 40;   //注：右侧的数值大小不能超过左侧的类型范围
		byte num5 = 50;
		//byte result1 = num4 + num5;   //有错误，因为两个byte相加，会先提升为两个int相加，而不能完成int到byte的自动转换
		byte result1 = (byte)(num4 + num5);   //或者 int result1 = num4 + num5; 
		System.out.println(result1);  //90
		
		
		short num 6 = 60;
		int result2 = num4 + num6;   //byte + short --> int + int --> int
		System.out.println(result2); 
		
		//int强制转换成short，注：必须保证逻辑上真实大小本来就没有超过short范围，否则会发生数据溢出
		//short result2 = (short) (num4 + num6);	
	}
}