#include <iostream>
using namespace std;
#include <string>

//深拷贝与浅拷贝
class Person
{
public :
	Person()
	{
		cout << "Person的默认构造函数" << endl;


	}
	int m_Age;//年龄
	int* m_Height;//身高



	Person(int age,int height )

	{
		cout << "Person的有参构造函数" << endl;
		m_Age = age;  
		m_Height=new int(height);//利用new在堆区开辟空间，因为new得到的是地址，必须用指针才能接收

	}

	~Person()
	{	//析构代码，将堆区开辟的数据做释放操作
		if (m_Height != NULL)
		{
			delete m_Height;
			m_Height = NULL;


		}


		cout << "Person的析构函数调用" << endl;

	
	}

	//自己实现拷贝构造函数，解决浅拷贝的问题
	Person(const Person& p)
	{
		cout << "拷贝构造函数的调用：" << endl;
		m_Age = p.m_Age;
		/*m_Height = p.m_Height;*/ //编译器默认使用这行代码



		m_Height = new int(*p.m_Height);
	}


};



void test01()
{

	Person p1(18,180);

	cout << "p1的年龄为：" << p1.m_Age << "身高为："<<*p1.m_Height<<endl;
	//因为m_Height是用指针定义的，所以应该使用解引用
	Person p2(p1);
	cout << "p2的年龄为：" << p2.m_Age << "身高为：" << *p2.m_Height << endl;
	//栈上的数据会“先进后出，所以这里是p2先被释放
	//这因为拷贝带来的问题：堆区的数据会重复释放，这样出现非法操作
	//这是浅拷贝的问题，需要用深拷贝解决

}



int main()
{
	test01();//堆区的数据在该函数执行完后销毁。也可以说是析构函数结束后


	system("pause");
	return 0;
}