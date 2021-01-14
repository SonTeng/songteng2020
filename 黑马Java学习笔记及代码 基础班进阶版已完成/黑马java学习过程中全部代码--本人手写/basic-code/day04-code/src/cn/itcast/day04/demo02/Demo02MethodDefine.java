package cn.itcast.day04.demo02;

public class Demo02MethodDefine {
    public static void main(String[] args) {
        int result = sumTwoNums(219,7346);
        System.out.println(result);
    }

    public static int  sumTwoNums(int a,int b) {
        int c = a + b;
        return c;
    }
}
