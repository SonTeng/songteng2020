# Java学习笔记  
自20200516始  

## Java基础

### 01-Java语言入门

#### 01-Java基础语法

##### day01-前言、入门程序、常量、变量

// 20200516  win10+IDEA+Typora

###### 01-Java语言发展史

1995年Sun公司发布Java1.0版本
1997年发布Java 1.1版本
1998年发布Java 1.2版本
2000年发布Java 1.3版本
2002年发布Java 1.4版本
2004年发布Java 5版本（重大版本）
2006年发布Java 6版本
2009年Oracle甲骨文公司收购Sun公司，并于2011发布Java 7版本
2014年发布Java 8版本（重大版本）
2017年发布Java 9版本
2018年发布Java 10版本

###### 02-计算机进制转换

十进制数据转为二进制数据：除2取余、逆序排列

二进制数据转为十进制数据：使用8421编码的方式

###### 03-计算机存储单元

字节：Byte，计算机中最小的存储单元。计算机存储任何数据都是以字节的形式存储。

8个bit（二进制位）0000-0000表示1个字节，写成1 byte或1 B。

- 8 bit = 1 B
- 1024 B = 1 KB
- 1024 KB = 1 MB
- 1024 MB = 1 GB
- 1024 GB = 1 TB

###### 04-命令提示符-基本结束

MS-DOS(Microsoft Disk Operating System)，集成到win10中叫做命令提示符（cmd）

win+R启动，输入cmd即可

###### 05-命令提示符-常用命令

注：win10下，大小写字母不区分

| 命令             | 操作符号    |
| :----------------: | :-----------: |
| 盘符切换命令     | 盘符名:     |
| 查看当前文件夹   | dir         |
| 进入文件夹命令   | cd 文件夹名(可以多级文件名) |
| 退出文件夹命令   | cd ..       |
| 退出到磁盘跟目录 | cd \        |
| 清屏             | cls         |
| 退出 | exit |

###### 06-Java语言的跨平台性

- JVM(Java Virtual Machine)：Java虚拟机，是java程序的运行环境。
- 跨平台：代码一次编写，处处运行，该特性由JVM实现，程序在JVM上运行，JVM运行在操作系统上。

###### 07-JDK、JRE与JVM

- JRE(Java Runtime Environment)：是Java程序的运行时环境，包含JVM和运行时所需的核心类库。
- JDK(Java Development Kit)：是java程序开发工具包，包含JRE和开发人员使用的工具。
- 三者关系：JDK>JRE>JVM
- JDK=JRE+编译器等开发工具，JRE=运行类库+JVM。

###### 08-JDK的下载与安装

去Oracle观网下载对应系统的JDK，路径最好不要有中文和空格，以免出现乱码和编译错误。

###### 09-环境变量配置

以win10为例，在系统-环境变量中设置，在系统变量中新建JAVA_HOME变量，并将值设为jdk安装位置，然后在Path中添加新的值，以便将java命令添加到路径中。

###### 10-HelloWorld程序的代码编写

Java程序开发三步骤：编写、编译、运行。

- 编写：源程序，文件名.java，例Hello.java

- 编译：编译器编译源程序后生成java字节码文件，及文件名.class

- 运行：java字节码文件在JVM上运行

- javac.exe：编译器，在DOS命令行中 javac Hello.java，则生成Hello.class，即生成类文件。

- java.exe：解释器，在DOS命令行中java Hello，则执行.class文件，输出结果

    ```java
    public class HelloWorld{
    	public static void main(String[] args){
    		System.out.println("Hello,World");
    	}
  }
  ```

###### 11-HelloWorld程序的编译运行

注：文件名HelloWorld，必须和代码中类的名称是完全相同的，注意大小写。

###### 12-HelloWorld的常见问题与Notepad++使用

注意单词拼写的正确性，和代码格式的正确性。

Notepad++：行号，代码高亮，编码格式。

###### 13-程序注释与HelloWorld说明

- 单行注释：//

- 多行注释：/*  */  可跨行，也称作区块注释

```java
  //第一行的第三个单词必须和所在的文件名称完全一样，大小写也要一样
  //public class后面代表定义一个类的名称，类是Java当中所有源代码的基本组织单位
  public class HelloWorld {
  	//下面一行的内容是Java程序万年不变的固定写法，代表main方法
  	//main所在的行是程序执行的起点
  	public static void main(String[] args) {
  		//下面一句代表打印输出语句，即屏幕显示
  		//希望显示什么内容，就应在括号内以对应的格式输入，即可输出。
  		System.out.println("Hello,World!");
  	}
  }
```

  

###### 14-关键字的概念与特征

关键字：keywords，指在程序中，Java已经定义好的单词，具有特殊含义。

如public，class，static，void等，这些单词已经被Java定义好，且全部是小写字母。

关键字较多，不需要死记硬背，学到哪里记到哪里即可。

###### 15-标识符的概念与规则

- 标识符：指在程序中，我们自己定义内容，比如类的名字、方法的名字和变量的名字等。都是标识符。
  - HelloWorld.java程序中，出现的标识符有类名称`HelloWorld`。
- 命名规则：`硬性要求`
  - 标识符可以包含`英文字母26个(区分大小写)`、`0-9数字`、`$(美元符号)`和`_(下划线)`
  - 标识符不能以数字开头
  - 标识符不能是关键字
- 命名规范：`软性建议`
  - 类名规范：首字母大写，后面每个单词首字母大写（大驼峰式）
  - 变量名规范：首字母小写，后面每个单词首字母大写（小驼峰式）
  - 方法名规范：同变量名规范

###### 16-常量的概念与分类（1）

常量：在程序运行期间，固定不变的量。

常量的分类：

1. 字符串常量：凡是用双引号引起来的部分，叫做字符串常量。例如："abc"、"123"等
2. 整型常量：直接写上的数字，没有小数点。例如：100、200、0、-12等
3. 浮点数常量：直接写上的数字，有小数点。例如：2.5、-3.14等
4. 字符常量：凡是用单引号引起来的单个字符，叫做字符常量。例如：'A'、'9'、'中'等
5. 布尔常量：只有两种取值：true、false
6. 空常量：null，代表没有任何数据

###### 17-常量的打印输出

```java
public class Demo01Const {
		public static void main(String[] args) {
				//字符串常量
				System.out.println("ABC");
				System.out.println("");    //字符串两个双引号中间的内容为空
				System.out.println("XY");
				
				//整数常量
				System.out.println("30");
				System.out.println("-9");
				
				//浮点数常量（小数）
				System.out.println("3.14");
				System.out.println("-2.5");
				
				//字符常量
				System.out.println('A');
				System.out.println('6');
				System.out.println('中');
				//System.out.println('');  //两个单引号连着写不行，必须有且只有一个字符，哪怕是空格也行
				
				//布尔常量 
				System.out.println(true);
				System.out.println(false);
				
				//空常量：不能直接打印输出
				//System.out.println(null);   //注意事项：不能直接打印空常量			
			
		}	
}
```



###### 18-基本数据类型

数据类型分类：

基本数据类型：(四类八种)

- 整数型：byte  short  int long

- 浮点型:  float  double

- 字符型:  char

- 布尔型:  boolean

引用数据类型：`字符串`、`数组`、`类`、`接口`、`lambda`

|数据类型|关键字|内存占用|取值范围|
|:-:|:-:|:-:|:-:|
|字节型|byte| 1个字节|-128~127|
|短整型|short| 2个字节|-32768~32767|
|整型|int（默认）| 4个字节|-2的31次方~2的31次方-1|
|长整型|long| 8个字节|-2的63次方~2的63次方-1|
|单精度浮点数|float| 4个字节|1.4013E-45~3.4028E+38|
|双精度浮点数|double（默认）| 8个字节|4.9E-324~1.7977E+308|
|字符型|char| 2个字节|0-65535|
|布尔类型|boolean| 1个字节|true，false|

Java中的默认类型：整数类型是`int`、浮点类型是`double`。如果一个浮点数一定要使用float，需要在后面加上一个后缀F，如果一个整数一定要使用long类型，则在后面加上后缀L，F/L大小写都可以，默认大写。

注1：比较float和long可知，表示范围和占用内存大小不一定相关，因为float使用科学计数法。

注2：`字符串`不是基本类型，而是引用类型，基本类型只有四类八种。

注3：浮点数可能只是一个近似值，并非精确的值。

###### 19-变量的概念与定义格式

变量：程序运行期间，可以发送改变的量。

创建一个变量并且使用的格式：
数据类型 变量名称;   //创建了一个变量
变量名称 = 数据值;   //对变量进行赋值，将右边的数据值赋值给左边的变量
或：
数据类型 变量名称 = 数据值;   //创建变量的同时立刻进行赋值

###### 20-变量的基本应用

```java
public class Demo02Variable {
	public static void main(String[] args) {
		// 创建一个变量
		// 格式：数据类型 变量名称;
		int num1;
		// 向变量当中存入一个数据
		// 格式：变量名称 = 数据值;
		num1 = 10;
		// 当打印输出变量名称的时候，显示出来的是变量的内容
		System.out.println(num1); // 10
		
		// 改变变量当中本来的数字，变成新的数字
		num1 = 20;
		System.out.println(num1); // 20
		
		// 使用一步到位的格式来定义变量
		// 格式：数据类型 变量名称 = 数据值;
		int num2 = 25;
		System.out.println(num2); // 25
		
		num2 = 35;
		System.out.println(num2); // 35
		System.out.println("===============");
		
		byte num3 = 30; // 注意：右侧数值的范围不能超过左侧数据类型的取值范围
		System.out.println(num3); // 30
		
		// byte num4 = 400; // 右侧超出了byte数据范围，错误！
		
		short num5 = 50;
		System.out.println(num5); // 50
		
		long num6 = 3000000000L;
		System.out.println(num6); // 3000000000
		
		float num7 = 2.5F;
		System.out.println(num7); // 2.5
		
		double num8 = 1.2;
		System.out.println(num8); // 1.2
		
		char zifu1 = 'A';
		System.out.println(zifu1); // A
		
		zifu1 = '中';
		System.out.println(zifu1); // 中
		
		boolean var1 = true;
		System.out.println(var1); // true
		
		var1 = false;
		System.out.println(var1); // false
		
		// 将一个变量的数据内容，赋值交给另一个变量
		// 右侧的变量名称var1已经存在，里面装的是false布尔值
		// 将右侧变量里面的false值，向左交给var2变量进行存储
		boolean var2 = var1;
		System.out.println(var2); // false
	}
}
```



###### 21-变量的注意事项

使用变量的时候，有一些注意事项：

1. 如果创建多个变量，那么变量之间的名称不可以重复。

2. 对于float和long类型来说，字母后缀F和L不要丢掉。

3. 如果使用byte或者short类型的变量，那么右侧的数据值不能超过左侧类型的范围。

4. 没有进行赋值的变量，不能直接使用；一定要赋值之后，才能使用。

5. 变量使用不能超过作用域的范围。
    【作用域】：从定义变量的一行开始，一直到直接所属的大括号结束为止。

6. 可以通过一个语句来创建多个变量，但是一般情况不推荐这么写。

   ```java
   public class Demo03VariableNotice {
   	public static void main(String[] args) {
   		int num1 = 10; // 创建了一个新的变量，名叫num1
   		// int num1 = 20; // 又创建了另一个新的变量，名字也叫num1，错误！
   		
   		int num2 = 20;
   		
   		int num3;
   		num3 = 30;
   		
   		int num4; // 定义了一个变量，但是没有进行赋值
   		// System.out.println(num4); // 直接使用打印输出就是错误的！
   		
   		// System.out.println(num5); // 在创建变量之前，不能使用这个变量
   		
   		int num5 = 500;
   		System.out.println(num5); // 500
   		
   		{
   			int num6 = 60;
   			System.out.println(num6); // 60
   		}
   		// int num6;
   		// System.out.println(num6); // 已经超出了大括号的范围，超出了作用域，变量不能再使用了
   		
   		// 同时创建了三个全都是int类型的变量
   		int a, b, c;
   		// 各自分别赋值
   		a = 10;
   		b = 20;
   		c = 30;
   		System.out.println(a); // 10
   		System.out.println(b); // 20
   		System.out.println(c); // 30
   		
   		// 同时创建三个int变量，并且同时各自赋值
   		int x = 100, y = 200, z = 300;
   		System.out.println(x); // 100
   		System.out.println(y); // 200
   		System.out.println(z); // 300
   	}
   }
   ```

   

##### day02-数据结构转换、运算符、方法入门

//20200606 win10+IDEA+Typora

###### 01-数据类型转换-自动转换

Java程序中要求参与计算的数据，必须要保证数据类型的一致性，如果数据类型不一致将发生类型的转换。

类型转换分为两种方式：自动类型转换和强制类型转换

自动类型转换（隐式）：

>   1.特点：代码不需要进行特殊处理，自动完成
>   2.规则：数据范围从小到大
>   注：数据范围从小到大与它所占的字节数不一定相关。比如float占4B，long占8B，但前者表示范围更大。
>   注：byte、short、char   -->  int  -->  long  -->  float  -->  double

```java
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
```

强制类型转换（显式）

###### 02-数据类型转换-强制转换

> 强制类型转换：将取值范围大的类型强制转换为取值范围小的类型，需要显示的手动执行，而不能像自动转换那样由Java自动执行。
>    1.特点：代码需要进行特殊的格式处理，不能自动完成。
>    2.格式：范围小的类型 范围小的变量名 = （范围小的类型）原本范围大的数据；

```java
public class Demo02DataTye {
	public static void main(String[] args) {
		//左边是int类型，右边是long类型，不一样
		//long --> int，范围不是从小到大
		//不能发生自动类型转换
		//int num = 100L;
		int num = (int)100L;
		System.out.println(num);
	}
}
```

###### 03-数据类型转换-注意事项

1.强制类型转换一般不推荐使用，因为有可能发生精度损失(小数：float强制转成int：不是四舍五入，而是直接截断)，数据溢出(整数)。比如int能表示的最大范围大概是21个亿。

2.byte、short、char这三种类型都可以发生数学运算，例如加法"+"

3.byte、short、char这三种类型在运算时，都会被首先提升为int类型，然后再计算。对应规则：ASCII表

4.布尔类型boolean不能发生数据类型转换（Java中的严格规定，只能false或true）

```java
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
```

###### 04-ASCII编码表

编码表：数字和字符的对照关系表。计算机内部都是0，1的二进制数据，将人类的文字和一个十进制数字进行一一对应的编码表格。

ASCII表：American Standard Code for Inforation Interchange，美国信息交换标准代码，分别用0到127来表示常用数字，字母，符号等。

Unicode码表：万国码，也是数字和符号对照关系表，开头0-127和ASCII完全一样，但从128开始包含有更多字符，甚至包括Emoji表情符号。例如用数字20013代表中文字符'中'

注：不需要背诵全表，只在需要的时候查表就行了。

三个特别需要记住的数字及对应值：

ASCII表中数字48代表十进制中的‘0’，即49代表‘1’，如此类推，数字65代表大写字母‘A’，即66代表‘B’，如此类推，数字97代表小写字母‘a’，98代表‘b’，如此类推。

```java
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
```

###### 05-算术运算符-四则与取模运算

运算符：进行特定操作的符号，例如+

表达式：用运算符连接起来的式子叫做表达式，例如20+30，又比如a+b

四则运算：首先计算表达式的结果，然后再打印输出这个结果。

加：+    减：-    乘：*    除：/    取余(取模)：%

注：只有对整除的除法来说，取模运算符才有余数的意义

注：一旦运算当中有不同类型的数据，那么结果将会由数据类型范围较大的决定。例如int + double，输出结果为double。

注：byte、short、char这三种类型在运算时，都会被首先提升为int类型，然后再计算。

###### 06-算术运算符-加号的多种用法

四则运算中的加号“+”有常见的三种用法：
1.对于数值来说，那就是算术加法运算。
2.对于字符char类型来说，在计算之前，char会被提升为int，然后再计算，char和int之间的对应关系参考ASCII和Unicode表
3.字符串String是引用类型，而不是基本类型，加号代表字符串连接操作。
注：任何数据类型和字符串进行连接操作时，结果都会变成字符串。

```java
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
```

###### 07-算术运算符-自增自减运算符

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

```java
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
```

###### 08-赋值运算符

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

###### 09-比较运算符

比较运算符，是两个数据之间进行比较的计算，运算结果都是布尔值true或者false。

注：如果进行多次判断，不能连着写。例：1<x<3，这种数学上的写法，不允许出现在程序中。

大于：		>
小于：		<
大于等于：	>=
小于等于：	<=
相等：		==	【两个等号连写才是相等，一个等号代表的是赋值】
不相等：	!=

###### 10-逻辑运算符

逻辑运算符：三种，是用来连接两个布尔值的。
与(并且)   &&   全都是true，结果为true，否则就是flase
或(或者)   ||      至少有一个true，就是true，全部是false，结果才能是false
非(取反)    !       本来是ture，变成false，本来是false，变成true

注：短路：“与&&”和“或||”具有短路效果，如果根据左边已经可以判断得到最终结果，那么右边的代码将不再执行，从而节省一定的性能。
注意事项：

1. 逻辑运算符只能用于boolean

2. 与、或需要左右各自有一个boolean值，但是取反只要有唯一的一个boolean值即可。

3. 与、或两种运算符，如果有多个条件，可以连续写。
     两个条件：条件A && 条件B
     多个条件：条件A && 条件B && 条件C

TIPS：
对于1 < x < 3的情况，应该拆成两个部分，然后使用与运算符连接起来：
int x = 2;
1 < x && x < 3

###### 11-三元运算符

一元运算符：只需要一个数据就可以进行操作的运算符。例如：取反!、自增++、自减--
二元运算符：需要两个数据才可以进行操作的运算符。例如：加法+、赋值=
三元运算符：需要三个数据才可以进行操作的运算符。

格式：
数据类型 变量名称 = 条件判断 ? 表达式A : 表达式B;

流程：
首先判断条件是否成立：
	如果成立为true，那么将表达式A的值赋值给左侧的变量；
	如果不成立为false，那么将表达式B的值赋值给左侧的变量；
二者选其一。

注意事项：
1.  必须同时保证表达式A和表达式B都【符合左侧数据类型】的要求。

2. 三元运算符的结果必须被使用。

   ```java
   public class Demo10Operator {
   	public static void main(String[] args) {
   		int a = 10;
   		int b = 20;
   		
   		// 数据类型 变量名称 = 条件判断 ? 表达式A : 表达式B;
   		// 判断a > b是否成立，如果成立将a的值赋值给max；如果不成立将b的值赋值给max。二者选其一
   		int max = a > b ? a : b; // 最大值的变量
   		System.out.println("最大值：" + max); // 20
   		
   		// int result = 3 > 4 ? 2.5 : 10; // 错误写法！因为2.5和左边int类型不匹配
   		
   		System.out.println(a > b ? a : b); // 正确写法！
   		
   		// a > b ? a : b; // 错误写法！
   	}
   }
   ```

   

###### 12-方法入门-概念引入

为了避免重复代码，需要用方法来实现。

> **方法**：就是将一个功能抽取出来，把代码单独定义在一个大括号中，形成一个单独的功能。

当我们需要这个功能的时候，就可以去调用，这样既实现了代码的复用性，也解决了代码冗余的现象。

###### 13-方法入门-方法的定义

定义格式：

```
修饰符 返回值类型 方法名 (参数列表) {
    代码....
    return;
}
```

定义格式解释：

- 修饰符：目前固定写法是public static

- 返回值类型：目前固定写法是void，其他返回值类型在后面的课程讲解

- 方法名：为我们定义的方法起名，满足标识符的规范，用来调用方法

- 参数列表：目前无参数，带有参数的方法在后面的课程讲解

- return：方法结束。因为返回值是void，方法大括号内的return可以不写

- 示例：

  - ```java
    public static void methodName() {
      System.out.println("this is a method in java!");
    }
    ```

注：

- 方法名称的命名规则和变量一样，使用小驼峰式
- 方法定义的顺序无所谓；
- 方法的定义不能产生嵌套包含关系；即一个方法不能定义在另一个方法内部，在方法内部只能通过方法名进行调用其他方法，而不能直接在本方法内部定义。
- 方法定义好了之后，不会执行的，如果要想执行，一定要进行方法调用。

###### 14-方法入门-方法的调用

如何调用方法，格式：

方法名称();

###### 15-JDK9的JShell简单实用

JShell脚本工具是JDK9的新特性

什么时候会用到 JShell 工具？当我们编写的代码非常少，而又不愿意编写类，main方法，也不愿意编译和运行，这个时候可以使用 JShell 工具

启用 JShell 工具，在DOS命令行直接输入jshell，前提，jdk已安装并进行环境配置。

说明，JShell 只能做个类似于小便笺的小工具使用，仅此而已，而不能完全替代创建.java文件使用。

![JShell的使用示例](https://github.com/SonTeng/songteng2020/blob/master/Java(%E9%BB%91%E9%A9%AC2019%2BIDEA)/Day02/JShell%20example.JPG)

###### 16-编译器的两点优化

##### day03-流程控制语句



##### day04-IDEA、方法



##### day05-数组



#### 02-面向对象与常用类
