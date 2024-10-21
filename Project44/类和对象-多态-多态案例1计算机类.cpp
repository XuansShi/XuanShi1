//类和对象-多态-多态案例1:计算机类
#include <iostream>
#include <string>
using namespace std;

//分别利用普通写法和多态技术，设计实现两个操作数进行运算的计算器类

//普通写法

class Calculator
{
public :


int m_Num1;//操作数1
int m_Num2;//操作数2

	
	int getResult(string oper)
	{
		if (oper == "+")
		{
			return m_Num1 + m_Num2;
		}
		else if (oper == "-")
		{
			return m_Num1 - m_Num2;

		}
		else if (oper == "*")
		{
			return m_Num1 * m_Num2;

		}
		//如果想扩展新的功能，需修改源码
		  //在真是开发中 提倡 开闭原则
		  //开闭原则: 对扩展进行开放，对修改进行关闭
		//如果出错了，像上面这样的需要查看所有的代码，然后再解决

	}


};

void test01()
{
	//创建计算器对象
	Calculator c;
	c.m_Num1 = 10;
	c.m_Num2 = 20;

	cout << c.m_Num1 << "+" << c.m_Num2 << "=" << c.getResult("+") << endl;
	cout << c.m_Num1 << "-" << c.m_Num2 << "=" << c.getResult("-") << endl;
	cout << c.m_Num1 << "*" << c.m_Num2 << "=" << c.getResult("*") << endl;
}

//利用多态实现计算器

  //实现计算器抽象类
class AbstractCalculator
{
public:
	int m_Num1;
	int m_Num2;

	virtual int getResult()
	{
		//这里就写一个抽象的类，然后成员函数体不写东西
		//扩展新功能的时候继承这个类，然后再写一个同名成员函数
		return 0;
	}
};


  //加法计算器类
class AddCalculator :public AbstractCalculator
{
public:
	virtual int getResult()
	{

		return m_Num1 + m_Num2;
	};
};
 
 //减法计算器类
		class SubCalculator :public AbstractCalculator
		{
		public:
			virtual int getResult()
			{

				return m_Num1 - m_Num2;
			};
		};

//乘法计算器类
		class MulCalculator :public AbstractCalculator
		{
		public:
			virtual int getResult()
			{
				return m_Num1 * m_Num2;
			}
		};

void test02()
{
//多态使用条件:
	//父类指针或者引用指向子类对象
	
	//加法运算
	AbstractCalculator* abc = new AddCalculator;//用new创建一个AddCalculator类的对象
	abc->m_Num1 = 10;
	abc->m_Num2 = 20;

	cout << abc->m_Num1 << "+" << abc->m_Num2 << "=" << abc->getResult() << endl;
	//用完后记得销毁堆区数据
	delete abc;

	//减法运算
	abc = new SubCalculator;
	abc->m_Num1 = 10;
	abc->m_Num2 = 20;

	cout << abc->m_Num1 << "-" << abc->m_Num2 << "=" << abc->getResult() << endl;
	//用完后记得销毁堆区数据
	delete abc;

	//乘法运算
	abc = new MulCalculator;
	abc->m_Num1 = 10;
	abc->m_Num2 = 20;

	cout << abc->m_Num1 << "*" << abc->m_Num2 << "=" << abc->getResult() << endl;
	//用完后记得销毁堆区数据
	delete abc;



}

//利用多态实现计算器的优势：
  //1、组织结构清晰
  //2、可读性强
  //3、前期和后期扩展和维护性高


		int main()
		{
			//test01();
			test02();

			system("pause");
			return 0;
		}