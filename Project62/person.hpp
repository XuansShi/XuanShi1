#pragma once
#include <iostream>
using namespace std;
#include <string>

//第二种解决方式：将.h和.cpp文件的代码写一起(声明和实现写一起)，然后改头文件文件类型为.hpp
template <class T1, class T2>
class Person
{

public:
	Person(T1 name, T2 age);
	 
	void showPerson();
	T1 m_Name;
	T2 m_Age;



};



//构造函数类外实现
template <class T1, class T2>
Person<T1, T2> ::Person(T1 name, T2 age)
{
	this->m_Name = name;
	this->m_Age = age;



}

template<class T1, class T2>
void Person<T1, T2>::showPerson()
{
	cout << "姓名" << this->m_Name << "年龄" << this->m_Age << endl;

}
