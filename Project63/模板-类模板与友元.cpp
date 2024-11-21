//模板-类模板与友元

#include <iostream>
#include <string>
using namespace std;

//类外实现
  //需要提前声明类 以及提前函数实现或者声明
template <class T1,class T2>
class Person;

template <class T1, class T2>
void printPerson2(Person<T1, T2> p)
{
	cout << "类外实现姓名：" << p.m_Age << "类外实现年龄：" << p.m_Name << endl;

}


template<class T1,class T2>
class Person
{
	//全局函数类内实现
	friend void printPerson(Person<T1, T2> p)
	{
		cout << "姓名：" << p.m_Age << "年龄：" << p.m_Name << endl;


	}

	//全局函数类外实现
	//friend void printPerson2(Person<T1, T2> p);
	//↑这是一个普通函数的声明,还需要加一个空模板的参数列表
	  //如果全局函数是类外实现，需要让编译器提前知道这个函数的存在
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





//1、全局函数在类内实现
void test01()
{
	Person<string, int> p("Tom", 18);

	printPerson(p);
}

//2、全局函数在类外实现
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