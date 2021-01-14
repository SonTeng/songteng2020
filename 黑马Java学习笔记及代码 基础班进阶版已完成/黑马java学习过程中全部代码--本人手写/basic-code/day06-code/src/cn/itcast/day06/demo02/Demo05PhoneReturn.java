package cn.itcast.day06.demo02;

public class Demo05PhoneReturn {

    public static void main(String[] args) {
        //下面不可写作Phone two = new Phone(); two.getPhone();

        Phone two = getPhone();
        //getPhone()是当前类中的方法，可以直接调用，或者用类名.方法名()调用
        System.out.println(two.brand); // 苹果
        System.out.println(two.price); // 8388.0
        System.out.println(two.color); // 玫瑰金
    }

    public static Phone getPhone() {   //对象的类型做返回值，因为对象的类型是类，而类是引用数据类型
        Phone one = new Phone();
        one.brand = "苹果";
        one.price = 8388.0;
        one.color = "玫瑰金";
        return one;
    }

}
