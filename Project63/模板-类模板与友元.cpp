//ģ��-��ģ������Ԫ

#include <iostream>
#include <string>
using namespace std;

//����ʵ��
  //��Ҫ��ǰ������ �Լ���ǰ����ʵ�ֻ�������
template <class T1,class T2>
class Person;

template <class T1, class T2>
void printPerson2(Person<T1, T2> p)
{
	cout << "����ʵ��������" << p.m_Age << "����ʵ�����䣺" << p.m_Name << endl;

}


template<class T1,class T2>
class Person
{
	//ȫ�ֺ�������ʵ��
	friend void printPerson(Person<T1, T2> p)
	{
		cout << "������" << p.m_Age << "���䣺" << p.m_Name << endl;


	}

	//ȫ�ֺ�������ʵ��
	//friend void printPerson2(Person<T1, T2> p);
	//������һ����ͨ����������,����Ҫ��һ����ģ��Ĳ����б�
	  //���ȫ�ֺ���������ʵ�֣���Ҫ�ñ�������ǰ֪����������Ĵ���
	friend void printPerson2<>(Person<T1, T2> p);
public:
	Person(T1 name,T2 age)
	{
		this->m_Name;
		this->m_Age;

		
	}
private:
	T1 m_Name;
	T2 m_Age;



};





//1��ȫ�ֺ���������ʵ��
void test01()
{
	Person<string, int> p("Tom", 18);

	printPerson(p);
}

//2��ȫ�ֺ���������ʵ��
void test02()
{
	Person<string, int> p("Jerry", 20);
	printPerson2(p);

}


int main()
{

	//test01();
	test02();


	system("pause");
	return 0;
}