//常用拷贝和替换算法-replace_if
#include <iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<ctime>

using namespace std;
//函数原型：
//replace_if(iterator beg, iterator end, _pred, newvalue);
	// 按条件替换元素，满足条件的替换成指定元素
	// beg 开始迭代器
	// end 结束迭代器
	// _pred 谓词
	// newvalue 替换的新元素

class Greater30
{
public:
	bool operator()(int val)

	{
		return val >= 30;
	}



};

void MyPrint(int val)
{
	cout << val << " ";
}



void test01()
{
	vector<int>v1;
	v1.push_back(10);
	v1.push_back(50);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(80);
	v1.push_back(60);
	v1.push_back(20);

	//将大于等于30的都替换为3000
	cout << "替换前" << endl;

	for_each(v1.begin(), v1.end(), MyPrint);
	cout << endl;

	cout << "替换后" << endl;
	replace_if(v1.begin(), v1.end(), Greater30(), 3000);
	for_each(v1.begin(), v1.end(), MyPrint);



}




int main()
{

	test01();

	system("pause");
	return 0;
}

