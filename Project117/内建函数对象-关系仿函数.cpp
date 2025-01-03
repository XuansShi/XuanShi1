//内建函数对象-关系仿函数
#include<iostream>
#include<string>
#include<algorithm>
#include<functional>//内建函数对象头文件
#include<vector>

using namespace std;

//仿函数原型：
//1.	template<class T> bool equal_to < T>         //等于
//2.	template<class T> bool not_equal_to < T>     //不等于
//3.	template<class T> bool greater < T>          //大于
//4.	template<class T> bool greater_equal < T>    //大于等于
//5.	template<class T> bool less < T>             //小于
//6.	template<class T> bool less_equal<T>         //小于等于

class MyCompare
{
public:
	bool operator()(const int v1, const int v2)const
	{
		return v1 > v2;
	}


};

void PrintVector(const vector<int>& v)
{
	for (vector<int>::const_iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";

	}

	cout << endl;
}


void test01()
{
	cout << "自定义函数对象实现sort降序" << endl;
	vector<int>v;
	v.push_back(10);
	v.push_back(40);
	v.push_back(20);
	v.push_back(30);
	v.push_back(50);
	PrintVector(v);

	//降序
	sort(v.begin(), v.end(), MyCompare());
	PrintVector(v);

}


void test02()
{
	cout << "内建函数对象实现sort降序" << endl;
	vector<int>v;
	v.push_back(10);
	v.push_back(40);
	v.push_back(60);
	v.push_back(20);
	v.push_back(30);
	v.push_back(50);
	PrintVector(v);


	sort(v.begin(), v.end(),greater<int>());//注意内建函数对象的尖括号<>里要写数据类型
	  //注：由sort的底层代码可知，它第二种重载的默认排序方法是本节的 5.template<class T> bool less < T>//小于
	PrintVector(v);


}

int main()
{
	test01();
	test02();


	system("pause");
	return 0;
}
