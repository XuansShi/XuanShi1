//map����-����
#include<map>
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

//��Ҫ������:
  //���÷º��������Ըı��������

//�����������������������������������������������͡�����������������������������������
class MyCompare 
{
public:
	bool operator()(int v1, int v2)const
	{
		return v1 > v2;
}

};


void PrintMapNZ(const map<int, int, MyCompare>& mp)
{
	if (mp.empty())
	{
		cout << "����Ϊ��" << endl;
	}
	{
		for (map<int, int, MyCompare>::const_iterator it = mp.begin(); it != mp.end(); it++)
		{

			cout << "key = " << (*it).first << "  value = " << it->second << endl;//��Ϊ�����Ƕ��飬�����㲻��ֻ����*it��������õ�����߼�ͷ�ķ����õ���һ���͵ڶ�������
		}
		cout << endl;
	}

}




void test01()
{
	cout << "����������������" << endl;


	map<int, int, MyCompare> m1;
	m1.insert(pair<int, int>(1, 10));
	m1.insert(pair<int, int>(2, 20));
	m1.insert(pair<int, int>(3, 30));
	m1.insert(pair<int, int>(4, 40));
	m1.insert(make_pair(5, 50));
	m1.insert(map<int, int>::value_type(6, 60));
	m1[7] = 70;
	PrintMapNZ(m1);





}
//�����������������������������������������������͡�����������������������������������



//�������������������������������������Զ����������͡�����������������������������������

class Person
{
public:
	Person(string name ,int age)
	{
		this->m_Age = age;
		this->m_Name = name;


	}


	int m_Age;
	string m_Name;

};


class PersonKeyCompare//Key��������
{
public:
	bool operator()(const int &pk1, const int& pk2)const//���������const��Ҫ©����
	{
		return pk1 > pk2;
	}


};




void PrintMapZDY(const map<int, Person, PersonKeyCompare>& mp)//��ӡԪ�غ���
{
	if (mp.empty())
	{
		cout << "����Ϊ��" << endl;
	}
	{
		for (map<int, Person, PersonKeyCompare>::const_iterator it = mp.begin(); it != mp.end(); it++)
		{

			cout << "key = " << (*it).first << "  ���䣺 " << it->second.m_Age<<"  ������ "<<(*it).second.m_Name << endl;//��Ϊ�����Ƕ��飬�����㲻��ֻ����*it��������õ�����߼�ͷ�ķ����õ���һ���͵ڶ�������
		}
		cout << endl;
	}

}

void test02()
{
	cout << "�Զ���������������" << endl;
	map<int, Person,PersonKeyCompare> m2;
	Person p1("С��", 8);//ʵ�����Ĳ���˳��Ҫ��Person���캯�����β�˳���Ӧ
	Person p2("�", 17);
	Person p3("�����", 1000);
	Person p4("����", 500);
	Person p5("����ϣ��", 18);

	m2.insert(pair<int, Person>(1, p1));
	m2.insert(pair<int, Person>(2, p2));
	m2.insert(pair<int, Person>(3, p3));
	m2.insert(pair<int, Person>(4, p4));
	m2.insert(pair<int, Person>(5, p5));
	//m2.insert(make_pair(2, p2));
	//m2.insert(map<int, Person>::value_type(3, p3));
	//m2[4] = p4;
	//m2.insert(make_pair(5, p5));
	PrintMapZDY(m2);


}

int main()
{
	test01();
	test02();



	system("pause");
	return 0;
}

