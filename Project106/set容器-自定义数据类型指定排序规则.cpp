//set容器-自定义数据类型指定排序规则
#include<iostream>
#include<string>
#include<algorithm>
#include<set>

using namespace std;

//习：自定义数据类型指定排序 就是比 内置数据类型排序 多了一步：必须指定排序规则
  //第一次出现该知识点：在 队列list容器 的sort函数


class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;

	}

	string m_Name;
	int m_Age;

};


//对于自定义的数据类型，必须指定排序规则：
  //利用一个仿函数实现年龄m_Age从大到小排序：
class ComparePerson
{
public:


	bool operator()(const Person &p1, const Person &p2) const//最后面const别忘了
	{
		return p1.m_Age > p2.m_Age;

	}


};




void PrintSetPerson(const set<Person, ComparePerson>& sp)
{
	for (set<Person, ComparePerson>::const_iterator it = sp.begin(); it != sp.end(); it++)
	{
		cout << "姓名：" << (*it).m_Name <<"  年龄："<<(*it).m_Age << endl;
	}

}


void test01()
{
	set<Person, ComparePerson>s;//创建 Person,ComparePerson 数据类型的set容器 s


	Person p1("刘备", 21);
	Person p2("关羽", 22);
	Person p3("张飞", 23);
	Person p4("赵云", 24);

	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);
	PrintSetPerson(s);


}




int main()
{
	test01();



	system("pause");
	return 0;
}