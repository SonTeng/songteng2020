package cn.itcast.day11.demo08;

import cn.itcast.day11.red.RedPacketFrame;

public class MyRed extends RedPacketFrame {
    /**
     * 构造方法：生成红包界面。
     *
     * @param title 界面的标题
     */
    public MyRed(String title) {
        super(title);
    }  //注：RedPacketFrame类是个抽象类，但没有默认(无参)构造方法，所以需要调用这个只有一个参数的方法
}
