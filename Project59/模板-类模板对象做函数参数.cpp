//模板-类模板对象做函数参数
#include <iostream>
#include <string>
using namespace std;

//类模板对象做函数参数
template<class T1,class T2>
class Person
{
public:
	T1 m_Name;
	T2 m_Age;


	Person(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	};

	void showPerson()
	{
		cout << "姓名："<< this->m_Name <<"年龄："<< this->m_Age << endl;

	}


};

//1、指定传入类型(类模板的对象做函数的传参)//这个是最常用的，最简单的
void printPerson1(Person<string, int> &p)//习：传入地址可以直接拿到本体，而不是拷贝
{
	p.showPerson();


}

void test01()
{
	Person<string, int> p("孙悟空", 100);
    printPerson1(p);

}

//2、参数模板化
template <class T1,class T2>
void printPerson2(Person<T1, T2>& p)//在这里把参数类型也改为模板
{
	p.showPerson();
	cout << "T1的类型及其名称为:" << typeid(T1).name() << endl;
	cout << "T2的类型及其名称为:" << typeid(T2).name() << endl;
}

void test02()
{
	Person<string, int> p("猪八戒", 90);
	printPerson2(p);

}



//3、整个类模板化
template<class T>
void printperson3(T &p)//直接把对象的地址传入
{
	p.showPerson();
	cout << "数据类型为：" << typeid(T).name() << endl;
}

void test03()
{
	Person<string, int>p("唐僧", 80);
	printperson3(p);//这里不要写地址

}


int main()
{
	test01();
	test02();
	test03();

	system("pause");
	return 0;
}