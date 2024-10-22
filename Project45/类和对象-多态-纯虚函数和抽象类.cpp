//类和对象-多态-纯虚函数和抽象类
#include <iostream>
using namespace std;

//纯虚函数 和 抽象类

class Base//抽象类
{
public:
	virtual void func() = 0;//纯虚函数   在虚函数后面多写个0

	//只要有一个纯虚函数，这个类就称为抽象类
	 
	
	//抽象类特点：
	  //1.无法实例化对象         你用Base也不行     
	  //2.抽象类的子类 必须要重写父类中的纯虚函数，否则也属于抽象类
};

class Son :public Base
{
public:
	 void func()
	{
		 cout << "func的函数调用" << endl;//重写纯虚函数

	
	}
	

};


void test01()
{
	Base* base = new Son;
	base->func();
	//这里new出的是什么对象，调用的就是什么对象的func函数

	Son s;	Son s;//在Son类中重写了纯虚函数func，这里才能成功实例化，不然Son类也是抽象类

}
int main()
{
	test01();


	system("pause");
	return 0;
}