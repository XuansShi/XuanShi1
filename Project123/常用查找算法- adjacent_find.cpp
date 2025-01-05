//常用查找算法- adjacent_find
#include <iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

/*

函数原型：
adjacent_find(iterator beg, iterator end);

  // 查找相邻重复元素,返回相邻元素的第一个位置的迭代器
  // beg 开始迭代器
  // end 结束迭代器

*/

//查找内置数据类型
void test01()
{
	vector<int>v;
	v.push_back(0);
	v.push_back(1);
	v.push_back(0);
	v.push_back(2);//这两个是相邻且重复的元素
	v.push_back(2);//这两个是相邻且重复的元素
	v.push_back(4);
	v.push_back(3);
	v.push_back(6);
	v.push_back(5);



	vector<int>::iterator it1 = adjacent_find(v.begin(), v.end());//查找一下3所对应的迭代器
	//找到了返回对应的迭代器，没找到返回末尾迭代器

	if (it1 == v.end())
	{
		cout << "没找到" << endl;
	}
	else
	{
		cout << "找到了" << *it1 << endl;
	}






}


int main()
{
	test01();




	system("pause");
	return 0;
}









