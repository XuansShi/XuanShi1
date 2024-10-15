//类和对象-继承-同名成员处理
#include <iostream>
using namespace std;

class Base
{
public:
	Base()
	{
   m_A = 100;
	}
	int m_A;

//父类的成员函数
	void func()
	{
		cout << "Base-func()调用" << endl;
	}
	void func(int a)
	{
		cout << "Base-func(int a)的调用" << endl;
	}

};

class Son :public Base
{
public:
	int m_A;
	Son()
	{
		m_A = 200;
	}

	void func()
	{
		cout << "Son-func()调用" << endl;
	}


};

//同名成员属性处理
void test01()
{
	Son s;
	cout << "m_A = " << s.m_A << endl;

//这里到底用的是谁的m_A呢？
	//这里是子类的
//你只需要加一个作用域就可以调用父类的了：
	//如果需要用子类对象访问到父类同名成员，需要加作用域：
	cout << "另一个 m_A = " << s.Base::m_A << endl;
}


//同名成员函数处理
void test02()
{
	Son s;
	s.func();//直接调用，调用的是子类中的同名函数

 //如何调用父类中的同名函数？
	s.Base::func();//加个作用域就能了
  //如果你还想调用函数重载：
	//因为子类中出现了和父类同名的成员函数，那么子类的同名成员会隐藏掉父类中所有同名成员函数
	  //所以如果你直接在这里写 
	      // s.func(100);
	  //那就会报错
	  //因此你还得加上作用域
	s.Base::func(100);


}

int main()
{
	test01();
	test02();

	system("pause");
	return 0;
}