//list容器-赋值和交换

#include<iostream>
#include<list>
#include<string>
#include<algorithm>
using namespace std;

//函数原型：
//1 assign(beg, end);                     //将[beg, end)区间中的数据拷贝赋值给本身。

//2 assign(n, elem);                      //将n个elem拷贝赋值给本身。

//3 list & operator=(const list & lst);   //重载等号操作符

//4 swap(lst);                            //将lst与本身的元素互换。


void PrintList(const list<int>& L)
{
	for(list<int>::const_iterator it =L.begin();it !=L.end();it++)
	{
		cout << *it << " ";

	}
	cout << endl;


}



void test01()
{
	list<int>L1;
	list<int>L2;
	list<int>L3;
	list<int>L4;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

//3 list & operator=(const list & lst);   //重载等号操作符
	L2 = L1;
	PrintList(L2);


//1 assign(beg, end);                     //将[beg, end)区间中的数据拷贝赋值给本身。
	L3.assign(L2.begin(), L2.end());
	PrintList(L3);


//2 assign(n, elem);                      //将n个elem拷贝赋值给本身。
	L4.assign(10, 1000);
	PrintList(L4);



//4 swap(lst);                            //将lst与本身的元素互换。




}


void test02()
{
	list<int>L1;
	list<int>L2;
	list<int>L3;
	list<int>L4;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	L2.assign(10, 200);
	cout << "交换前：" << endl;
	PrintList(L1);
	PrintList(L2);

	
	cout << "交换后：" << endl;
    L1.swap(L2);
	PrintList(L1);
	PrintList(L2);


}

int main()
{
	test01();

	test02();

	system("pause");
	return 0;
}