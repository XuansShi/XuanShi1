//模板-类模板中成员函数创建时机
//类模板中的成员函数在调用时才创建
#include <iostream>
using namespace std;

class Person1
{
public:
	void showPerson1()
	{
		cout << "Person1 show" << endl;
	}



};


class Person2
{
public:
	void showPerson2()
	{
		cout << "Person2 show" << endl;
	}



};

template<class T>
class MyClass
{
public:
	T obj;

	//类模板中的成员函数
	void func1()
	{
		obj.showPerson1();

	}

	void func2()
	{
		obj.showPerson2();

	}
	//这里是func1和func2都只有在调用的时候才会被创建，因为一开始无法确定数据类型


};

void test01()
{
	MyClass<Person1>m;//习：类模板语法-实现具体的类：  类模板名<实际的数据类型> 对象名;
	m.func1();
	//m.func2();    //尖括号里为Person1，那么只能调用Person1类的showPerson1函数。如果同时写fun1和fun1则会编译出错



}


int main()
{





	system("pause");
	return 0;
}