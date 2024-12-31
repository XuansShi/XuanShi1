//map容器-排序
#include<map>
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

//主要技术点:
  //利用仿函数，可以改变排序规则

//——————————————————内置数据类型——————————————————
class MyCompare 
{
public:
	bool operator()(int v1, int v2)const
	{
		return v1 > v2;
}

};


void PrintMapNZ(const map<int, int, MyCompare>& mp)
{
	if (mp.empty())
	{
		cout << "容器为空" << endl;
	}
	{
		for (map<int, int, MyCompare>::const_iterator it = mp.begin(); it != mp.end(); it++)
		{

			cout << "key = " << (*it).first << "  value = " << it->second << endl;//因为这里是对组，所以你不能只是用*it，你可以用点出或者箭头的方法得到第一个和第二个数据
		}
		cout << endl;
	}

}




void test01()
{
	cout << "内置数据类型排序" << endl;


	map<int, int, MyCompare> m1;
	m1.insert(pair<int, int>(1, 10));
	m1.insert(pair<int, int>(2, 20));
	m1.insert(pair<int, int>(3, 30));
	m1.insert(pair<int, int>(4, 40));
	m1.insert(make_pair(5, 50));
	m1.insert(map<int, int>::value_type(6, 60));
	m1[7] = 70;
	PrintMapNZ(m1);





}
//——————————————————内置数据类型——————————————————



//——————————————————自定义数据类型——————————————————

class Person
{
public:
	Person(string name ,int age)
	{
		this->m_Age = age;
		this->m_Name = name;


	}


	int m_Age;
	string m_Name;

};


class PersonKeyCompare//Key倒序排序
{
public:
	bool operator()(const int &pk1, const int& pk2)const//这里的两处const不要漏掉了
	{
		return pk1 > pk2;
	}


};




void PrintMapZDY(const map<int, Person, PersonKeyCompare>& mp)//打印元素函数
{
	if (mp.empty())
	{
		cout << "容器为空" << endl;
	}
	{
		for (map<int, Person, PersonKeyCompare>::const_iterator it = mp.begin(); it != mp.end(); it++)
		{

			cout << "key = " << (*it).first << "  年龄： " << it->second.m_Age<<"  姓名： "<<(*it).second.m_Name << endl;//因为这里是对组，所以你不能只是用*it，你可以用点出或者箭头的方法得到第一个和第二个数据
		}
		cout << endl;
	}

}

void test02()
{
	cout << "自定义数据类型排序" << endl;
	map<int, Person,PersonKeyCompare> m2;
	Person p1("小明", 8);//实例化的参数顺序要和Person构造函数的形参顺序对应
	Person p2("李华", 17);
	Person p3("孙悟空", 1000);
	Person p4("奥托", 500);
	Person p5("爱莉希雅", 18);

	m2.insert(pair<int, Person>(1, p1));
	m2.insert(pair<int, Person>(2, p2));
	m2.insert(pair<int, Person>(3, p3));
	m2.insert(pair<int, Person>(4, p4));
	m2.insert(pair<int, Person>(5, p5));
	//m2.insert(make_pair(2, p2));
	//m2.insert(map<int, Person>::value_type(3, p3));
	//m2[4] = p4;
	//m2.insert(make_pair(5, p5));
	PrintMapZDY(m2);


}

int main()
{
	test01();
	test02();



	system("pause");
	return 0;
}

