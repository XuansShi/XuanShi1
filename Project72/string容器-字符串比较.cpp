//string容器-字符串比较
#include <iostream>
using namespace std;

void test01()
{
	string str1 = "hello";
	string str2 = "hello";

	if (str1.compare(str2) == 0)//比较的时候是从前往后一个一个分别比较//一般用来比较两个字符串是否相等
	{
		cout << "str1 = str2" << endl;
	}
	else if(str1.compare(str2) == 1)
	{
		cout << "str1 > str2" << endl;
	}
	else if (str1.compare(str2) == -1)
	{
		cout << "str1 < str2" << endl;
	}

}

int main()
{

	test01();


	system("pause");
	return 0;
}