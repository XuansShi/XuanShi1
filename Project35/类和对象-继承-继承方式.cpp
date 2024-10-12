//类和对象-继承-继承方式

#include <iostream>
using namespace std;


//公共继承
class Base1
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C; 


};


class Son1 :public Base1
{
public:
	void func()
	{
		m_A = 10;//没报错，说明：父类中的公共权限成员 到子类中依然是公共权限
		m_B = 10;//没报错，说明：父类中的保护权限成员 到子类中依然是保护权限
		//m_C = 10;//报错，说明：父类中的私有权限成员 到子类中依然是私有权限
	}

};
void test01()
{
	Son1 s1;
	s1.m_A = 100;
	//s1.m_B = 100; 报错，到Son1中 m_B是保护权限，类外访问不到
	  //保护权限和私有权限的区别在于保护权限可以在子类进行操作或访问
}

//保护继承
class Base2
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;

};

class Son2 :protected Base2
{
public:
	void func()
	{
		m_A = 10;//没报错，说明：父类中的公共权限成员 到子类中变为保护权限
		m_B = 10;//没报错，说明：父类中的保护权限成员 到子类中依然是保护权限
		//m_C = 10;//报错，说明：父类中的私有权限成员 到子类中依然是私有权限
	}

};

void test02()
{
	Son2 s1;
	// s1.m_A = 1000;报错
	// s1.m_B =10000 ;报错，到Son2中 m_A 和 m_B是保护权限，类外访问不到
	  //保护权限和私有权限的区别在于保护权限可以在子类进行操作或访问



}

//私有继承
class Base3
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;

};


class Son3 : private Base3
{
public:
	void func()
	{
		m_A = 100;//父类中公共的成员
		m_B = 100;
		//m_C = 100; 报错，父类私有的成员，子类访问不到，子类变为

	}


};

class FRandSon :public Son3
{



};

int main()
{



	system("pause");
	return 0;
}