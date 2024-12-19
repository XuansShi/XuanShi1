//deque容器-排序
#include<iostream>
#include<string>
#include<deque>
#include <algorithm>//标准算法头文件

using namespace std;

//算法：
//sort(iterator beg, iterator end) //对beg和end区间内元素进行排序

//对于支持随机访问的迭代器的容器，都可以利用sort算法直接对其进行排序
  //比如vector容器 deque容器

void printDeque(const deque<int> &d)
{
	for (deque<int> ::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";

	 }
	cout << endl;
}
void test01()
{
	deque<int>d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_front(100);
	d.push_front(200);
	d.push_front(300);

	cout << " 排序前：" << endl;
	printDeque(d);

	//排序
	cout << " 排序后：" << endl;
	sort(d.begin(), d.end());
	printDeque(d);//排序默认是从小到大

}

int main()
{
	test01();



	system("pause");
	return 0;

}