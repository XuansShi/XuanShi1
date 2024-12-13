//deque容器-大小操作
#include <iostream>
#include <deque>
#include <string>

using namespace std;

//函数原型：
//1 deque.empty();             //判断容器是否为空

//2 deque.size();              //返回容器中元素的个数

//3 deque.resize(num);         //重新指定容器的长度为num,若容器变长，则以默认值填充新位置。
                               //如果容器变短，则末尾超出容器长度的元素被删除。

//4 deque.resize(num, elem);   //重新指定容器的长度为num,若容器变长，则以elem值填充新位置。
                               //如果容器变短，则末尾超出容器长度的元素被删除。


//注意到vector和deque的区别就是deque没有“容量”的概念，它的大小不受限制

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
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{

		d1.push_back(i);
	}
	printDeque(d1);

//1 deque.empty();             //判断容器是否为空
	cout << "1 deque.empty();             //判断容器是否为空" << endl;
	if (d1.empty())
	{
		cout << "d1为空" << endl;
	}
	else
	{
		cout << "d1不为空" << endl;
//2 deque.size();              //返回容器中元素的个数
		cout << "2 deque.size();              //返回容器中元素的个数" << endl;
		cout << "d1的大小(容器中元素的个数)为 = " << d1.size() << endl;

	}


//3 deque.resize(num);         //重新指定容器的长度为num,若容器变长，则以默认值填充新位置。
							   //如果容器变短，则末尾超出容器长度的元素被删除。
	cout << "3 deque.resize(num);" << endl;

	d1.resize(15);
	printDeque(d1);
	d1.resize(10);
	printDeque(d1);


//4 deque.resize(num, elem);   //重新指定容器的长度为num,若容器变长，则以elem值填充新位置。
							   //如果容器变短，则末尾超出容器长度的元素被删除。
	cout << "4 deque.resize(num, elem);" << endl;
	d1.resize(20, 1);
	printDeque(d1);


	



}


int main()
{
	test01();




	system("pause");
	return 0;
}