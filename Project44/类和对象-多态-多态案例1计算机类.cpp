//��Ͷ���-��̬-��̬����1:�������
#include <iostream>
#include <string>
using namespace std;

//�ֱ�������ͨд���Ͷ�̬���������ʵ��������������������ļ�������

//��ͨд��

class Calculator
{
public :


int m_Num1;//������1
int m_Num2;//������2

	
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
		//�������չ�µĹ��ܣ����޸�Դ��
		  //�����ǿ����� �ᳫ ����ԭ��
		  //����ԭ��: ����չ���п��ţ����޸Ľ��йر�
		//��������ˣ���������������Ҫ�鿴���еĴ��룬Ȼ���ٽ��

	}


};

void test01()
{
	//��������������
	Calculator c;
	c.m_Num1 = 10;
	c.m_Num2 = 20;

	cout << c.m_Num1 << "+" << c.m_Num2 << "=" << c.getResult("+") << endl;
	cout << c.m_Num1 << "-" << c.m_Num2 << "=" << c.getResult("-") << endl;
	cout << c.m_Num1 << "*" << c.m_Num2 << "=" << c.getResult("*") << endl;
}

//���ö�̬ʵ�ּ�����

  //ʵ�ּ�����������
class AbstractCalculator
{
public:
	int m_Num1;
	int m_Num2;

	virtual int getResult()
	{
		//�����дһ��������࣬Ȼ���Ա�����岻д����
		//��չ�¹��ܵ�ʱ��̳�����࣬Ȼ����дһ��ͬ����Ա����
		return 0;
	}
};


  //�ӷ���������
class AddCalculator :public AbstractCalculator
{
public:
	virtual int getResult()
	{

		return m_Num1 + m_Num2;
	};
};
 
 //������������
		class SubCalculator :public AbstractCalculator
		{
		public:
			virtual int getResult()
			{

				return m_Num1 - m_Num2;
			};
		};

//�˷���������
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
//��̬ʹ������:
	//����ָ���������ָ���������
	
	//�ӷ�����
	AbstractCalculator* abc = new AddCalculator;//��new����һ��AddCalculator��Ķ���
	abc->m_Num1 = 10;
	abc->m_Num2 = 20;

	cout << abc->m_Num1 << "+" << abc->m_Num2 << "=" << abc->getResult() << endl;
	//�����ǵ����ٶ�������
	delete abc;

	//��������
	abc = new SubCalculator;
	abc->m_Num1 = 10;
	abc->m_Num2 = 20;

	cout << abc->m_Num1 << "-" << abc->m_Num2 << "=" << abc->getResult() << endl;
	//�����ǵ����ٶ�������
	delete abc;

	//�˷�����
	abc = new MulCalculator;
	abc->m_Num1 = 10;
	abc->m_Num2 = 20;

	cout << abc->m_Num1 << "*" << abc->m_Num2 << "=" << abc->getResult() << endl;
	//�����ǵ����ٶ�������
	delete abc;



}

//���ö�̬ʵ�ּ����������ƣ�
  //1����֯�ṹ����
  //2���ɶ���ǿ
  //3��ǰ�ںͺ�����չ��ά���Ը�


		int main()
		{
			//test01();
			test02();

			system("pause");
			return 0;
		}