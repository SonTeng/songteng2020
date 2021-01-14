package cn.itcast.day04.demo03;

public class Demo01MethodSame {
    public static void main(String[] args) {
        System.out.println(isSame(10,20));
        System.out.println(isSame(30,30));
    }
    /*
    三要素：
    返回类型：boolean
    方法名称：isSame
    参数列表：int a, int b
     */
    public static boolean isSame(int a, int b) {
        //boolean same;
        /*if(a==b)
            same=true;
        else
            same=false;
        */

        // same = a==b?true:false;

        //boolean same = a==b;
        return a==b;
    }

}
