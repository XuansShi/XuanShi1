#include<iostream>
using namespace std;

int main()
{
	//1.字符型变量创建方式
	char ch = 'a';

	cout << " num1 = " << ch << endl;
	//2.字符型变量所占内存大小
	cout << "char字符型变量所占内存：" << sizeof(char) << endl;

	//3、常见错误
	/*只能用单引号
	* 只能单个字符
	*/

	//4、字符型变量对应ASCII编码 
	//↓(int)ch的含义是将字符型ch转换成整形，也就是变成一个十进制的数字 比如说a是97 b是98
	//要记住的： a 97   A 65
	cout << (int)ch << endl;
	system("pause");

	return 0;
}
