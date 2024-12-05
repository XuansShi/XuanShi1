//string容器-插入和删除
#include <iostream>
using namespace std;
#include <string>

//函数原型：
//1 string& insert(int pos, const char* s);            //插入字符串
//2 string& insert(int pos, const string& str);        //插入字符串
//3 string& insert(int pos, int n, char c);            //在指定位置插入n个字符c
//4 string& erase(int pos, int n = npos);              //删除从Pos开始的n个字符 


void test01()
{
	string str = "hello";

	//插入
	str.insert(1, "111");//在str的1号位插入“111”
	cout << "str = " << str << endl;//结果输出h111ello

	//删除
	str.erase(1,3);//从1号位开始删掉3个字符
	  //第一个参数是开始位置，第二个参数是结束位置


	//注意：下标从0开始索引
}

int main()
{
	test01();



	system("pause");
	return 0;
}