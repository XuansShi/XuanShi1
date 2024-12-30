//map容器-大小和交换
#include<map>
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

//函数原型：
//size();       //返回容器中元素的数目
//empty();        //判断容器是否为空
//swap(st);     //交换两个集合容器

void PrintMap(const map<int, int>& mp)
{
	for (map<int, int>::const_iterator it = mp.begin(); it != mp.end(); it++)
	{

		cout << "key = " << (*it).first << "value = " << it->second << endl;//因为这里是对组，所以你不能只是用*it，你可以用点出或者箭头的方法得到第一个和第二个数据
	}
	cout << endl;


}


void test01()
{
	
	map<int, int> m1;//创建map容器

	m1.insert(pair<int, int>(1, 10));
	m1.insert(pair<int, int>(2, 20));
	m1.insert(pair<int, int>(3, 30));
	m1.insert(pair<int, int>(4, 40));


	map<int, int> m2;//创建map容器
	m2.insert(pair<int, int>(1, 100));
	m2.insert(pair<int, int>(2, 200));
	m2.insert(pair<int, int>(3, 300));
	m2.insert(pair<int, int>(4, 400));


//size();       //返回容器中元素的数目
	cout << "m1中的元素数目：" << m1.size() << endl;


//empty();        //判断容器是否为空
	if (m1.empty())
	{
		printf("容器为空\n") ;
	}
	else
	{
		cout << "容器不为空" << endl;
	}


//swap(st);     //交换两个集合容器
	cout << "交换前：" << endl;
	cout << "m1 ： " << endl;
	PrintMap(m1);
	cout << "m2 ： " << endl;
	PrintMap(m2);

	cout << "交换后：" << endl;
	m1.swap(m2);
	cout << "m1 ： " << endl;
	PrintMap(m1);
	cout << "m2 ： " << endl;
	PrintMap(m2);
}



int main()
{
	test01();




	system("pause");
	return 0;
}
