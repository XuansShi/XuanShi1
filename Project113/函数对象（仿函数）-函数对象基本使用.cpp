//函数对象（仿函数）-函数对象基本使用
#include<iostream>
#include<string>
using namespace std;

//特点：
//1 函数对象在使用时，可以像普通函数那样调用, 可以有参数，可以有返回值

//2 函数对象超出普通函数的概念，函数对象可以有自己的状态

//3 函数对象可以作为参数传递



//1 函数对象在使用时，可以像普通函数那样调用, 可以有参数，可以有返回值
class MyAdd//使用仿函数重载小括号，实现加法
{
public:
	int operator()(int  v1 ,int v2)//创建成员函数，并且重载小括号
	{
		return v1 + v2;


	}



};

void test01()
{
	MyAdd myAdd;
	cout << myAdd(10, 20) << endl;



}

//2 函数对象超出普通函数的概念，函数对象可以有自己的状态
class MyPrint//使用仿函数重载小括号，实现打印功能，同时对仿函数的使用次数进行计数
{
public:
	//函数对象可以有自己的状态1：
	  //此处以调用次数为例
	int count = 0;

	MyPrint()//注意构造函数只有在实例化的时候才会生效
	{
		this->count = 0;
	}

	void operator()(string s)
	{
		cout << s << endl;
		this->count++;
	}
	
	//和普通函数不一样，这是仿函数的优点，普通函数不定义全局变量或者静态变量会被释放的输出不了，而仿函数可以
};

void test02()
{
	MyPrint myprint;//注意构造函数只有在创建对象的时候才会生效，所以下面的几行不会让count清零
	myprint("HELLO_WORLD");
	myprint("HELLO_WORLD");
	myprint("HELLO_WORLD");
	myprint("HELLO_WORLD");
	cout << "函数对象（仿函数）MyPrint的状态-调用次数：" << myprint.count << endl;


}

//3 函数对象可以作为参数传递
void doPrint(MyPrint &mp,string test)
{
	mp(test);//直接将函数对象MyPrint传入普通函数doPrint，然后调用函数对象

}

void test03()
{
	MyPrint myprint;
	doPrint(myprint, "HELLO_C++");
}

int main()
{
	test01();
	test02();
	test03();
	

	system("pause");
	return 0;
}