#include <iostream>
using namespace std;
#include <string>

//�����ǳ����
class Person
{
public :
	Person()
	{
		cout << "Person��Ĭ�Ϲ��캯��" << endl;


	}
	int m_Age;//����
	int* m_Height;//���



	Person(int age,int height )

	{
		cout << "Person���вι��캯��" << endl;
		m_Age = age;  
		m_Height=new int(height);//����new�ڶ������ٿռ䣬��Ϊnew�õ����ǵ�ַ��������ָ����ܽ���

	}

	~Person()
	{	//�������룬���������ٵ��������ͷŲ���
		if (m_Height != NULL)
		{
			delete m_Height;
			m_Height = NULL;


		}


		cout << "Person��������������" << endl;

	
	}

	//�Լ�ʵ�ֿ������캯�������ǳ����������
	Person(const Person& p)
	{
		cout << "�������캯���ĵ��ã�" << endl;
		m_Age = p.m_Age;
		/*m_Height = p.m_Height;*/ //������Ĭ��ʹ�����д���



		m_Height = new int(*p.m_Height);
	}


};



void test01()
{

	Person p1(18,180);

	cout << "p1������Ϊ��" << p1.m_Age << "���Ϊ��"<<*p1.m_Height<<endl;
	//��Ϊm_Height����ָ�붨��ģ�����Ӧ��ʹ�ý�����
	Person p2(p1);
	cout << "p2������Ϊ��" << p2.m_Age << "���Ϊ��" << *p2.m_Height << endl;
	//ջ�ϵ����ݻᡰ�Ƚ����������������p2�ȱ��ͷ�
	//����Ϊ�������������⣺���������ݻ��ظ��ͷţ��������ַǷ�����
	//����ǳ���������⣬��Ҫ��������

}



int main()
{
	test01();//�����������ڸú���ִ��������١�Ҳ����˵����������������


	system("pause");
	return 0;
}