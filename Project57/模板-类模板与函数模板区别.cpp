//模板-类模板与函数模板区别
#include <iostream>
#include <string>
using namespace std;

template<class NameType,class AgeType>
class Person1
{
public:

	NameType m_Name;
	AgeType m_Age;

	Person1(NameType name, AgeType age)
	{
		this->m_Name = name;
		this->m_Age = age;


	}

	void showPerson()
	{
		cout << "m_Name = " << this->m_Name << " " << "m_Age = " << this->m_Age << endl;
	}


};

//1、类模板没有自动类型推导使用方式，只能用显示指定类型
void test01()
{
	Person1<string, int>p1("wukong",1000);

	p1.showPerson();

}




//2、类模板在模板参数列表中可以有默认参数
    //就是你可以在“template<class NameType,class AgeType>”中，让尖括号里的类型等于实际的类型：
      //也就是template<class NameType,class AgeType=int>，如下：
template<class NameType, class AgeType = int>
class Person2
{
public:

	NameType m_Name;
	AgeType m_Age;

	Person2(NameType name, AgeType age)
	{
		this->m_Name = name;
		this->m_Age = age;


	}

	void showPerson()
	{
		cout << "m_Name = " << this->m_Name << " " << "m_Age = " << this->m_Age << endl;
	}


};




void test02()
{
	Person2<string>p2("bajie", 900);//和函数一样的，有默认参数时，传参了就用传参，没传参就用默认

	p2.showPerson();

}

int main()
{
	test01();
	test02();

	system("pause");
	return 0;
}