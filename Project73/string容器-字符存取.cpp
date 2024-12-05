//string容器-字符存取
#include <iostream>
using namespace std;


//string中单个字符存取方式有两种：
//1 char& operator[](int n);     //通过[]方式取字符
//2 char& at(int n);                      //通过at方法获取字符

void test01()
{
	string str = "hello";
	cout << "str = " << str << endl;

	//取字符
	cout << "取出单个字符" << endl;
	//1、通过[]方式取单个字符
	for (int i = 0; i < str.size();i++)//size函数可以返回字符串的长度
	{
		cout << str[i] << " ";

	 }
	cout << endl;


	//2、通过at方法获取单个字符
	for (int i = 0; i < str.size(); i++)
	{
		cout << str.at(i) << " ";


	}
	cout << endl;



	//修改单个字符
	cout << "修改单个字符" << endl;


	//1、通过[]方式
	str[0] = 'x';
	cout << "str = " << str << endl;

	//2、通过at方法
	str.at(1) = 'x';
	cout << "str = " << str << endl;

}


int main()
{
	test01();




	system("pause");
	return 0;
}