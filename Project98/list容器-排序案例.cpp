//list����-������
#include <iostream>
#include<string>
#include<list>
#include<algorithm>
using namespace std;

//������������Person�Զ����������ͽ�������Person�����������������䡢���

//������򣺰�����������������������ͬ������߽��н���

class Person
{
public:
	Person(string name, int age, int height)
	{
		//ϰ������thisֱ�Ӽ�ͷ�ҵ���Ա���ݣ��ܿ족
		this->m_Name = name;
		this->m_Age = age;
		this->m_Height = height;

	}

	string m_Name;//����
	int m_Age;//����
	int m_Height;//���






};
void PrintList(const list<Person>&p)
{
	for (list<Person>::const_iterator it = p.begin(); it != p.end(); it++)
	{
		//ϰ��  ʹ��class���͵���������С�����������Ƚ����ã��ٵ��
		cout <<"����  " << (*it).m_Name << "  ";
		cout <<"����  " << (*it).m_Age << "  ";
		cout <<"���  " << (*it).m_Height <<endl;
		//ϰ��  itҲ���Ե���ָ�����Դ����������ü�ͷ������  it->m_Name  Ҳ�ǿ��Ե�


	}
	cout << endl;


}


//ָ���������(�˴�дһ���º���):
  //һ�㲽�裺
    //1.  bool��������
    //2.  ����������ͬ�������͵ı������бȽ�
    //3.  return����   ���򣺵�һ��С�ڵڶ��������򣺵ڶ���С�ڵ�һ��
    //4.  �߼����������if
bool compare(Person &p1,Person &p2)
{
	
	if (p1.m_Age == p2.m_Age)
	{
		//��������ȣ�����߽���
		return p1.m_Height > p2.m_Height;

	}
	else
	{
		//�������� ����
		return p1.m_Age < p2.m_Age;//�������Ҫ��ǰһ����С
	}


}


void test01()
{

	list<Person>L;

	Person p1("����", 35, 175);
	Person p2("�ܲ�", 45, 180);
	Person p3("��Ȩ", 40, 170);
	Person p4("����", 25, 190);
	Person p5("�ŷ�", 35, 160);
	Person p6("����", 35, 200);

	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	L.push_back(p5);
	L.push_back(p6);

	//ʵ��Ŀ�꣺������򣺰�����������������������ͬ������߽��н���
	cout << "����ǰ��" << endl;
	PrintList(L);

	cout << "--------------------------------------------------------------------" << endl;

	cout << "�����" << endl;
	L.sort(compare);//�������ݵ����Զ�����������ͣ�����ʹ��list��sortʱ����ָ���������Ҳ���� �ص����� ���� �º�����
	PrintList(L);

}



int main()
{
	test01();

	system("pause");
	return 0;
}
