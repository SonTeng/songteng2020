package cn.itcast.day08.demo01;

/*
字符串常量池：程序当中直接写上的双引号字符串，就在字符串常量池中。
注：即只有直接双引号写的字符串，才能在常量池中，而并非所有字符串都在常量池中，配合String类的3种构造方法理解。

对于基本类型来说，==是进行数值的比较。
对于引用类型来说，==是进行【地址值】的比较。
注：因为字符串不可改变，所以字符串是可以共享使用的。共享以节省内存。
注：==的结果是布尔值，true/false。
 */
public class Demo02StringPool {

    public static void main(String[] args) {
        String str1 = "abc";
        String str2 = "abc";

        char[] charArray = {'a', 'b', 'c'};
        String str3 = new String(charArray);

        System.out.println(str1 == str2); // true
        System.out.println(str1 == str3); // false
        System.out.println(str2 == str3); // false
    }

}
