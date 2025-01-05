//常用查找算法-find_if
#include <iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

//函数原型：
//find_if(iterator beg, iterator end, _Pred);
  // 按值查找元素，找到返回指定位置迭代器，找不到返回结束迭代器位置
  // beg 开始迭代器
  // end 结束迭代器
  // _Pred 函数或者谓词（返回bool类型的仿函数）      和find算法的不同之处就是第三个传参由查找对象变为了函数对象



//一、 查找内置数据类型

class GreaterFive//函数对象：返回vector里大于5的数
{
public:
	bool operator()(int v1)
	{
		return v1 > 5;

	}


};


void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}


	vector<int>::iterator it1 = find_if(v.begin(), v.end(), GreaterFive());//查找第一个大于5的对象所对应的迭代器

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
	bool operator==(const Person& p)const
	{
		//如果 自身的 == 传入的 则认为是相等，返回true，否则返回false
		if (this->m_Age == p.m_Age && this->m_Name == p.m_Name)
		{
			return true;
		}
		else
		{
			return false;
		}


	}



};


//二、 查找自定义数据类型
class LesserTwenty
{
public:
	bool operator()(Person &p)//查找年龄小于20的Person类型对象的仿函数（查什么类型的对象就传入什么类型）
	{
		return p.m_Age < 20;


	}


};


void test02()
{
	vector<Person> p;
	Person p1(18, "爱莉希雅");
	Person p2(50008, "格 蕾—修—~");
	Person p3(50018, "符华");

	p.push_back(p1);
	p.push_back(p2);
	p.push_back(p3);


	//查找年龄小于20的对象：
	vector<Person>::iterator itp1 = find_if(p.begin(), p.end(), LesserTwenty());

	
	if (itp1 == p.end())
	{
		cout << "没找到" << endl;
	}
	else
	{
		cout << "找到了" << " 年龄： " << (*itp1).m_Age << " 姓名： " << (*itp1).m_Name << endl;
	}



}


int main()
{
	test01();
	test02();


	system("pause");
	return 0;
}





