//deque容器-插入和删除
#include <iostream>
#include<string>
#include<deque>

using namespace std;

//两端插入操作：
//1 push_back(elem);          //在容器尾部添加一个数据
//2 push_front(elem);        //在容器头部插入一个数据
//3 pop_back();                   //删除容器最后一个数据
//4 pop_front();                 //删除容器第一个数据


//指定位置操作：
//1 insert(pos, elem);         //在pos位置插入一个elem元素的拷贝，返回新数据的位置。

//2 insert(pos, n, elem);     //在pos位置插入n个elem数据，无返回值。

//3 insert(pos, beg, end);    //在pos位置插入[beg,end)区间的数据，无返回值。

//4 clear();                           //清空容器的所有数据

//5 erase(beg, end);             //删除[beg,end)区间的数据，返回下一个数据的位置。

//6 erase(pos);                    //删除pos位置的数据，返回下一个数据的位置。
void printDeque(const deque<int>&d)
{
	for (deque<int>::const_iterator it = d.begin();it != d.end();it++)
	{
		cout << *it << " ";

	}
	cout << endl;

}

void test01()
{
	deque<int>d1;

//1 push_back(elem);          //在容器尾部添加一个数据
	d1.push_back(114514);
	d1.push_back(10);
	d1.push_back(20);
	printDeque(d1);

//2 push_front(elem);        //在容器头部插入一个数据
	d1.push_front(5);
	d1.push_front(1);
	printDeque(d1);

//3 pop_back();                   //删除容器最后一个数据
	d1.pop_back();
	printDeque(d1);


//4 pop_front();                 //删除容器第一个数据
	d1.pop_front();
	printDeque(d1);











}


void test02()
{
deque<int>d2;
d2.push_back(10);
d2.push_back(20);
d2.push_front(100);
d2.push_front(200);
printDeque(d2);


//指定位置操作：
//1 insert(pos, elem);         //在pos位置插入一个elem元素的拷贝，返回新数据的位置。
d2.insert(d2.begin(), 1111);
printDeque(d2);
 


//2 insert(pos, n, elem);     //在pos位置插入n个elem数据，无返回值。
d2.insert(d2.begin(),2,2222);
printDeque(d2);



//3 insert(pos, beg, end);    //在pos位置插入[begin,end)区间的数据，无返回值。
deque<int>d3;
d3.insert(d3.begin(),d2.begin(), d2.end());
printDeque(d3);


//4 clear();                           //清空容器的所有数据
d3.clear();
printDeque(d3);



//6 erase(pos);              //删除pos位置的数据，返回下一个数据的位置。
 
 //如果你想删掉除了起始和结尾的其他位置：
   //方法：找一个迭代器，然后让它偏移
deque<int> ::iterator it = d2.begin();
it++;

d2.erase(it); 
printDeque(d2);


//5 erase(beg, end);             //删除[beg,end)区间的数据，返回下一个数据的位置。
d2.erase(d2.begin(), d2.end());
printDeque(d2);


}



int main()
{
	test01();
	test02();


	system("pause");
	return 0;
}