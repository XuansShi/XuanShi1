//05模板-普通函数与函数模板区别
#include <iostream>
using namespace std;

//1、普通函数调用时可发生隐式类型转换
//2、函数模板 用 自动类型推导，不可发生隐式类型转换
//3、         用 显示指定类型，可发生隐式类型转换      


//普通函数
int myAdd0(int a,int b)
{



	return a+b;
}

//函数模板
template<class T>
T myAdd02(T a, T b)
{


	return a + b;
}


void test01()
{

	int a = 10;
	int b = 20;
	char c = 'c';
	//普通函数可发生隐式类型转换
	cout << myAdd0(a, c) << endl;

	//自动类型推导
	cout << myAdd02(a, b) << endl;//a b同类型没问题
	//cout << myAdd02(a, c) << endl;//a c不同类型，报错,即 自动类型推导 不可发生隐式类型转换

	//显示指定类型
	cout << myAdd02<int>(a, c) << endl;//未报错,即 显示指定类型 可发生隐式类型转换 



}


int main()
{

	test01();


	system("pause");
	return 0;
}