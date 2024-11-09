#include <iostream>
using namespace std;


//交换两个数据的函数

  //函数模板
template<typename T>//声明一个模板，告诉编译器后面代码中紧跟的T不要报错，T是一个通用的数据类型
void mySwap(T& a, T& b)//传参使用数据类型T，并且使用地址
{
	T temp = a;
	a = b;
	b = temp;
	//这样就利用模板实现了多种数据类型的交换函数（不然你每一种数据类型都要写一个）

}



template<typename Y>
void mmy(Y& a, Y& b, Y& c)
{




}



void test01()
{
	int a = 10;
	int b = 20;
	//利用函数模板交换
	  //有两种方式使用函数模板
	    //1、自动类型推导
	mySwap(a, b);//编译器能自动推导出T是整形int
	cout << "a  = "<<a << endl;
	cout << "b  = " << b << endl;
	   //2、显示指定类型
	mySwap<int>(a, b);//直接告诉编译器T的数据类型
	cout << "a  = " << a << endl;
	cout << "b  = " << b << endl;




}


int main()
{
	//



	system("pause");
	return 0;
}