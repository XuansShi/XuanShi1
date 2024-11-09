#include <iostream>
using namespace std;


//交换两个数据的函数

  //函数模板
 template<class T>//声明一个模板，告诉编译器后面代码中紧跟的T不要报错，T是一个通用的数据类型
 //typename可以替换为class
 void mySwap(T& a, T& b)//传参使用数据类型T，并且使用地址
 {
	 T temp = a;
	 a = b;
	 b = temp;
	 //这样就利用模板实现了多种数据类型的交换函数（不然你每一种数据类型都要写一个）
 }



//1、自动类型推导-必须推导出一致的数据类型T才可使用
 void test01()
 {
	 int a = 10;
	 int b = 20;
	 char c = 30;
	 mySwap(a, b);//这个没问题
	 cout << "a  = " << a << endl;
	 cout << "b  = " << b << endl;

	 //mySwap(a,c);  错误
 }



 //2、显示指定类型-模板必须要确定出T的数据类型才可使用
 template<class T>
 void func()
 {
	 cout << "func调用" << endl;


 }



void test02()
{
	//func();这样你不提供数据类型是推导不出来的，所以你只能指定类型
	func<int>();






}


int main()
{
	//函数调用
	test01();
	test02();



	system("pause");
	return 0;
}