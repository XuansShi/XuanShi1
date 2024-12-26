//list容器-反转和排序
#include <iostream>
#include<string>
#include<list>
#include<algorithm>
using namespace std;

//函数原型：
//reverse();   //反转链表，相当于把顺序全反过来
//sort();     //链表排序



void PrintList(const list<int>& l)
{
	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;


}


void test01()
{
	list<int> L1;
	L1.push_back(10);
	L1.push_back(30);
	L1.push_back(50);
	L1.push_back(20);
	L1.push_back(40);
	cout << "反转前" << endl;
	PrintList(L1);

	//reverse();   //反转链表，相当于把顺序全反过来
	cout << "reverse();   //反转链表" << endl;
	L1.reverse();
	PrintList(L1);
	 
}


void test02()
{
	list<int> L1;
	L1.push_back(10);
	L1.push_back(30);
	L1.push_back(50);
	L1.push_back(20);
	L1.push_back(40);

	cout << "L1排序前" << endl;
	PrintList(L1);

	//sort();     //链表排序
	//注意：所有不支持随机访问迭代器的容器，不可以使用标准算法，但是其内部会提供对应的算法
	   //sort(L1.begin(), L1.end());所以这玩意没有语法错误，但是无法运行，你可以：
	
	//你可以把sort改成成员函数来使用：
	L1.sort();//默认为升序
	cout << "L1排序后" << endl;
	PrintList(L1);
	//排序结果是从小到大的有序数列

	//你可以提供一个仿函数来把排序变成降序：
	list<int> L2;
	L2.push_back(40);
	L2.push_back(20);
	L2.push_back(10);
	L2.push_back(30);
	L2.push_back(50);
	cout << "L2排序前" << endl;
	PrintList(L2);


	cout << "L2排序后" << endl;
	L2.sort(myCompare);
	PrintList(L2);

}

//如果你想把sort变成降序排序，这里提供仿函数：
bool myCompare(int v1, int v2)//传入两个与模板相同类型的参数
{
	//降序   只需要让 第一个数 大于 第二个数
	return v1 > v2;

	//然后你把myCompare放在sort函数的括号里
}

int main()
{
	test01();

	system("pause");
	return 0;
}
