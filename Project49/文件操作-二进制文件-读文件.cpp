//�ļ�����-�������ļ�-���ļ�
#include<iostream>
#include<fstream>
#include <string>
using namespace std;

class Person
{
public:
	char m_Name[64];//����//�������ļ�ʹ��C++���ַ������ܻ��bug�����������ֱ����c���Ե�char����
	int m_Age;//����


};


//�������ļ�  ���ļ�
void test01()
{
	//1������ͷ�ļ�

	//2������������
	ifstream ifs;//ofstreamд����//ifstream������//fstream��д���� 

	//3�����ļ� ͬʱ�ж��Ƿ�򿪳ɹ�
	ifs.open("person.txt", ios::in | ios::binary);


	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;

	}
	else
	{
		cout << "�ļ��򿪳ɹ�" << endl;
	}


	//4�����ļ�
	Person p;
	ifs.read((char *)&p,sizeof(Person));

	cout << "������" <<p.m_Name<<" ���� "<<p.m_Age << endl;

	//5���ر��ļ�

	ifs.close();
}


int main()
{

	test01();

	system("pause");
	return 0;
}