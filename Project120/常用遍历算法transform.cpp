//常用遍历算法transform
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

/*
函数原型：
transform(iterator beg1, iterator end1, iterator beg2, _func);

//beg1 源容器开始迭代器

//end1 源容器结束迭代器

//beg2 目标容器开始迭代器

//_func 函数或者函数对象
*/

class Transform
{
public:
	int operator()(int v)
	{
		return v;
	}


};

class MyPrint
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}


};


void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);

	}

	vector<int>Targetv;
	Targetv.resize(v.size());//注意要提前给搬运到的容器开辟空间

	transform(v.begin(), v.end(), Targetv.begin(), Transform());//搬运

	for_each(Targetv.begin(), Targetv.end(), MyPrint());//遍历，并且打印


}


int main()
{
	test01();

	return 0;
	system("pause");
}
