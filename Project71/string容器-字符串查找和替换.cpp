//string容器-字符串查找和替换

#include <iostream>
#include <string>
using namespace std;

//因为重载类型太多了，只挑几个讲

// 一、查找
//1.	int find(const string & str, int pos = 0) const;              //查找str第一次出现位置,从pos开始查找

//2.	int find(const char* s, int pos = 0) const;                      //查找s第一次出现位置,从pos开始查找

//3.	int find(const char* s, int pos, int n) const;                //从pos位置查找s的前n个字符第一次位置

//4.	int find(const char c, int pos = 0) const;                        //查找字符c第一次出现位置
//
//5.	int rfind(const string & str, int pos = npos) const;      //查找str最后一次位置,从pos开始查找

//6.	int rfind(const char* s, int pos = npos) const;              //查找s最后一次出现位置,从pos开始查找

//7.	int rfind(const char* s, int pos, int n) const;              //从pos查找s的前n个字符最后一次位置

//8.	int rfind(const char c, int pos = 0) const;                        //查找字符c最后一次出现位置

void test01()
{
	//find


	string str1 = "abcdefgde";

	int pos1 =  str1.find("de");//find的返回值是int类型，返回第一次找到的位置
	cout << "pos = " << pos1 << endl;//打印的结果是3，指的是从0开始索引的3号位置（也就是“d”第一次出现的地方）
	
	int pos2 = str1.find("df");
	cout << "pos = " << pos2 << endl;//找不到则结果返回-1

	//所以一般这样用:
	if (pos2 == -1)
	{
		cout << "没找到" << endl;

	}
	else
	{
		cout << "找到了，下标是 pos = " << pos2 << endl;
	}

	//rfind与find的区别：
	  //rfind是从右往左查找（序号顺序还是最左边是0）
	  //find是从左往右

	int pos3 = str1.rfind("de");
	cout << "pos3 = " << pos3 << endl;
	//所以这里的结果是7


 }





// 二、替换
//1 string & replace(int pos, int n, const string & str);        //替换从pos开始n个字符为字符串str

//2 string & replace(int pos, int n, const char* s);                  //替换从pos开始的n个字符为字符串s


void test02()
{
	string str1 = "abcdefg";
	cout << "替换前 str1 = " << str1 << endl;
	str1.replace(1, 3, "1234");//替换从1号位到3号位的字符
	cout << "替换后 str1 = " << str1 << endl;
	//输出结果是a1234efg
	  //说明把“bcd”3个字符替换成了“1234”4个字符


}





int main()
{
	test01();
	test02();

	system("pause");
	return 0;
}