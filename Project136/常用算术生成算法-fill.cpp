//常用算术生成算法-fill
#include<iostream>
#include<numeric>//算术生成算法头文件
#include<vector>
#include<algorithm>

using namespace std;
//函数原型：
//fill(iterator beg, iterator end, value);
	// 向容器中填充元素
	// beg 开始迭代器
	// end 结束迭代器
	// value 填充的值

class MyPrint
{
public:
	void operator()(int val)
	{
		cout << val << endl;
	}


};
void test01()
{
	vector<int>v1;
	v1.resize(10);

	fill(v1.begin(), v1.end(), 10);//全10
	for_each(v1.begin(), v1.end(), MyPrint());

	

}

int main()
{
	test01();


	system("pause");
	return 0;
}


