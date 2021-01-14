package com.itheima.demo06.ThreadSafe;

/*
    模拟卖票案例
    创建3个线程,同时开启,对共享的票进行出售
 */
public class Demo01Ticket {
    public static void main(String[] args) {
        //创建Runnable接口的实现类对象
        RunnableImpl run = new RunnableImpl();
        //创建Thread类对象,构造方法中传递Runnable接口的实现类对象
        //之所以用一个实现类对象run来创建三个线程，是为了确保只卖这100张票
        //如果用三个实现类对象来创建三个线程，那么将会卖300张票。
        Thread t0 = new Thread(run);
        Thread t1 = new Thread(run);
        Thread t2 = new Thread(run);
        //调用start方法开启多线程
        t0.start();
        t1.start();
        t2.start();
    }
}
/*
本程序运行结果：
将会出现两个及以上线程卖同一张票的现象，以及卖不存在的票的现象。
 */