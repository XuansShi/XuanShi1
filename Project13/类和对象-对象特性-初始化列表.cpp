#include <iostream>
using namespace std;
//初始化列表
class Person
{
public:
	////传统初始化操作
	//Person(int a, int b, int c)
	//{
	//	m_A = a;

	//	m_B = b; 

	//	m_C = c;


	//}

	//使用初始化列表初始化属性
	//法一、
	/*Person() :m_A(10), m_B(20), m_C(30)
	{}*/
	//法二、构造函数()：属性1(值1),属性2（值2）... {}
	// 更灵活的方法，可以自己在实例化的时候输入参数了
	//见下面的“Person p(10,20,30);”
	Person(int a , int b ,int c) :m_A(a), m_B(b), m_C(c)//注意这个冒号在构造函数的形参列表的反括号后面
	{}

	 
	int m_A;
	int m_B;
	int m_C;



};

void test01()
{
	//Person p(10, 20, 30);
	Person p(10,20,30);
	cout << "m_A = " << p.m_A << endl;
	cout << "m_B = " << p.m_B << endl;
	cout << "m_C = " << p.m_C << endl;
}

int main()
{
	test01();



	system("pause");
	return 0;

}