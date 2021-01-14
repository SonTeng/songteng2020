package cn.itcast.day11.demo06;

// 游戏当中的英雄角色类
public class Hero {

    private String name; // 英雄的名字
    private int age; // 英雄的年龄
    private Weapon weapon; // 英雄的武器

    public Hero() {
    }

    public Hero(String name, int age, Weapon weapon) {
        this.name = name;
        this.age = age;
        this.weapon = weapon;
    }

    //方法内的输出语句中，此处String类型的变量可以直接使用 + 拼在一起，而weapon则是一个对象，需要通过方法来调用，获取的结果才能拼进输出语句中。
    public void attack() {
        System.out.println("年龄为" + age + "的" + name + "用" + weapon.getCode() + "攻击敌方。");
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public Weapon getWeapon() {
        return weapon;
    }

    public void setWeapon(Weapon weapon) {
        this.weapon = weapon;
    }
}
