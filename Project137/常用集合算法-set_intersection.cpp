//常用集合算法-set_intersection
#include<iostream>
#include<numeric>
#include<vector>
#include<algorithm>

using namespace std;

//函数原型：
//set_intersection(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
	// 求两个集合的交集
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
		v2.push_back(i + 5);
		//注意两个原容器必须是有序序列
	}

	vector<int>vTarget;
	 //开辟空间：
		//最特殊情况：大容器包含小容器，所以可以给vTarget开辟小容器的size
			//实现方法：
				//一、if   二、三目运算符	 三、min算法，头文件为algorithm
	vTarget.resize(min(v1.size(),v2.size()));

	//获取交集
	vector<int>::iterator itEnd = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(),vTarget.begin() );//参数：两个容器的起始/末尾迭代器、目标容器的起始迭代器
		//set_intersection会返回交集的末尾迭代器

	//遍历，打印
	for_each(vTarget.begin(), itEnd,MyPrint());//这里可以使用交集的末尾迭代器，而不是目标容器的末尾迭代器，这样就不会因为开辟的空间过大，而打印出一大堆默认的0了


}

int main()
{
	test01();


	system("pause");
	return 0;
}



















