//list容器-大小操作

#include <iostream>
#include <list>
#include <string>
#include <algorithm>

using namespace std;

//函数原型：
//1 size();                     //返回容器中元素的个数

//2 empty();                  //判断容器是否为空

//3 resize(num);       //重新指定容器的长度为num，若容器变长，则以默认值填充新位置。

                         //如果容器变短，则末尾超出容器长度的元素被删除。

//4 resize(num, elem);   //重新指定容器的长度为num，若容器变长，则以elem值填充新位置。

                         //如果容器变短，则末尾超出容器长度的元素被删除。

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
	list<int>L2;
	list<int>L3;
	list<int>L4;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	L1.push_back(50);
	L1.push_back(60);



	//2 empty();                            //判断容器是否为空

	if (L1.empty())
	{
		cout << "判断结果为真，此时容器为空" << endl;

	}
	else
	{
		cout << "判断结果为假，此时容器不为空" << endl;
		//1 size();            //返回容器中元素的个数
		cout << "L1元素个数为: "<<L1.size()  << endl;

	}


//3 resize(num);       //重新指定容器的长度为num，若容器变长，则以默认值填充新位置
						 //如果容器变短，则末尾超出容器长度的元素被删除。
	cout << " 3 resize(num)   指定长了 " << endl;
	L1.resize(10);
	PrintList(L1);

	cout << " 3 resize(num)   指定短了 " << endl;
	L1.resize(3);
	PrintList(L1);

//4 resize(num, elem);   //重新指定容器的长度为num，若容器变长，则以elem值填充新位置。
						 //如果容器变短，则末尾超出容器长度的元素被删除。

	cout<<" 4 resize(num, elem)   指定长了 " << endl;
	L1.resize(20,1145);
	PrintList(L1);



}

int main()
{
	test01();



	system("pause");
	return 0;
}