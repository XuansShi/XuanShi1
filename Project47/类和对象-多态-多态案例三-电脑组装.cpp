//类和对象-多态-多态案例三-电脑组装
#include <iostream>
#include<string>
using namespace std;

//抽象不同零件类

//抽象CPU类
class CPU
{
public:
	//抽象的计算函数
	virtual void calculate() = 0;



};


//抽象显卡类
class VideoCard
{
public:
	//抽象的显示函数
	virtual void display() = 0;


};

//抽象内存条类
class Memory
{
public:
	//抽象的存储函数
	virtual void storage() = 0;

};

//电脑类
class Computer
{
public:
	Computer(CPU* cpu, VideoCard* vc, Memory* mem)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;

	}
//提供工作的函数
	void work()
	{
		//让零件工作起来，调用接口：
		m_cpu->calculate();

		m_vc->display();

		m_mem->storage();

	}

//提供析构函数 释放零件的堆区数据
	//释放CPU零件
	~Computer()
	{
		
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}

		if (m_vc != NULL)
		{
			delete m_vc;
			m_vc = NULL;
		}

		if (m_mem != NULL)
		{
			delete m_mem;
			m_mem = NULL;
		}


	}


	
private:
	CPU* m_cpu;//CPU 零件指针
	VideoCard* m_vc;//显卡 零件指针
	Memory* m_mem;//内存条 零件指针

};

//具体厂商
  //Intel厂商
class IntelCPU :public CPU
{
public:
	virtual void calculate()
	{
		cout << "英特尔的CPU开始计算了" << endl;


	}


};

class IntelVideoCard :public VideoCard
 { 
 public:
	 virtual void display()
	 {
		 cout << "Intel的显卡开始显示了" << endl;
	 }

 };

class IntelMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Intel的内存条开始存储了" << endl;
	}
};

//Lenovo厂商
class LenovoCPU :public CPU
{
public:
	virtual void calculate()
	{
		cout << "Lenovo的CPU开始计算了" << endl;


	}


};

class LenovoVIdeoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "Lenovo的显卡开始显示了" << endl;
	}

};

class LenovoMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Lenovo的内存条开始存储了" << endl;
	}
};

void test01()
{
	//第一台电脑零件
	CPU* intelCPU = new IntelCPU;
	VideoCard* intelCard = new IntelVideoCard;
	Memory* intelMem = new IntelMemory;


	cout << "第一台电脑开始工作" << endl;
	//创建第一台电脑
	Computer* computer1 = new Computer(intelCPU, intelCard, intelMem);//这里是Computer类的那个构造函数
	computer1->work();
	delete computer1;//我们可以在Computer类的析构函数里释放三个零件的堆区数据，这样就可以一遍全部释放完毕了

	cout << "------------------------------------------------" << endl;
	cout << "第二台电脑开始工作" << endl;
	//创建第二台电脑
	  //其实你可以选择先创建再输进函数，也可以在输入进函数的同时创建
	Computer* computer2 = new Computer(new LenovoCPU, new LenovoVIdeoCard, new LenovoMemory);//这里是Computer类的那个构造函数
	computer2->work();
	delete computer2;


}

int main() 
{
	test01();

	system("pause");
	return 0;
}