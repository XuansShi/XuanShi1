//ģ��-��ģ���г�Ա��������ʱ��
//��ģ���еĳ�Ա�����ڵ���ʱ�Ŵ���
#include <iostream>
using namespace std;

class Person1
{
public:
	void showPerson1()
	{
		cout << "Person1 show" << endl;
	}



};


class Person2
{
public:
	void showPerson2()
	{
		cout << "Person2 show" << endl;
	}



};

template<class T>
class MyClass
{
public:
	T obj;

	//��ģ���еĳ�Ա����
	void func1()
	{
		obj.showPerson1();

	}

	void func2()
	{
		obj.showPerson2();

	}
	//������func1��func2��ֻ���ڵ��õ�ʱ��Żᱻ��������Ϊһ��ʼ�޷�ȷ����������


};

void test01()
{
	MyClass<Person1>m;//ϰ����ģ���﷨-ʵ�־�����ࣺ  ��ģ����<ʵ�ʵ���������> ������;
	m.func1();
	//m.func2();    //��������ΪPerson1����ôֻ�ܵ���Person1���showPerson1���������ͬʱдfun1��fun1���������



}


int main()
{





	system("pause");
	return 0;
}