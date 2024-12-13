//deque容器-赋值操作
#include <iostream>
#include <string>
#include <deque>

using namespace std;


//函数原型：
//1 deque & operator=(const deque & deq);          //重载等号操作符
//2 assign(beg, end);                       //将[beg, end)区间中的数据拷贝赋值给本身。
//3 assign(n, elem);                               //将n个elem拷贝赋值给本身。

void printDeque(const deque<int>&d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";


	}
	cout << endl;


}

void test01()
{
	deque<int>d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);

	}
	printDeque(d1);


//1 deque & operator=(const deque & deq);          //重载等号操作符
	cout << "1 deque & operator=(const deque & deq);          //重载等号操作符" << endl;
	deque<int>d2;
	d2 = d1;
	printDeque(d2);



//2 assign(beg, end);                       //将[beg, end)区间中的数据拷贝赋值给本身。
	cout<<"2 assign(beg, end);                       //将[beg, end)区间中的数据拷贝赋值给本身。" << endl;
	deque<int>d3;
	d3.assign(d1.begin(), d1.end());
	printDeque(d3);

//3 assign(n, elem);                               //将n个elem拷贝赋值给本身。
	cout << "3 assign(n, elem);                               //将n个elem拷贝赋值给本身。" << endl;
	deque<int>d4;
	d4.assign(10, 1000);
	printDeque(d4);

}

int main()
{
	test01();




	system("pause");
	return 0;
}