////模板—类模板分文件编写
#include <iostream>
//#include "person.h"
//类模板中成员函数创建时机是在调用阶段，导致分文件编写时链接不到 的问题
  //分析错误原因：
//习：类模板中成员函数创建时机  * 类模板中的成员函数在调用时才创建

//解决方法：
  //第一种解决方式：#include "person.cpp"
    //#include "person.cpp"
  //第二种解决方式：将.h和.cpp文件的代码写一起(声明和实现写一起)，然后改头文件文件类型为.hpp
    #include "person.hpp"
    //主流↑



using namespace std; 

//template <class T1,class T2>
//class Person
//{
//
//public:
//	Person(T1 name, T2 age);
//
//	void showPerson();
//	T1 m_Name;
//	T2 m_Age;
//
//
//
//};

////构造函数类外实现
//template <class T1, class T2>
//Person<T1, T2> ::Person(T1 name, T2 age)
//{
//	this->m_Name = name;
//	this->m_Age = age;
//
//
//
//}
//
//template<class T1,class T2>
//void Person<T1, T2>::showPerson()
//{
//	cout << "姓名" << this->m_Name << "年龄" << this->m_Age << endl;
//
//}


void test01()
{
	Person<string, int> p("爱莉希雅", 18);
	p.showPerson();

}

int main()
{
	test01();



	system("pause");
	return 0;
}