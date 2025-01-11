//常用算术生成算法- accumulate
#include<iostream>
#include<numeric>//算术生成算法头文件
#include<vector>


using namespace std;

//函数原型：
//accumulate(iterator beg, iterator end, value);
	// 计算容器元素累计总和
	// beg 开始迭代器
	// end 结束迭代器
	// value 起始值
  //头文件numeric


void test01()
{
	vector<int>v1;
	for (int i = 0; i < 100; i++)
	{
		v1.push_back(i);
	}
	int sum = accumulate(v1.begin(), v1.end(), 0);

	cout << sum << endl;

}

int main()
{
	test01();


	system("pause");
	return 0;
}