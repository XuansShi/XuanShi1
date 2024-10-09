#include <iostream>
using namespace std;


//类和对象-运算符重载-关系运算符重载

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

//重载 == 号
	bool operator== (Person &p)//在“p1 == p2”中，p1调用成员函数，所以这里传入p2
	{
		if (this->m_Name == p.m_Name && this-> m_Age == p.m_Age)
		{
			return true;
		}//返回值
		return false;

	}


//重载 != 号
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
		cout << "p1 和 p2 相等" << endl; 


	}
	else
	{
		cout << "p1和p2是不相等的" << endl;

	}

	

}


int main()
{
	test01();




	system("pause");
	return 0;
}