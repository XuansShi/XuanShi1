#include <iostream>
using namespace std;
#include <string>

//对象的初始化和清理
//1、构造函数 进行初始化操作
  

class Person
{


public:
//1.构造函数
  //无返回值 不用写void 
  //可以写参数 可以重载 
  //函数名与类名相同
  //创建对象时，自动调用且只调用一次

	Person()
	{
		cout << "Person函数的调用" << endl;
	
	
	}

//2.析构函数  进行清理的操作
	//无返回值 不用写void
	//析构函数不可写参数 不可重载
	//函数名是 ~+类名
	//程序在对象销毁前会自动调用析构，无须手动调用,而且只会调用一次
	~Person()
	{
		cout << "Person 的析构函数调用" << endl;


	}









};
//构造函数和析构函数 都是必须有的实现，如果我们自己不提供，编译器会提供一个空实现的构造和析构
void test01()
{
	Person p;//局部变量存放在栈上，test01执行完毕后，释放这个对象 就算你不写析构函数它也会创建一个

}



int main()
{
	test01();
	//如果你把上面这一行注释掉，换成： Person p;
	//这个对象不会被立即释放。因为走完  Person p;   后会因为 	 system("pause"); 而中断，只有你把下面两行代码执行完了它才会执行对象的释放以及析构代码
	//也就是说析构只有在对象被释放后才会执行

	system("pause");
	return 0;
	
}