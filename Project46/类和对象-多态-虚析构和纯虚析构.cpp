//类和对象-多态-虚析构和纯虚析构

#include <iostream>
#include <string>

using namespace std;

//虚析构和纯虚析构

class Animal
{
public:
	Animal()
	{
		cout << "Animal构造函数调用" << endl;
	}


	//纯虚函数
	virtual void speak() = 0;

	//virtual ~Animal()//使用虚析构可以解决 父类指针释放子类对象不干净的问题
	//{
	//	cout << "Animal析构函数调用" << endl;
	//}

	//纯虚析构:
	  //        和虚析构只能有一个
	  //必须要有 声明 和 实现
	  //有了纯虚析构后，这个类也属于抽象类，无法实例化对象
	virtual ~Animal() = 0;

//错误类型：无法解析的外部命令
	//在链接阶段出错
	//这里说明了纯虚函数和虚函数必须有一个函数的具体实现
	 
};
//在本节，虚析构和纯虚析构无非都是为了解决子类析构函数无法调用上，导致堆区数据溢出的问题
Animal ::~Animal()//Animal作用域下的析构
{
	cout << "Animal的纯虚析构函数调用" << endl;


}

class Cat :public Animal
{
public:
	Cat(string name)
	{ 
		cout << "Cat构造函数调用" << endl;

		m_Name = new string(name);//把数据创建在堆区，并且用指针维护该数据
	}


	virtual void speak()
	{
		cout << *m_Name <<"迷迭香在说话" << endl;

	}

	~Cat()
	{
		if (m_Name != NULL)
		{
			cout << "Cat析构函数调用" << endl;
			delete m_Name;
			m_Name = NULL;
		}

	}

	string *m_Name; 


};

void test01()
{
	Animal* animal = new Cat("香香");
	animal->speak();
	//父类指针在析构的时候，不会调用子类析构函数，如果子类有堆区属性，将导致出现内存泄露
	  //只需要把父类的虚构改成虚析构就能解决该问题
	delete animal;
}




int main()
{
	test01();



	system("pause");
	return 0;
}