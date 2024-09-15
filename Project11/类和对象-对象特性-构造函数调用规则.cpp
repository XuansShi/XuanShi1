#include <iostream>
using namespace std;
//构造函数调用规则
// 1、只要创建一个类，编译器会自动给每个类添加至少3个函数：默认构造(空实现)、析构函数(空实现)、拷贝构造(值拷贝)

//2、 如果用户定义有参构造函数，c++不再提供默认无参构造，但是会提供默认拷贝构造

//3、如果用户定义拷贝构造函数，c++不会再提供其他构造函数




class Person
{
public:
	Person()
	{
		cout << "Person的默认构造函数调用" << endl;
	}

	Person(int age)
	{
		cout << "Person的默认有参构造函数调用" << endl;
		m_Age = age;

	}
	//定义拷贝构造函数
	Person(const Person& p)
	{
		m_Age = p.m_Age;

		cout << "Person的拷贝构造函数调用" << endl;

	}//就算你把这里全注释了，由于“ 如果用户定义有参构造函数，c++不在提供默认无参构造，但是会提供默认拷贝构造”，所以p2的年龄也任然会是18



	~Person()
	{

		cout << "Person的析构函数调用" << endl;

	}
	int m_Age;

};

void test01()
{
	Person p;//实例化

	p.m_Age = 18;

	//调用拷贝构造函数
	Person p2(p);

	cout << "p2的年龄为：" << p2.m_Age << endl;


}



void test02()
{//调用默认构造函数
	Person p;
	//如果你把默认构造函数给去掉了，那么会报错，因为“如果用户定义有参构造函数，c++不再提供默认无参构造”
	//以此类推，你可以依据上面写的三条语法进行检验



}

int main()
{
	test01();

	test02();



	system("pause");
	return 0;
}