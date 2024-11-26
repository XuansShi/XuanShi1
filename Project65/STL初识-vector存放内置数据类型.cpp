//STL初识-vector存放内置数据类型

#include <iostream>
#include <vector>//STL的每个容器都要包含其头文件
#include <algorithm>//标准算法的头文件
#include <string>
using namespace std;





//vector容器存放内置数据类型

void myPrint(int val)
{
	cout << val << endl;
}




void test01()
{

	//创建了一个vector容器，当成数组
	vector<int> v;

	//向容器中插入数据（尾插法）
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);


	//通过迭代器访问容器中的数据
	//vector <int> ::iterator itBegin = v.begin();//起始迭代器，指向容器中第一个元素
	//vector <int> ::iterator itEnd = v.end();//结束迭代器，指向容器中最后一个元素的下一个位置

	////第一种遍历方式
	//while (itBegin !=itEnd)
	//{
	//	cout << *itBegin << endl;//迭代器可以粗略地理解为指针
	//	itBegin++;

	//}


	//第二种遍历方式：（常用）
	for (vector <int> ::iterator it = v.begin(); it != v.end(); it++)
	{

		cout << *it << endl;

	}

	//第三种遍历方式 利用STL提供的遍历算法
	for_each(v.begin(), v.end(), myPrint);
	 // ↑底层原理：检测起始结束迭代器、函数名
	 //回调函数（取出数据然后输出）
	

}


int main()
{

	test01();


	system("pause");
	return 0;
}