//set容器-构造和赋值
#include<iostream>
#include<set>
#include<string>
#include<algorithm>
using namespace std;

//构造：
//set<T> st;                //默认构造函数
//set(const set& st);       //拷贝构造函数

//赋值：
//set& operator=(const set& st);    //重载等号操作符

void PrintSet(const set<int>& s)
{
	for (set<int>::const_iterator it = s.begin();it != s.end();it++)
	{
		cout << *it << " ";

	}


	cout << endl;
}



void test01()
{
	set<int>s1;

	//set容器插入数据只有insert方法
	s1.insert(10);
    s1.insert(30);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);
	PrintSet(s1); //打印结果是10 20 30 40  四个数，证明set容器会自动排序，且元素不会重复

//构造：
	//set<T> st;                //默认构造函数：
	//set(const set& st);       //拷贝构造函数
	
	//拷贝构造
	set<int>s2(s1);
	PrintSet(s2);

//赋值：
    //set& operator=(const set& st);    //重载等号操作符

	set<int>s3;
	s3 = s2;
	PrintSet(s3);

}

int main()
{
	test01();



	system("pause");
	return 0;
}