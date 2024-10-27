//文件操作-二进制文件-读文件
#include<iostream>
#include<fstream>
#include <string>
using namespace std;

class Person
{
public:
	char m_Name[64];//姓名//二进制文件使用C++的字符串可能会出bug，所以这里就直接用c语言的char数组
	int m_Age;//年龄


};


//二进制文件  读文件
void test01()
{
	//1、包含头文件

	//2、创建流对象
	ifstream ifs;//ofstream写操作//ifstream读操作//fstream读写操作 

	//3、打开文件 同时判断是否打开成功
	ifs.open("person.txt", ios::in | ios::binary);


	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;

	}
	else
	{
		cout << "文件打开成功" << endl;
	}


	//4、读文件
	Person p;
	ifs.read((char *)&p,sizeof(Person));

	cout << "姓名：" <<p.m_Name<<" 年龄 "<<p.m_Age << endl;

	//5、关闭文件

	ifs.close();
}


int main()
{

	test01();

	system("pause");
	return 0;
}