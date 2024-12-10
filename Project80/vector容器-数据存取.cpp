//vector容器-数据存取
#include<iostream>
#include <vector>
#include <string>
using namespace std;

//函数原型：
//1 at(int idx);      //返回索引idx所指的数据
//2 operator[idx];        //返回索引idx所指的数据
//3 front();             //返回容器中第一个数据元素
//4 back();              //返回容器中最后一个数据元素

//除了使用迭代器，你还可以使用这些成员函数↑拿到你需要的参数

void test01()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)//使用for+尾插法迅速插入数据
	{
		v1.push_back(i);
	}



	//1 at(int idx);      //利用at返回索引idx所指的数组中的数据
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1.at(i) << " ";
	}
	cout << endl;



	//2 operator[idx];   //返回索引idx所指的数组中的数据
		
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;


	//3 front();             //返回容器中第一个数据元素
	cout << "第一个元素为" << v1.front() << endl;



    //4 back();              //返回容器中最后一个数据元素
	cout << "最后一个元素为" << v1.back() << endl;

}

int main()
{
	test01();
	system("pause");
	return 0;
}