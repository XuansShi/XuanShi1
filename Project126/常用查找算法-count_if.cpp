//P246 常用查找算法-count_if
#include <iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

//函数原型：
//count_if(iterator beg, iterator end, _Pred);
	// 按条件统计元素出现次数
	// beg 开始迭代器
	// end 结束迭代器
	// _Pred 谓词




//1、内置数据类型
class Greater20//提供 查找大于20的元素 的仿函数
{
public:
	bool operator()(int val)
	{
		return val > 20;

	}




};

void test01()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	v.push_back(60);

	int num = count_if(v.begin(), v.end(), Greater20());

	cout << "大于20的元素个数 = " << num << endl;

}




//2、自定义数据类型
class Person
{
public:
	string m_Name;
	int m_Age;

	Person(string name, int age)
	{
		this->m_Age = age;
		this->m_Name = name;

	}
};

class  PersonGreater35
{
public:
	bool operator()(const Person& p)const
	{
		if (p.m_Age > 35)
		{
			return true;
		}
		else
		{
			return false;
		}

	}


};

void test02()
{
	vector<Person> v;
	Person p1("刘备", 35);
	Person p2("关羽", 35);
	Person p3("张飞", 35);
	Person p4("赵云", 30);
	Person p5("曹操", 40);


	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);


	int num = count_if(v.begin(), v.end(), PersonGreater35());
	cout << "年龄大于35的有 " << num << "个" << endl;


}



int main()
{
	test01();
	test02();


	system("pause");
	return 0;
}
