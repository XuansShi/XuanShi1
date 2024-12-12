//vector容器-预留空间
#include <iostream>
#include <vector>

using namespace std;

//函数原型：
//reserve(int len);//容器预留len个元素长度，预留位置不初始化，元素不可访问。

void test01()
{
	vector<int> v;

	int num = 0;//统计尾插过程中内存开辟的次数

	int* p = NULL;


	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);//在尾插的过程中，必然会多次重新分配内存
		
		//统计开辟次数的算法：
		if (p != &v[0])
		{
			p = &v[0];
			num++;
		}
		//算法解析：当p不指向v的首地址时，计数+1
		  //由于重新分配内存时，会划分一块新的区域，导致原地址失效，所以只要分配了，那么p就不会指向v的首地址了，然后就可以让计数加1，以此达成计数的要求

	}
	cout << "开辟次数num = " << num << endl;

	//输出结果为30，显然让电脑自行进行30次还是太麻烦了，可以用reserve：
	  //把这一行
	   // v.reserve(100000);
	    // 放在定义容器的后面即可（见test02）


}

void test02()
{
	vector<int> v;

	v.reserve(100000);
	int num = 0;//统计尾插过程中内存开辟的次数

	int* p = NULL;


	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);//在尾插的过程中，必然会多次重新分配内存

		//统计开辟次数的算法：
		if (p != &v[0])
		{
			p = &v[0];
			num++;
		}
		//算法解析：当p不指向v的首地址时，计数+1
		  //由于重新分配内存时，会划分一块新的区域，导致原地址失效，所以只要分配了，那么p就不会指向v的首地址了，然后就可以让计数加1，以此达成计数的要求

	}
	cout << "开辟次数num = " << num << endl;




}

int main()
{
	cout << "一、 让电脑自行计算" << endl;
	test01();
	
	cout << "二、 使用reserve" << endl;
	test02();

	system("pause");
	return 0;
}