//queue容器-常用接口
#include<iostream>
#include<queue>
#include<algorithm>
#include<string>

using namespace std;

//构造函数：
//1 queue<T> que;                 //queue采用模板类实现，queue对象的默认构造形式
//2 queue(const queue & que); `            //拷贝构造函数

//赋值操作：
//queue& operator=(const queue& que);           //重载等号操作符

//数据存取：
//1 push(elem);                //往队尾添加元素
//2 pop();                     //从队头移除第一个元素
//3 back();                    //返回最后一个元素
//4 front();                    //返回第一个元素

//大小操作：
//1 empty();            //判断堆栈是否为空
//2 size();               //返回栈的大小

class Person
{
public:
	string m_Name;
	int m_Age;

	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;

	}

};


void test01()
{
	//创建队列容器
	queue<Person>q;

	//准备数据
	Person p1("唐僧", 30);
	Person p2("孙悟空", 510);
	Person p3("猪八戒", 520);
	Person p4("沙和尚", 530);


	//入队
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);

	cout << "出队前，队列大小为：" << q.size() << endl;

	//判断只要队列不为空，查看队头、队尾
	while (!q.empty())
	{
		//查看队头
		cout << "队头元素——姓名：" << q.front().m_Name << "    年龄：" << q.front().m_Age << endl;

		//查看队尾
		cout << "队尾元素——姓名：" << q.back().m_Name << "    年龄：" << q.back().m_Age << endl;

		//出队
		q.pop();


	}
	cout << "出队后，队列大小为：" << q.size() << endl;
}


int main()
{
	test01();



	system("pause");
	return 0;
}

