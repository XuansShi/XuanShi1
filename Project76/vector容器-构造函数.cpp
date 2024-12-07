//vector容器-构造函数
#include <iostream>
using namespace std;
#include <vector>//所有容器都要包含头文件


//函数原型：
//1 vector<T> v;               //采用模板实现类实现，默认构造函数
//2 vector(v.begin(), v.end());          //将v[begin(), end())区间中的元素拷贝给本身。
//3 vector(n, elem);                           //构造函数将n个elem拷贝给本身。
//4 vector(const vector& vec);        //拷贝构造函数。

void printVector(vector<int> &v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";

	}
	cout << endl;

}





void test01()
{

	//1 默认构造（无参构造）
	cout << "v1:" << endl;
	vector<int> v1;
	for (int i = 0;i<10;i++)
	{
		v1.push_back(i);
	}
	printVector(v1);



	//2 通过区间方式进行构造
	cout << "v2:" << endl;
	vector<int>v2(v1.begin(), v1.end());
	printVector(v2);



	//3 n个elem方式构造
	cout << "v3:" << endl;
	vector<int>v3(10,100);//第一个参数填个数，第二个参数填元素
	printVector(v3);


	//4 拷贝构造函数（常用）
	cout << "v4:" << endl;
	vector<int>v4(v3);//使用一个同类型的变量（此处为容器v3）来初始化
	printVector(v3);
}


int main()
{
	test01();






	system("pause");
	return 0;
}