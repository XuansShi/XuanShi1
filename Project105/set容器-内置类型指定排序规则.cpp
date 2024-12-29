//set容器-内置类型指定排序规则
#include<iostream>
#include<string>
#include<algorithm>
#include<set>

using namespace std;


//利用一个仿函数实现从大到小排序
class MyCompare
{
public:
	//bool operator()(int v1,int v2) //原版本是没有加const的，所以会报错C3848
	//{
	//	return v1 > v2;

	//}

//关于报错C3848：
  //把bool operator()(int v1,int v2){} 写成： bool operator()(int v1,int v2) const {} 可以解决报错C3848
  //常函数：成员函数后加const修饰了this指针，使this指向的值也不可修改；
    //任意修改所在的类的成员的操作都是不允许的（因为隐含了对this指针的const引用）；但不加const的成员函数只能被非const对象调用。
    //但是，在成员名字前加了mutable关键字修饰的成员，可以被修改。加了const的成员函数可以被非const对象和const对象调用）






	bool operator()(int v1, int v2) const//重载小括号()    第一个小括号表示要重载小括号；第二个小括号表示重载的参数列表
	{
		return v1 > v2;

	}


};



void PrintSet2(set<int, MyCompare> &s2)//容器的数据类型也要修改（加上仿函数）
{
	for (set<int, MyCompare>::iterator it = s2.begin(); it != s2.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

}



void PrintSet1(const set<int>& s1)
{
	for (set<int>::const_iterator it = s1.begin(); it != s1.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

}


void test01()
{
	cout << "s1：" << endl;
	set<int>s1;
	s1.insert(10);
	s1.insert(20);
	s1.insert(40);
	s1.insert(30);
	s1.insert(50);
	PrintSet1(s1);


	//在插入前就将排序规则定为从大到小：
	  //在容器的<>里加入仿函数（其实仿函数的本质是一种数据类型）：
	cout << "s2：" << endl;
	set<int,MyCompare>s2;
	s2.insert(10);
	s2.insert(20);
	s2.insert(40);
	s2.insert(30);
	s2.insert(50);
	PrintSet2(s2);



}




int main()
{
	test01();



	system("pause");
	return 0;
}