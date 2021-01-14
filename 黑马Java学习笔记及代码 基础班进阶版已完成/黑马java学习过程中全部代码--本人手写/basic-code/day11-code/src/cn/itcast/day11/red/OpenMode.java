package cn.itcast.day11.red;

import java.util.ArrayList;

public interface OpenMode {
    /**
     * 请将totalMoney分成count份，保存到ArrayList<Integer>中，返回即可。
     *
     * @param totalMoney            总金额为方便计算，已经转换为整数，单位为分。一块钱=100分。
     * //注：在程序中任何涉及钱的计算都不能使用小数，比如放大成整数，因为小数计算不精确。为了计算方便必须使用整数。
     * @param totalCount            红包个数
     * @return ArrayList<Integer>	元素为各个红包的金额值，所有元素的值累和等于总金额。
     */
    ArrayList<Integer> divide(int totalMoney, int totalCount);
}