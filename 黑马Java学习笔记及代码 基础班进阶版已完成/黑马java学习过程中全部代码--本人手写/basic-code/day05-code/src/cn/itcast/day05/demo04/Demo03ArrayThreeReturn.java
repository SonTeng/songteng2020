package cn.itcast.day05.demo04;

public class Demo03ArrayThreeReturn {
    public static void main(String[] args) {
        int[] result = cacu(11,25,33);

        System.out.println("main函数开始执行：");
        System.out.println("one :"+ result);
        System.out.println("the sum is: " + result[0]);
        System.out.println("the avage is: " + result[1]);
        System.out.println("the ji is: " + result[2]);

    }

    public static int[] cacu(int a,int b,int c) {
        int sum = a + b + c;
        int avage = sum/3;
        int ji = a*b*c;

        int[] array = {sum,avage,ji};

        System.out.println("two :" + array);
        System.out.println("AAAAAAAAAAAAAAAAAAAAAAA");

        return array;
    }
}
