//常用集合算法-set_union
#include<iostream>
#include<numeric>
#include<vector>
#include<algorithm>

using namespace std;
//函数原型：
//set_union(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
	// 求两个集合的并集
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
		cout << val << endl;
	}


};
void test01()
{
	vector<int>v1;
	vector<int>v2;

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 10);
		//注意两个原容器必须是有序序列
	}

	vector<int>vTarget;
	//开辟空间：
	   //最特殊情况：目标容器size = 大容器+小容器，
	vTarget.resize(v1.size()+v2.size());

	//获取并集
	vector<int>::iterator itEnd = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());//参数：两个容器的起始/末尾迭代器、目标容器的起始迭代器
	//set_intersection会返回交集的末尾迭代器

//遍历，打印
	for_each(vTarget.begin(), itEnd, MyPrint());//这里可以使用并集的末尾迭代器，而不是目标容器的末尾迭代器，这样就不会因为开辟的空间过大，而打印出一大堆默认的0了


}

int main()
{
	test01();


	system("pause");
	return 0;
}





















