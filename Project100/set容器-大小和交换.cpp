//set容器-大小和交换
#include<iostream>
#include<set>
#include<string>
#include<algorithm>
using namespace std;

//函数原型：
//size();          //返回容器中元素的数目
//empty();        //判断容器是否为空
//swap(st);      //交换两个集合容器



void PrintSet(const set<int>& s)
{
	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
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
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);
	PrintSet(s1); 

	if (s1.empty())
	{//empty();        //判断容器是否为空

		cout << "s1为空" << endl;
	}
	else
	{//size();          //返回容器中元素的数目

		cout << "s1不为空" << endl;

		cout << "s1的元素个数" << s1.size() << endl;
	}



	//swap(st);      //交换两个集合容器
	set<int>s2;
	cout<<"交换前：" << endl;
	cout << "s1" << endl;
	PrintSet(s1);
	cout << "s2" << endl;
	s2.insert(100);
	s2.insert(200);
	s2.insert(300);
	PrintSet(s2);

	cout << "交换后：" << endl;
	s1.swap(s2);
	cout << "s1" << endl;
	PrintSet(s1);
	cout << "s2" << endl;
	PrintSet(s2);

	
	
}

int main()
{
	test01();



	system("pause");
	return 0;
}
