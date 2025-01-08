//常用排序算法-reverse
#include <iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<ctime>

using namespace std;

//函数原型：
//reverse(iterator beg, iterator end);
	// 反转指定范围的元素
	// beg 开始迭代器
	// end 结束迭代器




void MyPrint(int val)
{
	cout << val << " ";
}



void test01()
{
	vector<int>v1;

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	

	}

	cout << "reverse前：" << endl;
	for_each(v1.begin(), v1.end(), MyPrint);

	cout << endl;

	cout << "reverse后：" << endl;
	reverse(v1.begin(),v1.end());
	for_each(v1.begin(), v1.end(), MyPrint);



}




int main()
{

	test01();

	system("pause");
	return 0;
}




















