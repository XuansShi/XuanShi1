//deque容器-数据存取
#include<iostream>
#include<string>
#include<deque>

using namespace std;


//函数原型：
//1 at(int idx);     //返回索引idx所指的数据
//2 operator[];     //返回索引idx所指的数据
//3 front();         //返回容器中第一个数据元素
//4 back();             //返回容器中最后一个数据元素

void printDeque(const deque<int>&d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

}

int main()
{
	deque<int> d1;
	deque<int>d2;

//函数原型：
//1 at(int idx);     //返回索引idx所指的数据
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	for (int i = 0; i <10;i++)
	{
		d1.push_front(i); 
	}

	cout << "d1数组的内容："  << endl;
	printDeque(d1);

	cout << "数组d1的 第0位 = " << d1.at(0) << endl;


//2 operator[];     //返回索引idx所指的数据
	cout << "数组d1的 第3位 = " << d1[3] << endl;


//3 front();         //返回容器中第一个数据元素
	cout << "数组d1的 首位 = " << d1.front() << endl;


//4 back();             //返回容器中最后一个数据元素
	cout << "数组d1的 末位 = " << d1.back() << endl;



	system("pause");
	return 0;
}