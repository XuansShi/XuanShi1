//vector容器-互换容器
#include <iostream>
#include <vector>
using namespace std;


void printVector(vector<int>&v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";


	}
	cout << endl;

}

//swap(vec);  // 将vec与本身的元素互换

//1、基本使用
void test01()
{
	cout << "交换前" << endl;
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);

	}

	printVector(v1);//v1里的元素是0~9


	
	vector<int> v2;
	for (int i = 10; i > 0; i--)
	{
		v2.push_back(i);

	}
	printVector(v2);




	cout << "交换后" << endl;
	v1.swap(v2);
	printVector(v1);
	printVector(v2);
	
}




//2、实际用途
  //巧用swap可以收缩内存空间
void test02()
{
	vector<int> v;
	for(int i = 0;i<100000;i++)
	{
		v.push_back(i);
	}
	cout << "v的容量为: " << v.capacity() << endl;
	cout << "v的大小为: " << v.size() << endl;
	  //这里打印后发现 容量 比 大小 还要大一点点 

	v.resize(3);//重新指定大小
	cout << "v的容量为: " << v.capacity() << endl;
	cout << "v的大小为: " << v.size() << endl;
	   //这里的打印结果：容量不变，大小变为3
	     //这样就很浪费空间，所以可以巧用swap收缩


	//巧用swap收缩内存:
	vector<int>(v).swap(v);
	  //↑代码解析：
	    //vector<int>(v)  这玩意是匿名对象，相当于利用对象v调用拷贝构造函数创建了一个没有名字的对象，使用v目前所用的size来初始化该匿名对象的大小，所以该匿名对象的初始size = capacity = 3，
	    //然后swap(v)会做容器的交换，使得v的size=capacity=匿名对象的size=匿名对象的capacity=3
	    //然后由于匿名对象的特点（当前行执行完后会自动回收匿名对象），匿名对象的这块内存就被编译器回收了
	cout << "v的容量为: " << v.capacity() << endl;
	cout << "v的大小为: " << v.size() << endl;
	  //这样容量和大小就都变为3了（等于较小的那个了）


}



int main()
{
	cout << "1、基本用法" << endl;
	test01();

	cout << "2、实际用途" << endl;
	test02();



	system("pause");
	return 0;
}