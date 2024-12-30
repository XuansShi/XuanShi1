//map容器-构造和赋值
#include<map>
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

//构造：
//map<T1, T2> mp;                    //map默认构造函数: 
//map(const map& mp);             //拷贝构造函数


//赋值：
//map& operator=(const map& mp);   //重载等号操作符

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
	//创建map容器
	map<int, int> m;

	
	//默认构造：
	//使用insert方法插入数据：
	m.insert(pair<int, int>(1, 10));//插入数据应该使用对组(此处用到的是匿名对组)
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(4, 40));
	PrintMap(m);
	//map里的数据会按照key进行排序


	//拷贝构造：
	map<int, int> m2(m);//这里必须在定义的同时进行拷贝构造，不能分开写
	PrintMap(m2);

	//赋值
    //map& operator=(const map& mp);   //重载等号操作符
	map<int, int> m3;
	m3 = m2;
	PrintMap(m3);



}



int main()
{
	test01();




	system("pause");
	return 0;
}