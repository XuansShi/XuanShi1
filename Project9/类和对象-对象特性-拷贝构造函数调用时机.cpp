#include <iostream>
using namespace std;
#include <string>
//拷贝函数调用时机
//1、使用一个已经创建完毕的对象来初始化一个新对象

//2、值传递的方式给函数参数传值


//3、值方式返回局部对象

class Person
{
public:
Person()
{
	cout << "Person默认构造函数调用" << endl;



}


Person(int age)
{
	cout << "Person有参构造" << endl;
	m_Age = age;

}

Person(const Person &p)//拷贝构造函数
{

	cout << "Person默认构造函数调用" << endl;
	m_Age = p.m_Age;



}




~Person()
{
	cout << "Person析构函数调用" << endl;


}
int m_Age; 




};

//1、使用一个已经创建完毕的对象来初始化一个新对象
void test01()
{
	Person p1(20);//使用有参构造函数
	Person p2(p1);//使用拷贝构造函数
	cout << "p2的年龄为：" << p2.m_Age << endl;


}
//2、值传递的方式给函数参数传值
void doWork(Person p)
{



}


void test02()
{
	Person p;
	doWork(p);//相当于调用拷贝构造函数

}


//3、值方式返回局部对象

Person  doWork2()
{
	Person p1;
	return p1;


}

void test03()
{
	Person p = doWork2();


}




int main()
{
	test01();






	system("pause");
	return 0;
}