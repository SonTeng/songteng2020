/*
ASCII��
48��0
65��A
97��a

*/

public class Demo03DataTypeChar {
	public static void main(String[] args) {
		char ch1 = '1';
		System.out.println(ch1+0);   //ASCII���char-->int����Ϊchar�������ӷ�ʱ��������Ϊint���������㣬���ҲΪint����
		
		char ch2 = 'A';  //��ʵ������ײ㱣�����65�Ĳ���
		char ch3 = 'c';
		int num = ch3;  // numΪ99
		System.out.println(num);
		
		//char �ǿ��������������ĵ�
		
		char ch4 = '��';  //д����ȷ
		System.out.println(ch4+0);   //���Ϊ20013,Unicode���
	}	
}