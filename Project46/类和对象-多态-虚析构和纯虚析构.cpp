//��Ͷ���-��̬-�������ʹ�������

#include <iostream>
#include <string>

using namespace std;

//�������ʹ�������

class Animal
{
public:
	Animal()
	{
		cout << "Animal���캯������" << endl;
	}


	//���麯��
	virtual void speak() = 0;

	//virtual ~Animal()//ʹ�����������Խ�� ����ָ���ͷ�������󲻸ɾ�������
	//{
	//	cout << "Animal������������" << endl;
	//}

	//��������:
	  //        ��������ֻ����һ��
	  //����Ҫ�� ���� �� ʵ��
	  //���˴��������������Ҳ���ڳ����࣬�޷�ʵ��������
	virtual ~Animal() = 0;

//�������ͣ��޷��������ⲿ����
	//�����ӽ׶γ���
	//����˵���˴��麯�����麯��������һ�������ľ���ʵ��
	 
};
//�ڱ��ڣ��������ʹ��������޷Ƕ���Ϊ�˽���������������޷������ϣ����¶����������������
Animal ::~Animal()//Animal�������µ�����
{
	cout << "Animal�Ĵ���������������" << endl;


}

class Cat :public Animal
{
public:
	Cat(string name)
	{ 
		cout << "Cat���캯������" << endl;

		m_Name = new string(name);//�����ݴ����ڶ�����������ָ��ά��������
	}


	virtual void speak()
	{
		cout << *m_Name <<"�Ե�����˵��" << endl;

	}

	~Cat()
	{
		if (m_Name != NULL)
		{
			cout << "Cat������������" << endl;
			delete m_Name;
			m_Name = NULL;
		}

	}

	string *m_Name; 


};

void test01()
{
	Animal* animal = new Cat("����");
	animal->speak();
	//����ָ����������ʱ�򣬲����������������������������ж������ԣ������³����ڴ�й¶
	  //ֻ��Ҫ�Ѹ�����鹹�ĳ����������ܽ��������
	delete animal;
}




int main()
{
	test01();



	system("pause");
	return 0;
}