// 常用查找算法 - count
#include <iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

//函数原型：
//count(iterator beg, iterator end, value);
	// 统计元素出现次数，返回一个int
	// beg 开始迭代器
	// end 结束迭代器
	// value 统计的元素



//1、内置数据类型
void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);

	}

	for (int i = 10; i >0; i--)
	{
		v.push_back(i);

	}

	int result = count(v.begin(), v.end(), 9);
	cout << "9的元素个数为" << result << endl;
	


}




//2、自定义数据类型
class Person
{
public:
	string m_Name;
	int m_Age;

	Person(string name,int age)
	{
		this->m_Age = age;
		this->m_Name = name;

	}

	bool operator==(const Person& p)const //重载==，判断年龄是否相等
	{//这里的const是强制性要求加的↑
		if (this->m_Age == p.m_Age)
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

	Person p("诸葛亮", 30);
	int num = count(v.begin(), v.end(), p);

	cout << "和" << p.m_Name << "年龄相同的人员个数是" <<num<< endl;



}



int main()
{
	test01();
	test02();


	system("pause");
	return 0;
}
