//类和对象-继承-多继承语法
#include<iostream>
using namespace std;

class Base1
{
public:
	int m_A;

	Base1()
	{
		m_A = 100;

	}

};

class Base2
{
public:
	int m_B;

	Base2()
	{
		m_B = 200;

	}

};

//子类继承Base1和Base2
  //语法: class 子类名 :继承方式 父类1,继承方式 父类2 ，...，继承方式 父类n{}
class Son :public Base1, public Base2
{
public:
	int m_C;
	int m_D;


};

void test01()
{
	Son s;
	cout << "sizeof(Son) = " << sizeof(Son) << endl;//这里你放Son或者Son的对象都可以


	cout << "m_A = " << s.m_A << endl;//这里没有报错，但是如果你在Base1和Base2里面有一个重名的成员，那就会出错，此时需要你加上作用域
}                                      //错误类型：二义性
//四个对象，所以结果是16

int main()
{

	
	system("pause");
    return 0;
}