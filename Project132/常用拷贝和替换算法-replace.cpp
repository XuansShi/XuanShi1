//常用拷贝和替换算法-replace
#include <iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<ctime>

using namespace std;
//函数原型：
//replace(iterator beg, iterator end, oldvalue, newvalue);
	// 将区间内旧元素 替换成 新元素
	// beg 开始迭代器
	// end 结束迭代器
	// oldvalue 旧元素
	// newvalue 新元素


class MyPrint
{
public:
	void operator ()(int val)
	{
		cout << val << " ";
	}
};



void test01()
{
	vector<int>v1;

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	for_each(v1.begin(), v1.end(), MyPrint());


	cout << "替换后" << endl;
	replace(v1.begin(), v1.end(), 9, 900);
	for_each(v1.begin(), v1.end(), MyPrint());
} 




int main()
{

	test01();

	system("pause");
	return 0;
}

