//#include <iostream>
//using namespace std;
//
////��̬��Ա����
//
//class Person
//{
//public:
//	//1.���ж��󶼹���ͬһ������
//	//2.����׶ξͷ����ڴ�
//	//3.���������������ʼ��
//	static int m_A;
//
//private:
//	static int m_B;
//
//};
//int Person::m_A = 0;
//int m_B;
//
//void test01()
//{
//	Person p;
//	cout << p.m_A << endl; //����õ�0
//	Person p2;
//
//	p2.m_A = 1;
//	cout << p.m_A << endl;//����õ�1
//
//}
//
//void test02()
//{
//	//��̬��Ա���� ������ĳ�������ϣ����ж��󶼹���ͬһ������
//	//��˾�̬��Ա���������ַ��ʷ�ʽ��
//	  //1��ͨ��������з���
//	Person p;
//	cout << p.m_A << endl;
//
//	//2��ͨ���������з���
//	cout << Person::m_A << endl;
//
//	/*cout << Person::m_B << endl;*/  //����һ����������ģ���Ϊm_B��˽��������
//}
//
//
//
//
//
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}









#include <iostream>
using namespace std;
//��̬��Ա����
//���ж�����ͬһ������
//��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����



class Person
{public:
	//��̬��Ա����
	static void func()
	{
		m_A = 100;//��̬��Ա���� ���Է��ʾ�̬��Ա����
		//m_B=200;��̬��Ա���� ���ܷ��ʷǾ�̬��Ա�������޷����ֵ������ĸ������m_B����
		cout << "static void func����" << endl;

}
	static int m_A;//��̬��Ա����
	int m_B;//�Ǿ�̬��Ա����

private:
	static void func2()
	{
		cout << "static void func2�ĵ���" << endl;


	}



};

int Person::m_A = 0;//�ǵ����������������ʼ��

//���ʾ�̬��Ա�����ķ���x2��
void test01()
{
	//1��ͨ���������
	Person p;
	p.func();
	//2��ͨ����������
	Person::func();
//	Person::func2();����������˽���������£������ò���
}


int main()
{



	system("pause");
	return 0;
}