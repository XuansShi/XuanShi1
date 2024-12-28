//set容器-插入和删除
#include<iostream>
#include<set>
#include<string>
#include<algorithm>

using namespace std;

//函数原型：
//1.	insert(elem);           //在容器中插入元素。

//2.	clear();                    //清除所有元素

//3.	erase(pos);              //删除pos迭代器所指的元素，返回下一个元素的迭代器。

//4.	erase(beg, end);    //删除区间[beg,end)的所有元素 ，返回下一个元素的迭代器。

//5.	erase(elem);            //删除容器中值为elem的元素。



void PrintSet(const set<int>& s)
{
	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";

	}
	cout << endl;
}



void test01()
{
	set<int>s1;

	//1.	insert(elem);           //在容器中插入元素。
	cout << "1 insert(elem)" << endl;
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);
	PrintSet(s1);

	//3.	erase(pos);              //删除pos迭代器所指的元素，返回下一个元素的迭代器。
	cout << "3 erase(pos)" << endl;
	set<int>::iterator it = s1.begin();
	it++;
	s1.erase(it);
	PrintSet(s1);

	//4.	erase(beg, end);    //删除区间[beg,end)的所有元素 ，返回下一个元素的迭代器。
	cout << "4 erase(beg, end)" << endl;
	s1.erase(s1.begin(), s1.end());
	PrintSet(s1);

	//5.	erase(elem);            //删除容器中值为elem的元素。
	cout << "5 erase(elem)" << endl;
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);
	PrintSet(s1);

	s1.erase(10);
	PrintSet(s1);


	//2.	clear();                    //清除所有元素
	cout << "2 clear()" << endl;
	s1.clear();
	PrintSet(s1);

}


int main()
{
	test01();


	system("pause");
	return 0;
}