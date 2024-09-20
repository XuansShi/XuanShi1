//#include <iostream>
//using namespace std;
//
////静态成员变量
//
//class Person
//{
//public:
//	//1.所有对象都共享同一份数据
//	//2.编译阶段就分配内存
//	//3.类内声明，类外初始化
//	static int m_A;
//
//private:
//	static int m_B;
//
//};
//int Person::m_A = 0;
//int m_B;
//
//void test01()
//{
//	Person p;
//	cout << p.m_A << endl; //这里得到0
//	Person p2;
//
//	p2.m_A = 1;
//	cout << p.m_A << endl;//这里得到1
//
//}
//
//void test02()
//{
//	//静态成员变量 不属于某个对象上，所有对象都共享同一份数据
//	//因此静态成员变量有两种访问方式：
//	  //1、通过对象进行访问
//	Person p;
//	cout << p.m_A << endl;
//
//	//2、通过类名进行访问
//	cout << Person::m_A << endl;
//
//	/*cout << Person::m_B << endl;*/  //←这一行是有问题的，因为m_B在私有作用域
//}
//
//
//
//
//
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}









#include <iostream>
using namespace std;
//静态成员函数
//所有对象共享同一个函数
//静态成员函数只能访问静态成员变量



class Person
{public:
	//静态成员函数
	static void func()
	{
		m_A = 100;//静态成员函数 可以访问静态成员变量
		//m_B=200;静态成员函数 不能访问非静态成员变量，无法区分到底是哪个对象的m_B属性
		cout << "static void func调用" << endl;

}
	static int m_A;//静态成员变量
	int m_B;//非静态成员变量

private:
	static void func2()
	{
		cout << "static void func2的调用" << endl;


	}



};

int Person::m_A = 0;//记得类内声明，类外初始化

//访问静态成员函数的方法x2：
void test01()
{
	//1、通过对象访问
	Person p;
	p.func();
	//2、通过类名访问
	Person::func();
//	Person::func2();←这玩意在私有作用域下，所以用不了
}


int main()
{



	system("pause");
	return 0;
}