/*
�����������++
�Լ��������--

�������壺��һ��������һ������1��������һ��������һ������1.
ʹ�ø�ʽ��д�ڱ�������֮ǰ������д�ڱ�������֮�����磺++num��Ҳ����num++
ʹ�÷�ʽ��
   1.����ʹ�ã���������������ϣ��Լ�������Ϊһ�����衣
   2.���ʹ�ã�������������ϣ������븳ֵ��ϣ��������ӡ������ϵȵȡ�
ʹ������
   1.�ڵ���ʹ�õ�ʱ��ǰ++�ͺ�++û���κ����𣬼�++num��num++Ч����ȫһ����
   2.�ڻ��ʹ�õ�ʱ�����ش�����
       A�������ǰ++����ñ����������ϼ�1��Ȼ�����ż�1��Ľ������ʹ�ã������ȼӺ��á���
       B������Ǻ�++����ô����ʹ�ñ�����������ֵ��Ȼ�����ñ���+1���������ú�ӡ���
ע�⣺ֻ�б�������ʹ���������Լ����������������ʹ�ã���Ϊ�������ܷ����ı䡣

*/


public class Demo06Operator {
	public static void main(String[] args) {
		int num1 = 20;
		System.out.println(++num1);   //21
		System.out.println(num1);   //21
		
		int num2 = 30;
		System.out.println(num2++);  //30
		System.out.println(num2);   //31
		
		int num3 = 40;
		int result1 = --num3;  
		System.out.println(num3); //39
		System.out.println(result1); //39
		
		int num4 = 40;
		int result2 = num4--; 
		System.out.println(num4);   //39
		System.out.println(result2);    //40
		
		int x = 10;
		int y = 20;
		int result3 = ++x + y--;
		System.out.println(result3); //31
		System.out.println(x); //11
		System.out.println(y); //19
	}
}