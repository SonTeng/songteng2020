/*
���������еļӺš�+���г����������÷���
1.������ֵ��˵���Ǿ��������ӷ����㡣
2.�����ַ�char������˵���ڼ���֮ǰ��char�ᱻ����Ϊint��Ȼ���ټ��㣬char��int֮��Ķ�Ӧ��ϵ�ο�ASCII��Unicode��
3.�ַ���String���������ͣ������ǻ������ͣ��ӺŴ����ַ������Ӳ�����
ע���κ��������ͺ��ַ����������Ӳ���ʱ������������ַ�����
*/

public class Demo05Plus {
	public static void main(String[] args) {
	     //�ַ������͵ı�������ʹ��
         //�������� �������� = ����ֵ;
         String str1 = "Hello";		
         System.out.println(str1);   //Hello		 
		 
		 System.out.println("Hello" + "World");   //HelloWorld
		 
		 String str2 = "Java";
		 System.out.println(str2 + 20);   //Java20
		 
		 //���ȼ�����  String + int + int  --> String + int  --> String
		 System.out.println(str2+20+30);//Java2030��������Java50����Ϊ�����Ӻţ�������һ�����㡣 
		 System.out.println(str2+(20+30));  //Java50
	}	
}