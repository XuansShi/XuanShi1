//string容器 - 赋值操作

//赋值的函数原型：
//两种方法：等号= 或者 assign成员函数
//1 string& operator=(const char* s);             //char*类型字符串 赋值给当前的字符串
//2 string& operator=(const string& s);         //把字符串s赋给当前的字符串
//3 string& operator=(char c);                          //字符赋值给当前的字符串
//4 string& assign(const char* s);                  //把字符串s赋给当前的字符串
//5 string& assign(const char* s, int n);     //把字符串s的前n个字符赋给当前的字符串
//6 string& assign(const string& s);              //把字符串s赋给当前字符串
//7 string& assign(int n, char c);                  //用n个字符c赋给当前字符串

#include <iostream>
#include <string>
using namespace std;

void test01()
{
	// 1 char*类型字符串 赋值给当前的字符串
	string str1 = "凯文";
	cout << "str1 = " << str1 << endl;


	// 2 把字符串s赋给当前的字符串（类似于拷贝构造）
	string str2 = str1;
	cout << "str2 = " << str2 << endl;


	// 3 字符赋值给当前的字符串
	//string str3 = 'a';//会报错 //现在不支持直接字符转化到字符串
	string str3;
	str3 = 'E';//这样分两步写才没问题
	cout << "str3 = " << str3 << endl;


	// 4 把字符串s赋给当前的字符串
	string str4;
	str4.assign("阿波尼亚");//这个也必须分开写
	cout << "str4 = " << str4 << endl;


	// 5 把字符串s的前n个字符赋给当前的字符串
	string str5;
	str5.assign("Eden", 2);
	cout << "str5 = " << str5 << endl;


	// 6 把字符串s赋给当前字符串
	string str6;
	str6.assign(str5);
	cout << "str6 = " << str6 << endl;


	// 7 用n个字符c赋给当前字符串
	string str7;
	str7.assign(5,'v');
	cout << "str7 = " << str7 << endl;
}


int main()
{

	test01();


	system("pause");
	return 0;
}