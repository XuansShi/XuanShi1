//vector容器-容量和大小

//函数原型：
//1 empty();                  //判断容器是否为空。为空返回true

//2 capacity();               //容器的容量

//3 size();                   //返回容器中元素的个数；注意capacity>=size

//4 resize(int num);          //重新指定容器的长度为num，若容器变长，则以默认值填充新位置;若容器变短，则末尾超出容器长度的元素被删除。

//5 resize(int num, elem);    //重新指定容器的长度为num，若容器变长，则以elem值填充新位置;若容器变短，则末尾超出容器长度的元素被删除

#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int>&v)//?:为什么要用引用的方式传入变量？ 1为了避免重载冲突
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)//没有细讲迭代器的使用
	{
		cout << *it << " ";

	}
	cout<<endl;

}



void test01()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);



	}
	printVector(v1);



	//1 empty();                  //判断容器是否为空。为空返回true
	if(v1.empty())//条件为真代表容器为空
	{
		cout << "v1容器为空" << endl;
	}
	else
	{
		cout << "v1容器不为空" << endl;
//2 capacity();               //容器的容量
		cout << "v1容器的容量为："<<v1.capacity() << endl;
//3 size();                   //返回容器中元素的个数；capacity>=size
		cout << "v1容器的大小为：" << v1.size() << endl;

	}

//4 resize(int num);          //重新指定容器的长度为num，若容器变长，则以默认值填充新位置;若容器变短，则末尾超出容器长度的元素被删除。
	cout << "4 resize(int num); " << endl;
	v1.resize(15);//重新指定长度为15
	printVector(v1);//新位置（或者没有赋值的位置）会用默认值0输出


//5 resize(int num, elem);    //重新指定容器的长度为num，若容器变长，则以elem值填充新位置;若容器变短，则末尾超出容器长度的元素被删除
	cout << "5 resize(int num, elem);" << endl;
	v1.resize(20,100);//利用重载的版本可以指定默认的填充值（此处为20）
	printVector(v1);//新位置都用100来填充

	//指定使长度变短：
	cout << "指定使长度变短：" << endl;
	v1.resize(7);
	printVector(v1);//超出的部分会被删掉

}


int main()
{
	test01();

	system("pause");
	return 0;
}