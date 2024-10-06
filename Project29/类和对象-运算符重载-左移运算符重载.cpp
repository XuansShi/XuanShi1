#include <iostream>
using namespace std;

//类和对象-运算符重载-左移运算符重载

class Person
{
friend ostream  &operator<<(ostream& cout, Person& p);

public:
	Person(int a, int b)
	{
		m_A = a;

		m_B = b;


	}

private://一般把成员变量设为私有
	   //然后还需要用友元使得下面的operate<<函数不能报错
	   
	   
	//利用成员函数重载 左移运算符
	  //习：如果你不知道函数应该返回什么，那你先写一个void然后再改
	 //一般不会用成员函数重载<<运算符，因为无法实现cout在左侧（也就是类似于“cout<<p;”这样的）
	 //所以只能用全局函数重载左移运算符
	 
	//void operator<<(Person cout)
	//{ 
	//}


	int m_A;
	int m_B;




};

//一般不会用成员函数重载<<运算符，因为无法实现cout在左侧（也就是类似于“cout<<p;”这样的）
//所以只能用全局函数重载左移运算符:

ostream &operator<<(ostream& cout, Person& p)//因为p在右边，所以右边写一个p//本质是operator<<(cout,p)   简化为cout<<p;
//cout的数据类型是ostream输出流对象，因为在全局这个对象只能有一个，所以要用引用的方式传进来
{
	cout << "m_A = " << p.m_A << " " << "m_B" << p.m_B << endl;
	return cout;
}
//这几个引用根本看不懂↑

void test01()
{
Person p(10, 10);//调用Person的构造函数 给m_A和m_B赋予初值
	
	cout <<p;
//易错：根据链式编程思想，你需要返回一个非void的返回值而且链式的中返回值类型必须保持一致
}




int main()
{
	test01();
	


	system("pause");
	return 0;
}