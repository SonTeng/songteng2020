/*
ǿ������ת��
   1.�ص㣺������Ҫ��������ĸ�ʽ���������Զ���ɡ�
   2.��ʽ����ΧС������ ��ΧС�ı����� = ����ΧС�����ͣ�ԭ����Χ������ݣ�
   
   ע�����
   

*/

public class Demo02DataTye {
	public static void main(String[] args) {
		//�����int���ͣ��ұ���long���ͣ���һ��
		//long --> int����Χ���Ǵ�С����
		//���ܷ����Զ�����ת��
		//int num = 100L;
		int num = (int)100L;
		System.out.println(num);
		
		//longǿ��ת����Ϊint����
		int num2 = (int)6000000000L;
		System.out.println(num2);  //���Ϊ1705032704
		
		//doubleǿ��ת����Ϊint
		int num3 = (int)3.99;
		System.out.println(num3);  //���Ϊ3���ⲻ���������룬����С��λ�ᱻ����
		
		char ch1 = 'A';  //����һ���ַ��ͱ����������Ǵ�д��ĸA
		System.out.println(ch1+1);   //���Ϊ66,��ΪA��65������ASCII��
		//������ĵײ����һ�����֣������ƣ��������ַ�A������65
		//һ��char���ͽ�������ѧ���㣬��ô�ַ��ͻᰴ��һ���Ĺ������Ϊһ������
		
		byte num4 = 40;   //ע���Ҳ����ֵ��С���ܳ����������ͷ�Χ
		byte num5 = 50;
		//byte result1 = num4 + num5;   //�д�����Ϊ����byte��ӣ���������Ϊ����int��ӣ����������int��byte���Զ�ת��
		byte result1 = (byte)(num4 + num5);   //���� int result1 = num4 + num5; 
		System.out.println(result1);  //90
		
		
		short num 6 = 60;
		int result2 = num4 + num6;   //byte + short --> int + int --> int
		System.out.println(result2); 
		
		//intǿ��ת����short��ע�����뱣֤�߼�����ʵ��С������û�г���short��Χ������ᷢ���������
		//short result2 = (short) (num4 + num6);	
	}
}