//set����-�Զ�����������ָ���������
#include<iostream>
#include<string>
#include<algorithm>
#include<set>

using namespace std;

//ϰ���Զ�����������ָ������ ���Ǳ� ���������������� ����һ��������ָ���������
  //��һ�γ��ָ�֪ʶ�㣺�� ����list���� ��sort����


class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;

	}

	string m_Name;
	int m_Age;

};


//�����Զ�����������ͣ�����ָ���������
  //����һ���º���ʵ������m_Age�Ӵ�С����
class ComparePerson
{
public:


	bool operator()(const Person &p1, const Person &p2) const//�����const������
	{
		return p1.m_Age > p2.m_Age;

	}


};




void PrintSetPerson(const set<Person, ComparePerson>& sp)
{
	for (set<Person, ComparePerson>::const_iterator it = sp.begin(); it != sp.end(); it++)
	{
		cout << "������" << (*it).m_Name <<"  ���䣺"<<(*it).m_Age << endl;
	}

}


void test01()
{
	set<Person, ComparePerson>s;//���� Person,ComparePerson �������͵�set���� s


	Person p1("����", 21);
	Person p2("����", 22);
	Person p3("�ŷ�", 23);
	Person p4("����", 24);

	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);
	PrintSetPerson(s);


}




int main()
{
	test01();



	system("pause");
	return 0;
}