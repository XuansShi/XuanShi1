//ģ��-��ģ���������������
#include <iostream>
#include <string>
using namespace std;

//��ģ���������������
template<class T1,class T2>
class Person
{
public:
	T1 m_Name;
	T2 m_Age;


	Person(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	};

	void showPerson()
	{
		cout << "������"<< this->m_Name <<"���䣺"<< this->m_Age << endl;

	}


};

//1��ָ����������(��ģ��Ķ����������Ĵ���)//�������õģ���򵥵�
void printPerson1(Person<string, int> &p)//ϰ�������ַ����ֱ���õ����壬�����ǿ���
{
	p.showPerson();


}

void test01()
{
	Person<string, int> p("�����", 100);
    printPerson1(p);

}

//2������ģ�廯
template <class T1,class T2>
void printPerson2(Person<T1, T2>& p)//������Ѳ�������Ҳ��Ϊģ��
{
	p.showPerson();
	cout << "T1�����ͼ�������Ϊ:" << typeid(T1).name() << endl;
	cout << "T2�����ͼ�������Ϊ:" << typeid(T2).name() << endl;
}

void test02()
{
	Person<string, int> p("��˽�", 90);
	printPerson2(p);

}



//3��������ģ�廯
template<class T>
void printperson3(T &p)//ֱ�ӰѶ���ĵ�ַ����
{
	p.showPerson();
	cout << "��������Ϊ��" << typeid(T).name() << endl;
}

void test03()
{
	Person<string, int>p("��ɮ", 80);
	printperson3(p);//���ﲻҪд��ַ

}


int main()
{
	test01();
	test02();
	test03();

	system("pause");
	return 0;
}