//常用遍历算法for_each
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;


/*
for_each


功能：实现遍历容器


函数原型：
for_each(iterator beg, iterator end, _func);

//遍历算法 遍历容器元素

//beg 开始迭代器

//end 结束迭代器

//_func 函数或者函数对象

*/

//_func为普通函数
void print01(int val)
{
	cout << val << " ";
}

//_func为仿函数
class Print02
{
public:
	void operator()(int val)
	{
		cout<< val<<" ";
	}


};

void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);

	}


	//_func为普通函数
	for_each(v.begin(), v.end(), print01);
	cout << endl;

	

	//_func为函数对象
	for_each(v.begin(), v.end(), Print02());
	cout << endl;

}


int main()
{
	test01();

}

