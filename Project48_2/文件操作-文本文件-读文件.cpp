//�ļ�����-�ı��ļ�-���ļ�
#include <iostream>
#include <fstream>
#include <string>
using namespace std;





void test01()
{
	//1������ͷ�ļ�

	//2������������(������)
     ifstream ifs;

	//3�����ļ������ж��Ƿ�򿪳ɹ�
	 ifs.open("text1.txt", ios::in);//Ϊ���ļ������ļ�

	 if (!ifs.is_open())//is_open�������ж��Ƿ�򿪳ɹ��ĺ���������bool���͵����ݡ�����������Լ�һ��if
		 //��ϰ��������ȡ�����ж��Ƿ��ʧ��
	 {
		 cout << "�ļ���ʧ��" << endl;
	
	 }
	 else
	 {
		 cout << "�ļ��򿪳ɹ�" << endl;
		
	 }
	//4��������
	
	 //��һ�֣�ʹ�� ���Ʋ����� �� ����
	 
	   //char buf[1024] = { 0 };  //��ʼ������
	   //while (ifs>>buf)//ʹ�������������ifs�����ݷŵ�����buf�У�������ʱ����while
	   //{
		  // cout << buf << endl;

	   //}

	 //�ڶ��� �ֲ�getline���� + ����
	   //char buf[1024] = { 0 };
	   //while (ifs.getline(buf,sizeof(buf)))//�ֲ�getline���� ��ȡһ�У�����Ҫ��������,��һ�Ƕ�ȡ�ĵ�ַ������Ƕ�ȡ���ٸ��ֽ���
	   //{
		  // cout << buf << endl;

	   //}


	 //������ ȫ��getline���� + C++���ַ���
	 //string buf;
	 //while (getline(ifs,buf ))//ȫ��getline��Ҫ������������һ��������������,������ַ�����
	 //{
		// cout << buf << endl;

	 //}

	 //������ get���� + �ַ���
	   //���Ƽ����÷���һ��ֻ�ܶ�ȡ�ļ����һ���ַ�
	 char c;
	 while( (c = ifs.get()) !=EOF )//ע�������ʽҪ������������������!=�ж�;   ENF��"end of file"���ļ�β����־
		 {
		 cout << c ;

		 }


	//5���ر��ļ�
	 ifs.close();

}


int main()
{
	test01();
	

	system("pause");
	return 0;
}