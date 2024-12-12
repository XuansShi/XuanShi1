//deque容器-构造函数

#include <iostream>
#include<deque>
#include <string>

using namespace std;

//函数原型：
//1 deque<T> deqT;                   //默认构造形式
//2 deque(beg, end);                  //构造函数将[beg, end)区间中的元素拷贝给本身。
//3 deque(n, elem);                    //构造函数将n个elem拷贝给本身。
//4 deque(const deque & deq);          //拷贝构造函数

void printDeque(const deque<int>&d)//提高安全性：可以使用const防修改，那么同时下面的迭代器要改成const_iterator
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

}


void test01()
{
//1 deque<T> deqT;                   //默认构造形式
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);


	}
	printDeque(d1);



//2 deque(beg, end);                  //构造函数将[beg, end)区间中的元素拷贝给本身。
	deque<int> d2(d1.begin(),d1.end());
	printDeque(d2);


//3 deque(n, elem);                    //构造函数将n个elem拷贝给本身。
	deque<int> d3(3,1111);
	printDeque(d3);


//4 deque(const deque & deq);          //拷贝构造函数
	deque<int> d4(d1);
	printDeque(d4);

}



int main()
{
	test01();



	system("pause");
	return 0;
}