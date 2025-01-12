//常用集合算法-set_difference
#include<iostream>
#include<numeric>
#include<vector>
#include<algorithm>

using namespace std;

//函数原型：
//set_difference(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
	// 求两个集合的差集
	// 注意:两个集合必须是有序序列
	// beg1 容器1开始迭代器
	// end1 容器1结束迭代器
	// beg2 容器2开始迭代器
	// end2 容器2结束迭代器
	// dest 目标容器开始迭代器


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
	vector<int>v1;
	vector<int>v2;

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 6);
		//注意两个原容器必须是有序序列
	}

	cout << "v1:" << endl;
	for_each(v1.begin(), v1.end(), MyPrint());

	cout << endl;

	cout << "v2:" << endl;
	for_each(v2.begin(), v2.end(), MyPrint());//这里可以使用差集的末尾迭代器，而不是目标容器的末尾迭代器，这样就不会因为开辟的空间过大，而打印出一大堆默认的0了

	cout << endl;


	vector<int>vTarget1;
	//开辟空间：
	   //最特殊情况：两容器没有交集，取最大的size来开辟空间
	vTarget1.resize(max(v1.size(), v2.size()));

	//获取差集
	vector<int>::iterator itEnd1 = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget1.begin());//参数：两个容器的起始/末尾迭代器、目标容器的起始迭代器
	//set_difference会返回差集的末尾迭代器

	cout << endl;


	//遍历，打印
	cout << "v1 - v2 " << endl;
	for_each(vTarget1.begin(), itEnd1, MyPrint());//这里可以使用差集的末尾迭代器，而不是目标容器的末尾迭代器，这样就不会因为开辟的空间过大，而打印出一大堆默认的0了

	cout << endl;
	cout << endl;


	vector<int>vTarget2;
	vTarget2.resize(max(v1.size(), v2.size()));
	vector<int>::iterator itEnd2 = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), vTarget2.begin());//参数：两个容器的起始/末尾迭代器、目标容器的起始迭代器
	
	cout << "v2 - v1 " << endl;
	for_each(vTarget2.begin(), itEnd2, MyPrint());//这里可以使用差集的末尾迭代器，而不是目标容器的末尾迭代器，这样就不会因为开辟的空间过大，而打印出一大堆默认的0了

}

int main()
{
	test01();


	system("pause");
	return 0;
}
