#include <iostream>
using namespace std;
#include <string>
#include "MyArry.hpp"




//�����Զ������������
class Person
{
public:

	Person()
	{

	}

	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;

	}
	string m_Name;
	int m_Age;

};

void printPersonArray(MyArray<Person>& arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{

		cout << "����" <<arr[i].m_Name <<endl;
		cout << "����" << arr[i].m_Age << endl;
	}


}

void test01()
{
	MyArray<Person>arr(10);
	Person p1("����ϣ��", 18);
	Person p2("������", 18);
	Person p3("ѿ��", 18);
	Person p4("�������", 18);
	//�����ݲ��뵽������
	arr.Push_Back(p1);
	arr.Push_Back(p2);
	arr.Push_Back(p3);
	arr.Push_Back(p4);

	//��ӡ����
	printPersonArray(arr);

	//�������
	cout << "�������Ϊ" << arr.getCapacity() << endl;
	cout << "�����СΪ" << arr.getSize() << endl;


	//�����С



}


int main()
{
	test01();



	system("pause");
	return 0;
}



