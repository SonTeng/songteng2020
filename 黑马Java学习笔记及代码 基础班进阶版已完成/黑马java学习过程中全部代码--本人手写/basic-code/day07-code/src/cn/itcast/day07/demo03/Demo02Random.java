package cn.itcast.day07.demo03;

import java.util.Random;

public class Demo02Random {

    public static void main(String[] args) {
        Random r = new Random();
        int count = 0;  //用来控制输出时的格式，每输出20个数就换行

        for (int i = 0; i < 100; i++) {
            int num = r.nextInt(10); // 范围实际上是0~9
            count++;

            if(count%20 != 0) {
                System.out.print(num + "  ");
            }
            else {
                System.out.print(num);
                System.out.println();
            }
        }
    }
}

/*随机生成一个数，输出100次，输出结果如下：
7  9  0  0  4  2  6  9  4  4  9  0  3  9  0  3  4  1  4  5
7  2  7  5  5  0  7  0  1  1  7  0  4  0  3  4  8  6  1  5
1  4  8  9  8  1  6  2  2  3  3  1  9  4  8  0  7  1  6  3
6  8  3  9  4  8  8  8  5  4  9  5  9  5  7  0  7  1  5  2
6  2  1  7  4  4  7  1  9  7  1  6  6  2  2  0  4  7  8  9
 */