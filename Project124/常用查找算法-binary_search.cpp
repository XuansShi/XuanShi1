//常用查找算法-binary_search
#include <iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

//函数原型：
//bool binary_search(iterator beg, iterator end, value);
	// 查找指定的元素，查到 返回true  否则false
	// 注意: 在**无序序列中不可用**
	// beg 开始迭代器
	// end 结束迭代器
	// value 查找的元素


//查找内置数据类型
void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);

	}

	bool result  = binary_search(v.begin(), v.end(),9);//查找一下9,找到了返回true ，否则返回false
	  //注意只能在有序序列使用，无序序列的查找结果准确率为50%

	if (result)
	{
		cout << "找到了" << result << endl;
	}
	else
	{
		cout << "未找到" << endl;
	}



}



int main()
{
	test01();

	system("pause");
	return 0;
}

