#include <iostream>
using namespace std;

//��Ͷ���-���������-�������������

class Person
{
friend ostream  &operator<<(ostream& cout, Person& p);

public:
	Person(int a, int b)
	{
		m_A = a;

		m_B = b;


	}

private://һ��ѳ�Ա������Ϊ˽��
	   //Ȼ����Ҫ����Ԫʹ�������operate<<�������ܱ���
	   
	   
	//���ó�Ա�������� ���������
	  //ϰ������㲻֪������Ӧ�÷���ʲô��������дһ��voidȻ���ٸ�
	 //һ�㲻���ó�Ա��������<<���������Ϊ�޷�ʵ��cout����ࣨҲ���������ڡ�cout<<p;�������ģ�
	 //����ֻ����ȫ�ֺ����������������
	 
	//void operator<<(Person cout)
	//{ 
	//}


	int m_A;
	int m_B;




};

//һ�㲻���ó�Ա��������<<���������Ϊ�޷�ʵ��cout����ࣨҲ���������ڡ�cout<<p;�������ģ�
//����ֻ����ȫ�ֺ����������������:

ostream &operator<<(ostream& cout, Person& p)//��Ϊp���ұߣ������ұ�дһ��p//������operator<<(cout,p)   ��Ϊcout<<p;
//cout������������ostream�����������Ϊ��ȫ���������ֻ����һ��������Ҫ�����õķ�ʽ������
{
	cout << "m_A = " << p.m_A << " " << "m_B" << p.m_B << endl;
	return cout;
}
//�⼸�����ø�����������

void test01()
{
Person p(10, 10);//����Person�Ĺ��캯�� ��m_A��m_B�����ֵ
	
	cout <<p;
//�״�������ʽ���˼�룬����Ҫ����һ����void�ķ���ֵ������ʽ���з���ֵ���ͱ��뱣��һ��
}




int main()
{
	test01();
	


	system("pause");
	return 0;
}