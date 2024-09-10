#include <iostream>
using namespace std;
#include <string>
//1构造函数的分类及调用
//分类
  //按参数分： 无参构造(默认构造,也就是你不提供的时候编译器自动给你整一个无参的) 和 有参构造
  //按类型分： 普通构造 拷贝构造

class Person
{
public:
	//构造函数
	Person()
	{
		cout << "Person的无参构造函数调用" << endl;

	}

	Person(int a )
	{
		age = a;
		cout << "Person的有参构造函数调用" << endl;

	}
	 
	//拷贝构造函数
	Person(const Person &p)//拷贝函数的写法： const 与自身相同的数据类型 地址
	{

		//将传入的人身上所有属性拷贝到我身上
		age = p.age;
		cout << "Person的拷贝构造函数调用" << endl;

	}


	 

	//析构函数
	~Person()
	{
		cout << "Person的析构函数调用" << endl;


	}

	int age;




};


//调用
void test01()
{
 //1.括号法    这个最简单
	//Person p1;//默认构造函数的调用
	//Person p2(10);//有参构造函数的调用
	//Person p3(p2);

	//cout << "p2的年龄为："<<p2.age << endl;
	//cout << "p3的年龄为：" << p3.age << endl;
	
    // 注意事项：
	// 调用默认构造函数的时候不要加()
	// 因为编译器会认为它是函数的声明 eg： Person p1();
	
 //2.显示法
	//Person p1;
	//Person p2 = Person(10);//有参构造
	//Person p3 = Person(p2);//拷贝构造

	// Person(10)是匿名对象，在当前执行结束后，系统会立即回收匿名对象
	//cout << "AAAA" << endl;
	
	//注意事项2:
	//不要利用拷贝构造函数初始化匿名对象
	//eg Person(p3);    编译器会认为它是 Person p3 也就是实例化对象，会发生重定义


	//3.隐式转换法
	Person p4 = 10; //相当于写了 Person p4 = Person(10);
	Person p5 = p4;//拷贝构造

}







int main()
{



	system("pause");
	return 0; 
}