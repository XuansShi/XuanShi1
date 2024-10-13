//类和对象-继承-继承中的对象模型

#include <iostream>
using namespace std;


class Base
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;



};


class Son :public Base
{
public:
	int m_D;

};

void test01()
{
	//
	cout << "sizeof Son =" <<sizeof(Son) <<endl;
	//这里的计算结果是 4x4=16
	  //说明：无论父类中的成员是什么权限，子类都可以继承父类所有的成员
	  //父类私有成员属性被编译器隐藏了，所以访问不到，但确实继承下来了
}


int main()
{


	system("pasue");
	return 0;
}
//总结：从父类继承下来的非静态成员属性，以及子类独有的 都属于子类的
//可以使用电脑上的VS Developer Command Prompt工具查看对象模型