//��Ͷ���-�̳�-ͬ����Ա����
#include <iostream>
using namespace std;

class Base
{
public:
	Base()
	{
   m_A = 100;
	}
	int m_A;

//����ĳ�Ա����
	void func()
	{
		cout << "Base-func()����" << endl;
	}
	void func(int a)
	{
		cout << "Base-func(int a)�ĵ���" << endl;
	}

};

class Son :public Base
{
public:
	int m_A;
	Son()
	{
		m_A = 200;
	}

	void func()
	{
		cout << "Son-func()����" << endl;
	}


};

//ͬ����Ա���Դ���
void test01()
{
	Son s;
	cout << "m_A = " << s.m_A << endl;

//���ﵽ���õ���˭��m_A�أ�
	//�����������
//��ֻ��Ҫ��һ��������Ϳ��Ե��ø�����ˣ�
	//�����Ҫ�����������ʵ�����ͬ����Ա����Ҫ��������
	cout << "��һ�� m_A = " << s.Base::m_A << endl;
}


//ͬ����Ա��������
void test02()
{
	Son s;
	s.func();//ֱ�ӵ��ã����õ��������е�ͬ������

 //��ε��ø����е�ͬ��������
	s.Base::func();//�Ӹ������������
  //����㻹����ú������أ�
	//��Ϊ�����г����˺͸���ͬ���ĳ�Ա��������ô�����ͬ����Ա�����ص�����������ͬ����Ա����
	  //���������ֱ��������д 
	      // s.func(100);
	  //�Ǿͻᱨ��
	  //����㻹�ü���������
	s.Base::func(100);


}

int main()
{
	test01();
	test02();

	system("pause");
	return 0;
}