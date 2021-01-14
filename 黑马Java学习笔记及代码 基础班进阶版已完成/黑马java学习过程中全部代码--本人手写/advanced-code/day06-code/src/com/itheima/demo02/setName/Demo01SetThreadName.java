package com.itheima.demo02.setName;

public class Demo01SetThreadName {
    public static void main(String[] args) {
        //开启多线程
        MyThread mt = new MyThread();
        mt.setName("小强");
        mt.start();

        //开启多线程
        new MyThread("旺财").start();

        MyThread mt2 = new MyThread();
        mt2.start();

        System.out.println(Thread.currentThread().getName());  //获取main线程名称
    }
}
/*
输出结果：
main
Thread-1
旺财
小强
 */