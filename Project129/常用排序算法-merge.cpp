//常用排序算法-merge
#include <iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<ctime>

using namespace std;
//函数原型：
//merge(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
	// 容器元素合并，并存储到另一容器中
	// 注意: 两个容器必须是**有序的**
	// beg1   容器1开始迭代器
	// end1   容器1结束迭代器
	// beg2   容器2开始迭代器
	// end2   容器2结束迭代器
	// dest    目标容器开始迭代器

void MyPrint(const vector<int>& v)
{
	

	for (vector<int>::const_iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}



void test01()
{
	vector<int>v1;
	vector<int>v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 10);

	}
	
	//目标容器
	vector<int>vTarget;
	vTarget.resize(v1.size() + v2.size());//创建容器后一定要给它分配空间

	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
		//注意：
			// 原容器都必须是有序序列，而且排序规则相同（都是升序或者降序）


	//打印输出
	MyPrint(vTarget);


}




int main()
{

	test01();

	system("pause");
	return 0;
}



