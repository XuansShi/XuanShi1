//内建函数对象-算术仿函数
#include<iostream>
#include<string>
#include<algorithm>
#include<functional>//内建函数对象头文件

using namespace std;
//这里只演示两个


//仿函数原型：
//1.	template<class T> T plus < T>          //加法仿函数
//2.	template<class T> T minus < T>         //减法仿函数
//3.	template<class T> T multiplies < T>    //乘法仿函数
//4.	template<class T> T divides < T>       //除法仿函数
//5.	template<class T> T modulus < T>       //取模仿函数
//6.	template<class T> T negate<T>          //取反仿函数

void test01()
{
	//6.	template<class T> T negate<T>          //取反仿函数
	negate<int>n;
	cout << n(50) << endl;;



}


void test02()
{
	//1.	template<class T> T plus < T>          //加法仿函数
	plus<int> p;
	cout << p(10,20) << endl;//得到10+20=30

}
//用法和你自己定义的函数对象用法是一样的，都是创建类后，实例化得到对象，再用对象来调用重载的小括号

int main()
{
	test01();
	test02();


	system("pause");
	return 0;
}