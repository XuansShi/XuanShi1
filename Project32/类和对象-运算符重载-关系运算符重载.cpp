#include <iostream>
using namespace std;


//��Ͷ���-���������-��ϵ���������

class Person
{
public:
	Person(string name, int age)
	{
		m_Name = name;

		m_Age = age;


	}

	string m_Name;

	string m_Age;

//���� == ��
	bool operator== (Person &p)//�ڡ�p1 == p2���У�p1���ó�Ա�������������ﴫ��p2
	{
		if (this->m_Name == p.m_Name && this-> m_Age == p.m_Age)
		{
			return true;
		}//����ֵ
		return false;

	}


//���� != ��
	bool operator!=(Person& p)
	{
		if(this->m_Name == p.m_Name && this->m_Age == p.m_Age)
		{
		
		
		}


	}




};

void test01()
{
	Person p1("Tom", 18);
	Person p2("Jerry", 18);

	if (p1 == p2)
	{
		cout << "p1 �� p2 ���" << endl; 


	}
	else
	{
		cout << "p1��p2�ǲ���ȵ�" << endl;

	}

	

}


int main()
{
	test01();




	system("pause");
	return 0;
}