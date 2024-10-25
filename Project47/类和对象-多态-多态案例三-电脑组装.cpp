//��Ͷ���-��̬-��̬������-������װ
#include <iostream>
#include<string>
using namespace std;

//����ͬ�����

//����CPU��
class CPU
{
public:
	//����ļ��㺯��
	virtual void calculate() = 0;



};


//�����Կ���
class VideoCard
{
public:
	//�������ʾ����
	virtual void display() = 0;


};

//�����ڴ�����
class Memory
{
public:
	//����Ĵ洢����
	virtual void storage() = 0;

};

//������
class Computer
{
public:
	Computer(CPU* cpu, VideoCard* vc, Memory* mem)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;

	}
//�ṩ�����ĺ���
	void work()
	{
		//������������������ýӿڣ�
		m_cpu->calculate();

		m_vc->display();

		m_mem->storage();

	}

//�ṩ�������� �ͷ�����Ķ�������
	//�ͷ�CPU���
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
	CPU* m_cpu;//CPU ���ָ��
	VideoCard* m_vc;//�Կ� ���ָ��
	Memory* m_mem;//�ڴ��� ���ָ��

};

//���峧��
  //Intel����
class IntelCPU :public CPU
{
public:
	virtual void calculate()
	{
		cout << "Ӣ�ض���CPU��ʼ������" << endl;


	}


};

class IntelVideoCard :public VideoCard
 { 
 public:
	 virtual void display()
	 {
		 cout << "Intel���Կ���ʼ��ʾ��" << endl;
	 }

 };

class IntelMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Intel���ڴ�����ʼ�洢��" << endl;
	}
};

//Lenovo����
class LenovoCPU :public CPU
{
public:
	virtual void calculate()
	{
		cout << "Lenovo��CPU��ʼ������" << endl;


	}


};

class LenovoVIdeoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "Lenovo���Կ���ʼ��ʾ��" << endl;
	}

};

class LenovoMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Lenovo���ڴ�����ʼ�洢��" << endl;
	}
};

void test01()
{
	//��һ̨�������
	CPU* intelCPU = new IntelCPU;
	VideoCard* intelCard = new IntelVideoCard;
	Memory* intelMem = new IntelMemory;


	cout << "��һ̨���Կ�ʼ����" << endl;
	//������һ̨����
	Computer* computer1 = new Computer(intelCPU, intelCard, intelMem);//������Computer����Ǹ����캯��
	computer1->work();
	delete computer1;//���ǿ�����Computer��������������ͷ���������Ķ������ݣ������Ϳ���һ��ȫ���ͷ������

	cout << "------------------------------------------------" << endl;
	cout << "�ڶ�̨���Կ�ʼ����" << endl;
	//�����ڶ�̨����
	  //��ʵ�����ѡ���ȴ��������������Ҳ�����������������ͬʱ����
	Computer* computer2 = new Computer(new LenovoCPU, new LenovoVIdeoCard, new LenovoMemory);//������Computer����Ǹ����캯��
	computer2->work();
	delete computer2;


}

int main() 
{
	test01();

	system("pause");
	return 0;
}