#include <iostream>
using namespace std;
#include <string>

//�������Ϊ���Ա (���ƽṹ��ȵ�����)

//�ֻ� ��
class Phone
{public:
	//�����Ϊ������-���ֻ�Ʒ��������ֵ����
	Phone(string pName)
	{
		m_PName = pName;

		cout << "Phone�Ĺ��캯������" << endl;
		//��������������class Phone����class Person
		  //���֣���������Ķ�����Ϊ����ĳ�Աʱ�����ȹ���������Ķ���
	}


	
	//�ֻ�Ʒ����
	string m_PName;

	~Phone()
	{
		cout << "Phone��������������" << endl;
		//���֣���������Ķ�����Ϊ����ĳ�Աʱ�������ͷű������ͷ����ࡣ
		//�빹�캯����˳���෴

	}


};


//�� ��
class Person
{

public:
	//����
	string m_Name;

	//�ֻ�
	Phone m_Phone;//����дһ���ֻ��࣬���涨���ֻ��ࣻ������ֻ�����Ϊ����ĳ�Ա��


	//��Ϊ-�вι��캯��
	Person(string name, string pName):m_Name(name),m_Phone(pName)
	{//��Phone m_Phone;��û�����⣬����Ϊ�൱����һ��д�˸�Phone m_Phone = pName;   ���Ǵ����������ʽת����

		cout << "Person�Ĺ��캯������" << endl;
		//��//��������������class Phone����class Person
	      //���֣���������Ķ�����Ϊ����ĳ�Աʱ�����ȹ���������Ķ���
	}
	//��Ϊ-��������
	~Person()
	{
		cout << "Person��������������" << endl;
		//���֣���������Ķ�����Ϊ����ĳ�Աʱ�������ͷű������ͷ����ࡣ
		//�빹�캯����˳���෴

	}

};


void test01()
{
	Person p("����", "��Ϊ");
	cout << p.m_Name << "���ţ�" << p.m_Phone.m_PName << "ʥ��" << endl;
}



 
int main()
{
	test01();




	system("pause");
	return 0;
}