// list容器-插入和删除

#include<iostream>
#include<string>
#include<list>
#include<algorithm>

using namespace std;


//函数原型：
//1 push_back(elem);//在容器尾部加入一个元素

//2 pop_back();//删除容器中最后一个元素

//3 push_front(elem);//在容器开头插入一个元素

//4 pop_front();//从容器开头移除第一个元素

//5 insert(pos, elem);//在pos位置插elem元素的拷贝，返回新数据的位置。

//6 insert(pos, n, elem);//在pos位置插入n个elem数据，无返回值。

//7 insert(pos, beg, end);//在pos位置插入[beg,end)区间的数据，无返回值。

//8 clear();//移除容器的所有数据

//9 erase(beg, end);//删除[beg,end)区间的数据，返回下一个数据的位置。

//10 erase(pos);//删除pos位置的数据，返回下一个数据的位置。

//11 remove(elem);//移除容器中所有与elem值匹配的元素。



void PrintList(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";

	}
	cout << endl;


}


void test01()
{
	list<int>L1;


//1 push_back(elem);//在容器尾部加入一个元素
	L1.push_back(1);
	L1.push_back(2);
	L1.push_back(3);
	L1.push_back(4);
//3 push_front(elem);//在容器开头插入一个元素
	L1.push_front(5);
	L1.push_front(6);
	L1.push_front(7);
	L1.push_front(8);

	PrintList(L1);

//2 pop_back();//删除容器中最后一个元素
	cout << "pop_back();" << endl;
	L1.pop_back();
	PrintList(L1);

//4 pop_front();//从容器开头移除第一个元素
	cout << "pop_front();" << endl;
	L1.pop_front();
	PrintList(L1);


//5 insert(pos, elem);//在pos位置插elem元素的拷贝，返回新数据的位置。
	cout<<"insert(pos, elem);" << endl;
	L1.insert(L1.begin(),114);//这样搞就是头插
	PrintList(L1);

	//使用迭代器才能插入其他指定位置：
	cout << "  使用insert + 迭代器 插入指定的位置" << endl;
	list<int>::iterator it = L1.begin();//先定义一个迭代器
	L1.insert(++it, 4441);//然后让迭代器偏移到你需要的位置。目前已知前置和后置++/--可以生效
	PrintList(L1); 

//10 erase(pos);//删除pos位置的数据，返回下一个数据的位置。
	cout<<"erase(pos);" << endl;
	it = L1.begin();//你要是不知道迭代器偏移到哪里了就直接给它赋予个初值
	L1.erase(it);
	PrintList(L1);


//11 remove(elem);//移除容器中所有与elem值匹配的元素。
	cout << "remove(elem)" << endl;
	cout << "插入10个114514" << endl;
	L1.insert(L1.begin(),10,114514);
	PrintList(L1);
	cout << "移除所有114514" << endl;
	L1.remove(114514);
	PrintList(L1);

//8 clear();//移除容器的所有数据
	cout << "clear()" << endl;
	L1.clear();
}


int main()
{
	test01();




	system("pause");
	return 0;
}