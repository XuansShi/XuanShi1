#include <iostream>
using namespace std;
#include <string>
#include "MyArry.hpp"




//测试自定义的数据类型
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

		cout << "姓名" <<arr[i].m_Name <<endl;
		cout << "年龄" << arr[i].m_Age << endl;
	}


}

void test01()
{
	MyArray<Person>arr(10);
	Person p1("爱莉希雅", 18);
	Person p2("琪亚娜", 18);
	Person p3("芽衣", 18);
	Person p4("布洛妮娅", 18);
	//将数据插入到数组中
	arr.Push_Back(p1);
	arr.Push_Back(p2);
	arr.Push_Back(p3);
	arr.Push_Back(p4);

	//打印数组
	printPersonArray(arr);

	//输出容量
	cout << "输出容量为" << arr.getCapacity() << endl;
	cout << "输出大小为" << arr.getSize() << endl;


	//输出大小



}


int main()
{
	test01();



	system("pause");
	return 0;
}



