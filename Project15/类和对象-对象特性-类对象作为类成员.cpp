#include <iostream>
using namespace std;
#include <string>

//类对象作为类成员 (类似结构体等的套娃)

//手机 类
class Phone
{public:
	//类的行为：函数-给手机品牌名做赋值操作
	Phone(string pName)
	{
		m_PName = pName;

		cout << "Phone的构造函数调用" << endl;
		//用这个检测是先走class Phone还是class Person
		  //发现：当其他类的对象作为本类的成员时，会先构造其他类的对象
	}


	
	//手机品牌名
	string m_PName;

	~Phone()
	{
		cout << "Phone的析构函数调用" << endl;
		//发现：当其他类的对象作为本类的成员时，会先释放本类再释放他类。
		//与构造函数的顺序相反

	}


};


//人 类
class Person
{

public:
	//姓名
	string m_Name;

	//手机
	Phone m_Phone;//这里写一个手机类，上面定义手机类；这里的手机类作为人类的成员。


	//行为-有参构造函数
	Person(string name, string pName):m_Name(name),m_Phone(pName)
	{//“Phone m_Phone;”没有问题，是因为相当于上一行写了个Phone m_Phone = pName;   这是创建对象的隐式转换法

		cout << "Person的构造函数调用" << endl;
		//↑//用这个检测是先走class Phone还是class Person
	      //发现：当其他类的对象作为本类的成员时，会先构造其他类的对象
	}
	//行为-析构函数
	~Person()
	{
		cout << "Person的析构函数调用" << endl;
		//发现：当其他类的对象作为本类的成员时，会先释放本类再释放他类。
		//与构造函数的顺序相反

	}

};


void test01()
{
	Person p("张三", "华为");
	cout << p.m_Name << "拿着：" << p.m_Phone.m_PName << "圣剑" << endl;
}



 
int main()
{
	test01();




	system("pause");
	return 0;
}