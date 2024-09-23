#include <iostream>
using namespace std;


//类和对象-对象特性-成员变量 和 成员函数分开存储

//成员变量 和 成员函数 是分开存储的
class Person1
{



};

class Person2
{
	int m_A;//非静态成员变量
	
};


class Person3
{
	int m_A;//非静态成员变量


	static int m_B;//静态成员变量

};
int Person3::m_B = 0;//记得类内声明，类外初始化

class Person4
{
	int m_A;//非静态成员变量


	static int m_B;//静态成员变量


	void func() {};//非静态成员函数
};
int Person4::m_B = 0;//记得类内声明，类外初始化


class Person5
{
	int m_A;//非静态成员变量

	static int m_B;//静态成员变量


	void func() {};//非静态成员函数

	static void func2() {};//静态成员函数

};
int Person5::m_B = 0;//记得类内声明，类外初始化





void test01()
{
	Person1 p1;
	//空对象占用内存空间
	cout << "sizeof(p1)= " << sizeof(p1) << endl;



}

void test02()
{
	Person2 p2;
	//求非静态成员对象占用内存空间
	cout << "sizeof(p2)= " << sizeof(p2) << endl;



}

void test03()
{
	Person3 p3;
	//求非静态成员对象 + 静态成员对象 占用内存空间
	cout << "sizeof(p3)= " << sizeof(p3) << endl;



}


void test04()
{
	Person4 p4;
	//求非静态成员对象 + 静态成员对象 +非静态成员函数 占用内存空间
	cout << "sizeof(p4)= " << sizeof(p4) << endl;



}


void test05()
{
	Person5 p5;
	//求非静态成员对象 + 静态成员对象 +非静态成员函数 +静态成员函数 占用内存空间
	cout << "sizeof(p5)= " << sizeof(p5) << endl;



}



int main()
{
	//1调用 求 空对象占用内存空间 的函数test01()
	test01();
	//结果为1 
	//因为C++编译器会给每个空对象分配一个字节的内存空间，是为了区分空对象所占内存的位置
	//每个空对象也应该有一个独一无二的内存空间



	//2调用 求 非静态成员对象占用内存空间 的函数test02()
	test02();
	//结果为4
	//因为不是空的，有整形int m_A，所以按整形的4个字节进行计算
	



	//3调用 求非静态成员对象 + 静态成员对象 占用内存空间 的函数
	test03();
	//结果任然为4，而不是4+4
	//这反映了“静态成员不属于类的对象上”




	//4调用 非静态成员对象 + 静态成员对象 +非静态成员函数 占用内存空间 的函数
	test04();
	//结果任然为4，，而不是4+4+?
	//这同样反映了“只有非静态成员变量才属于类的对象上”，以及“成员变量 和 成员函数 是分开存储的”


	//5调用 非静态成员对象 + 静态成员对象 +非静态成员函数 +静态成员函数 占用内存空间  的函数
	test05();
	//结果任然为4,而不是4+4+?
	//这同样反映了“只有非静态成员变量才属于类的对象上”，以及“成员变量 和 成员函数 是分开存储的”
	//习：静态成员变量所有对象共享同一份数据，静态成员函数所有对象共享同一个函数

	system("pause");
	return 0;

}