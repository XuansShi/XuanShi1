//set容器-查找和统计
#include<iostream>
#include<set>
#include<string>
#include<algorithm>

using namespace std;

//函数原型：
//1  find(key);   //查找key是否存在,若存在，返回该键的元素的迭代器；若不存在，返回set.end();

//2  count(key);  //统计key的元素个数（对于set，这个值是0或1；对于multiset则为非负整数）





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
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);
	PrintSet(s1);

//1  find(key);   //查找key是否存在,若存在，返回该键的元素的迭代器；若不存在，返回set.end();
	int elem1 = 10;
	cout << "我要找 " << elem1 << endl;
	set<int>::iterator pos =s1.find(elem1);
	//判断是否找到
	if (pos != s1.end())
	{
		cout << "找到 "<<*pos<<" 辣 " << endl;

	}
	else
	{
		cout << "未找到" <<elem1<< endl;
	}



//2  count(key);  //统计key的元素个数（对于set，这个值是0或1；对于multiset则为非负整数）
	int num = 0;
	int elem2 = 10;
	num = s1.count(elem2);
	cout << "这里有 " << num << " 个" << elem2 << endl;



	
}


int main()
{
	test01();


	system("pause");
	return 0;
}
