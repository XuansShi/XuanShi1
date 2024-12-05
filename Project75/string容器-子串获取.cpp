//string容器-子串获取
#include <iostream>
#include <string>
using namespace std;

//函数原型：
//string substr(int pos = 0, int n = npos) const;  //返回由pos开始的n个字符组成的字符串


void test01()
{
	string str = "abcdef";

	string Substr = str.substr(1, 3);

	cout << "SubStr = " << Substr << endl;
}



//更加实用的操作
void test02()
{
	string email = "hello@sina.com";

	//从邮件地址中 获取 用户名信息

	int pos = email.find('@');
	string usrName = email.substr(0, pos);
	//解析：↑直接查找@的位置，然后进行截取0~pos的部分，就可以得到@前的东西了
	cout << "用户名为：" << usrName << endl;

}



int main()
{
	test01();

	test02();

	system("pause");
	return 0;
}