//string����-�ַ����Ƚ�
#include <iostream>
using namespace std;

void test01()
{
	string str1 = "hello";
	string str2 = "hello";

	if (str1.compare(str2) == 0)//�Ƚϵ�ʱ���Ǵ�ǰ����һ��һ���ֱ�Ƚ�//һ�������Ƚ������ַ����Ƿ����
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