//常用查找算法 - find
#include <iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

//算法简介：
//1.	find              //查找元素
//2.	find_if           //按条件查找元素
//3.	adjacent_find     //查找相邻重复元素
//4.	binary_search     //二分查找法
//5.	count             //统计元素个数
//6.	count_if          //按条件统计元素个数


//查找内置数据类型
void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	//1.	find              //查找元素
	vector<int>::iterator it1 = find(v.begin(), v.end(), 3);//查找一下3所对应的迭代器
	  //找到了返回对应的迭代器，没找到返回末尾迭代器

	if (it1 == v.end())
	{
		cout << "没找到" << endl;
	}
	else
	{
		cout << "找到了" << *it1 << endl;
	}






}


class Person
{
public:
	int m_Age;
	string m_Name;

	Person(int age, string name)
	{
		this->m_Age = age;
		this->m_Name = name;


	}

	//重载==底层find知道如何对比Person数据类型
	bool operator==(const Person &p)const
	{
		//如果 自身的 == 传入的 则认为是相等，返回true，否则返回false
		if(this->m_Age == p.m_Age && this->m_Name == p.m_Name)
		{
			return true;
		}
		else
		{
			return false;
		}


	}



};
//查找自定义数据类型
void test02()
{
	vector<Person> p;
	Person p1(18, "爱莉希雅");
	Person p2(50008, "格 蕾—修—~");
	Person p3(50018, "符华");
	
	p.push_back(p1);
	p.push_back(p2);
	p.push_back(p3);

	vector<Person>::iterator itp1 = find(p.begin(), p.end(), p2);
	
	if (itp1 == p.end())
	{
		cout << "没找到" << endl;
	}
	else
	{
		cout << "找到了" << " 年龄： "<<(*itp1).m_Age<<" 姓名： "<<(*itp1).m_Name << endl;
	}

	/*
	报错：
	严重性	代码	说明	项目	文件	行	禁止显示状态	详细信息
		错误	C2676	二进制“ == ”:“Person”不定义该运算符或到预定义运算符可接收的类型的转换	Project121	C : \Program Files\Microsoft Visual Studio\2022\Enterprise\VC\Tools\MSVC\14.40.33807\include\xutility	5941
	
	是因为“ itp1 == p.end() ”
	这里的 == 
	编译器不知道怎么比较，所以需要重载 == 号


	*/
	



}


int main()
{
	test01();
	test02();



	system("pause");
	return 0;
}