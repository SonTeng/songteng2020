/*
���������Ͳ�һ��ʱ�����ᷢ����������ת��

�Զ�����ת������ʽ��
      1.�ص㣺���벻��Ҫ�������⴦���Զ����
	  2.�������ݷ�Χ��С����
	  ע�����ݷ�Χ��С����������ռ���ֽ�����һ����ء�����floatռ4B��longռ8B����ǰ�߱�ʾ��Χ����
	  ע��byte��short��char   -->  int  -->  long  -->  float  -->  double
ǿ������ת������ʽ��
*/

public class Demo01DataTye {
    public static void main(String[] args) {
           System.out.println(1024);   //����һ������������Ĭ����int����
		   System.out.println(3.14);   //����һ��������������Ĭ����double����
		   
		  //long num1 = 100L;   //����һ��long���ͱ�������100��Ĭ��ʹ��L
		  long num1 = 100;   //�����long���ͣ��ұ���Ĭ�ϵ�int���ͣ����Ҳ�һ���������ᱨ����Ϊ����ת��
		  //һ���ȺŴ���ֵ�����Ҳ��int��������������long�������д洢
		  //int --> long�����������ݷ�Χ��С�����Ҫ����һ�д��뷢�����Զ�����ת��
		   System.out.println(num1);
		   
		   //�����double���ͣ��ұ���float���ͣ����Ҳ�һ��
		   //float --> double�����ϴ�С����Ĺ���Ҳ�������Զ�����ת����
		   double num2 = 2.5F;
		   System.out.println(num2);
		   
		   //�����float���ͣ��ұ���long���ͣ����Ҳ�һ��
		   //����longռ8�ֽڣ�floatռ4�ֽڣ���float��ʾ�ķ�Χ��Long����
		   //long --> float����Χ��С����Ҳ�������Զ�����ת��
		   float num3 = 30L;
		   System.out.println(num3);  //�����30.0
	}		
}