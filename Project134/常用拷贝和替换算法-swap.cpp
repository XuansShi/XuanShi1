//常用拷贝和替换算法-swap
#include <iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<ctime>

using namespace std;
//swap(container c1, container c2);
	// 互换两个容器的元素
	// c1容器1
	// c2容器2



void MyPrint(int val)
{
	cout << val << " ";
}



void test01()
{
	vector<int>v1;
	vector<int>v2;

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	for (int i = 10 ; i > 0;i--)
	{
		v2.push_back(i);


	}
	cout << "互换前" << endl;
	cout << "v1" << endl;
	for_each(v1.begin(), v1.end(), MyPrint);
	cout << endl;

	cout << "v2" << endl;
	for_each(v2.begin(), v2.end(), MyPrint);

	cout << "互换后" << endl;
	swap(v1, v2);
	cout << "v1" << endl;
	for_each(v1.begin(), v1.end(), MyPrint);
	cout << endl;
	cout << "v2" << endl;
	for_each(v2.begin(), v2.end(), MyPrint);

}




int main()
{

	test01();

	system("pause");
	return 0;
}

