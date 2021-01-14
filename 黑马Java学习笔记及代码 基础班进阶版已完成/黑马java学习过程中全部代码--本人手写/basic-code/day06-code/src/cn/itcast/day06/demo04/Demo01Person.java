package cn.itcast.day06.demo04;

public class Demo01Person {

    public static void main(String[] args) {
        Person person = new Person();
        // 设置我自己的名字
        person.name = "王健林";
        person.sayHello("王思聪");

        System.out.println(person); // 地址值
    }

}

/*
王思聪，你好。我是王健林
cn.itcast.day06.demo04.Person@7a79be86  //此处上下地址值相同，表明this和Person对象是相同的
cn.itcast.day06.demo04.Person@7a79be86
 */