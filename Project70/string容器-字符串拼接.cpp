//string容器-字符串拼接
  //方法：
    //一、使用string内部的运算符重载
    //二、使用成员函数append


//函数原型：
//1 string& operator+=(const char* str);                   //重载+=操作符
//2 string& operator+=(const char c);                         //重载+=操作符
//3 string& operator+=(const string& str);                //重载+=操作符
//4 string& append(const char *s);                                //把字符串s连接到当前字符串结尾
//5 string& append(const char *s, int n);                 //把字符串s的前n个字符连接到当前字符串结尾
//6 string& append(const string &s);                           //同operator+=(const string& str)
//7 string& append(const string &s, int pos, int n);//字符串s中从pos开始的n个字符连接到字符串结尾



#include <iostream>
#include <string>
using namespace std;

void test01()
{
	//1 string& operator+=(const char* str);                   //重载+=操作符
	cout << "1" << endl;
	string str1 = "凯文";
	str1 += " 救世 ";
	cout << "str1 = " << str1 << endl;

	

	//2 string& operator+=(const char c);                         //重载+=操作符
	cout << "2" << endl;
	str1 += ' - ';
	cout << "str1 = " << str1 << endl;



	//3 string& operator+=(const string& str);                //重载+=操作符
	cout << "3" << endl;
	string str2 = " 王剑";
	str1 += str2;
	cout << "str1 = " << str1 << endl;


	//4 string& append(const char *s);                                //把字符串s连接到当前字符串结尾
	cout << "4" << endl;
	string str3 = "爱莉希雅";
	str3.append(" 真我 ");
	cout << "str3 = " << str3 << endl;



	//5 string& append(const char *s, int n);                 //把字符串s的前n个字符连接到当前字符串结尾
	cout << "5" << endl;
	str3.append("无暇之人", 4);//注意中文实际上占两个字符，所以截取“无暇”需要填“4”
	cout << "str3 = " << str3 << endl;


	//6 string& append(const string &s);                           //同operator+=(const string& str)
	cout << "6" << endl;
	string str4 = "人之律者";
	str3.append(str4);
	cout << "str3 = " << str3 << endl;


	//7 string& append(const string &s, int pos, int n);//字符串s中从pos开始的n个字符连接到字符串结尾
	cout << "7" << endl;
	str3.append(str4, 0, 2);//从str4的0号位（“人”字）截取2个字符//第一个参数是截取哪个字符串，第二个参数是从哪个位置截取，第三个参数是截取多少个
	cout << "str3 = " << str3 << endl;

}
//注意中文实际上占两个字符



int main()
{
		
	test01();


	system("pause");
	return 0;
}