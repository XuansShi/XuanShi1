//��Ͷ���-�̳�-��̳��﷨
#include<iostream>
using namespace std;

class Base1
{
public:
	int m_A;

	Base1()
	{
		m_A = 100;

	}

};

class Base2
{
public:
	int m_B;

	Base2()
	{
		m_B = 200;

	}

};

//����̳�Base1��Base2
  //�﷨: class ������ :�̳з�ʽ ����1,�̳з�ʽ ����2 ��...���̳з�ʽ ����n{}
class Son :public Base1, public Base2
{
public:
	int m_C;
	int m_D;


};

void test01()
{
	Son s;
	cout << "sizeof(Son) = " << sizeof(Son) << endl;//�������Son����Son�Ķ��󶼿���


	cout << "m_A = " << s.m_A << endl;//����û�б��������������Base1��Base2������һ�������ĳ�Ա���Ǿͻ������ʱ��Ҫ�����������
}                                      //�������ͣ�������
//�ĸ��������Խ����16

int main()
{

	
	system("pause");
    return 0;
}