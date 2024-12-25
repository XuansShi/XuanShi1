//list容器-数据存取

#include<iostream>
#include<string>
#include<list>
#include<algorithm>
using namespace std;

//函数原型：
//1 front();       //返回第一个元素。

//2 back();        //返回最后一个元素。

//list容器和vector、deque容器不同，它不支持使用 重载[] 、 at 方法的数据存取
  //因为list是链表，每个数据之间不是连续的，
    //所以本质上不能跳跃式访问
    //但是可以创建一个迭代器然后不断地++/--

void PrintList(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";

	}
	cout << endl;


}


void test01()
{
	list<int>L1;
	L1.push_back(1);
	L1.push_back(2);
	L1.push_back(3);
	L1.push_back(4);

	cout << "L1容器的第一个元素" << L1.front() << endl;

	cout << "L1容器的最后一个元素" << L1.back() << endl;

	//验证list的迭代器不支持随机访问：
	list<int>::iterator it = L1.begin();

	//it = it + 1;  这样会报错，你只能++/-- 如下：
	it++;
	it--;//++和--都不出错，所以支持双向

	PrintList(L1);

}


int main()
{
	test01();



	system("pause");
	return 0;
}