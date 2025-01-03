//内建函数对象-逻辑仿函数
#include<iostream>
#include<string>
#include<algorithm>
#include<functional>//内建函数对象头文件
#include<vector>

using namespace std;

//函数原型：
//1.template<class T> bool logical_and < T>   //逻辑与
//2.template<class T> bool logical_or < T>    //逻辑或
//3.template<class T> bool logical_not<T>     //逻辑非


void PrintVector(const vector<bool>& v)
{
	for (vector<bool>::const_iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";

	}

	cout << endl;
}


void test01()
{

	vector<bool>v;
	v.push_back(true);
	v.push_back(false);
	v.push_back(false);
	v.push_back(true);
	v.push_back(true);
	PrintVector(v);


	cout << "利用逻辑非，将容器v搬运到容器v2中，并且执行取反操作：" << endl;
	vector<bool>v2;
	v2.resize(v.size());//由于v2刚创建后没有空间，应该以v的大小重新指定v2的容量

	  //利用 transform搬运 算法将v中的元素搬到v2中
	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());
	PrintVector(v2);
		  /*transform的参数：
		  第一个参数、第二个参数： 被搬运容器v的迭代器
		  第三个参数： 搬运到的容器v2的迭代器
		  第四个参数：是仿函数*/



}

int main()
{
	test01();


	system("pause");
	return 0;
}


