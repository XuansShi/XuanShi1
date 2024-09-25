#include <iostream>
using namespace std;
#include <string>

int main()
{
	//1、C风格的字符串
	//注意1：char 字符串名字 []       ←要用中括号
	//注意2： 等号后要用双引号包住字符串

	char str1[] = "hello world";

	//2、C++风格的字符串 
	string str2 = "hello world";
	//它虽然简单，但是不能直接输出，还要包含一个头文件
	//头文件就是 行1 写的东西
	//要在开头加上： #include <string>  
	//↑表示用C++风格字符串的时候要包含这个头文件
//注意：要有一个头文件 #include <string>  
	cout << str1 << endl;
	cout << str2 << endl;

	system("pause");

	return 0;
}


