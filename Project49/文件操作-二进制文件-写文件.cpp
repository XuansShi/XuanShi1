////�ļ�����-�������ļ�-д�ļ�
//#include <iostream>
//#include <fstream>
//using namespace std;
//
//class Person//������ʾһ��ʹ����Ͷ����֪ʶ
//{
//public:
//	char m_Name[64];//����//�������ļ�ʹ��C++���ַ������ܻ��bug�����������ֱ����c���Ե�char����
//	int m_Age;//����
//
//
//};
//
//
//void test01()
//{
//	//1������ͷ�ļ�
//
//	//2���������������
//	ofstream ofs("person.txt", ios::out | ios::binary);
//	  //����ʵ��Ҳ�����ڴ����������ʱ������ú��ļ���ַ���򿪷�ʽ
//	   //��Ϊ�ö������һ������������ô���Ĺ��캯��
//
//	//3�����ļ�
//	//ofs.open("person.txt", ios::out | ios::binary);//ʹ�ð�λ�������ͬʱʹ�����ִ򿪷�ʽ
//
//
//	//4��д�ļ�
//	Person p = { "����",18 };//ʵ����Person��Ķ���ͬʱ��ֵ
//
//
//	ofs.write((const char *)&p,sizeof(Person));//������������һ�Ǹ����ݵĵ�ַ������Ǹ����ݵĳ���
//	//ע�������p��Person���ͣ����ú�������ֵ��ԭ����const char* ���ͣ���������Ҫǿת
//
//	//5���ر��ļ�
//	ofs.close();
//}
//int main()
//{
//	test01();
//
//
//	system("pause");
//	return 0;
//}