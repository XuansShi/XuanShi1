//常用排序算法-random_shuffle
#include <iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<ctime>

using namespace std;

//函数原型：
//random_shuffle(iterator beg, iterator end);
	// 指定范围内的元素随机调整次序
	// beg 开始迭代器
	// end 结束迭代器


void MyPrint(const vector<int>& v)
{
	for (vector<int>::const_iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

}

void foreachPrint(int v)
{
	cout << v << " ";
}

void test01()
{
	//注意random_shuffle也要使用一个随机数的种子才能做到真随机：
	srand((unsigned int)time(NULL));

	vector<int>v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	v.push_back(60);

	cout << "排序前" << endl;
	MyPrint(v);



	cout << "升序排序后" << endl;
	sort(v.begin(), v.end());
	for_each(v.begin(), v.end(), foreachPrint);//习：使用for_each遍历并且打印

	cout << endl;

	cout << "使用random_shuffle后：" << endl;

	random_shuffle(v.begin(), v.end());
	for_each(v.begin(), v.end(), foreachPrint);



}




int main()
{

	test01();

	system("pause");
	return 0;
}

