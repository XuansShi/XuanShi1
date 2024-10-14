//类和对象-继承-继承中构造和析构顺序
#include <iostream>
using namespace std;

class Base//父类
{
public:
	Base()
	{
		cout << "这里是Base的构造函数" << endl;

	}

	~Base()
	{
		cout << "Base的析构函数" << endl;


	}



};

class Son :public Base//子类-公共继承
{
public:
	Son()
	{
		cout << "这里是Son的构造函数" << endl;

	}

	~Son()
	{
		cout << "Son的析构函数" << endl;


	}



};

void test01()
{
	//Base b;//Base类实例化
	Son s;//子类实例化
}

int main()
{

	test01();

	system("pause");
	return 0;

}