//模板-类模板基本语法
#include <iostream>
#include <string>
using namespace std;

//类模板
  //语法：
  //template<typename T>

template<class NameType,class AgeType>//template的尖括号里写你定义的几种class模板数据类型
class Person
{
public:
	NameType m_Name;
	AgeType m_Age;


	Person(NameType name, AgeType age)
	{
		this->m_Name = name;
		this->m_Age = age;

	}



	void showPerson()
	{
		cout << "m_Name = " << this->m_Name << "m_Age =" << this->m_Age << endl;
	}


};

void test01()
{
	Person<string, int> p1("符华", 50000);//先写类模板中你写的typename的类型，然后实例化，然后传参

	p1.showPerson();
} 



template <class Elsy,class Mei>
class BBB
{
public:
	Elsy m_Zw;
	Mei m_Yy;

	BBB(Elsy zw,Mei yy)
	{
		this->m_Zw = zw;
		this->m_Yy = yy;

		cout << "m_Zw =" << m_Zw << "m_Yy =" << m_Yy << endl;
	}

};


void test02()
{
	BBB<string, int> p2("真我", 1);


}

int main()
{
	test01();
	test02();


	system("pause");
	return 0;
}