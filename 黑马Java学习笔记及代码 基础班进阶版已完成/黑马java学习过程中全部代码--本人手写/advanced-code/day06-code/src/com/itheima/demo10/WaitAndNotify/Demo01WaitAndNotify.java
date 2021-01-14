package com.itheima.demo10.WaitAndNotify;

/*
    等待唤醒案例:线程之间的通信
        创建一个顾客线程(消费者):告知老板要的包子的种类和数量,调用wait方法,放弃cpu的执行,进入到WAITING状态(无限等待)
        创建一个老板线程(生产者):花了5秒做包子,做好包子之后,调用notify方法,唤醒顾客吃包子

    注意:
        顾客和老板线程必须使用同步代码块包裹起来,保证等待和唤醒只能有一个在执行
        同步使用的锁对象必须保证唯一
        只有锁对象才能调用wait和notify方法

    Obejct类中的方法
    void wait()
          在其他线程调用此对象的 notify() 方法或 notifyAll() 方法前，导致当前线程等待。
          即当前线程调用此方法后会进入等待状态，直到其他线程唤醒它。
    void notify()
          唤醒在此对象监视器上等待的单个线程。
          会继续执行wait方法之后的代码
 */
public class Demo01WaitAndNotify {
    public static void main(String[] args) {
        //创建锁对象,保证唯一
        Object obj = new Object();
        // 创建一个顾客线程(消费者)   //使用匿名内部类
        new Thread(){
            @Override
            public void run() {
                //一直等着买包子
                while(true){   //while(true)：可以不加，加上的目的是死循环，让两人一直等包子做包子。
                    //保证等待和唤醒的线程只能有一个执行,需要使用同步技术
                    synchronized (obj){
                        System.out.println("告知老板要的包子的种类和数量");
                        //调用wait方法,放弃cpu的执行,进入到WAITING状态(无限等待)
                        //使用try-catch格式，而不能使用throws生命，因为父类的run方法没有抛出异常。
                        try {
                            obj.wait();
                        } catch (InterruptedException e) {
                            e.printStackTrace();
                        }
                        //唤醒之后执行的代码
                        System.out.println("包子已经做好了,开吃!");
                        System.out.println("---------------------------------------");
                    }
                }
            }
        }.start();

        //创建一个老板线程(生产者)
        new Thread(){
            @Override
            public void run() {
                //一直做包子
                while (true){
                    //花了5秒做包子
                    try {
                        Thread.sleep(5000);//花5秒钟做包子
                    } catch (InterruptedException e) {
                        e.printStackTrace();
                    }

                    //保证等待和唤醒的线程只能有一个执行,需要使用同步技术
                    synchronized (obj){
                        System.out.println("老板5秒钟之后做好包子,告知顾客,可以吃包子了");
                        //做好包子之后,调用notify方法,唤醒顾客吃包子
                        obj.notify();
                    }
                }
            }
        }.start();
    }
}
