//string容器-构造函数
#include <iostream> 
using namespace std;
#include <string>

//构造函数原型：
   //string();                       //创建一个空的字符串 例如: string str;
   //string(const char* s);          //使用字符串s初始化
   //string(const string& str);      //使用一个string对象初始化另一个string对象
   //string(int n, char c);          //使用n个字符c初始化 



void test01()
{
	//1 默认构造（无参构造）
	string s1;

	//2 使用字符串s初始化
	const char* str = "hello";
	string s2(str);
	cout << "s2 = " << s2 << endl;



	//3 使用一个string对象初始化另一个string对象（拷贝构造）
	string s3(s2);
	cout << "s3 = " << s3 << endl;


	//4 使用n个字符c初始化 
	string s4(10, 'a');//10个a
	cout << "s4 = " << s4 << endl;




}

int main()
{

	test01();

	system("pause");
	return 0;
}