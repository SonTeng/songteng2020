package cn.itcast.day05.demo02;

public class Demo01ArrayOne {

    public static void main(String[] args) {
        int[] array = new int[3]; // 动态初始化   //注：数组名称array就是一个变量，变量可以是基本类型，也可以是引用类型。
        System.out.println(array); // 地址值
        System.out.println(array[0]); // 0
        System.out.println(array[1]); // 0
        System.out.println(array[2]); // 0
        System.out.println("==============");

        // 改变数组当中元素的内容
        array[1] = 10;
        array[2] = 20;
        System.out.println(array); // 地址值
        System.out.println(array[0]); // 0
        System.out.println(array[1]); // 10
        System.out.println(array[2]); // 20
    }

}
