#include<iostream>
using namespace std;

int main()
{
	//1.�ַ��ͱ���������ʽ
	char ch = 'a';

	cout << " num1 = " << ch << endl;
	//2.�ַ��ͱ�����ռ�ڴ��С
	cout << "char�ַ��ͱ�����ռ�ڴ棺" << sizeof(char) << endl;

	//3����������
	/*ֻ���õ�����
	* ֻ�ܵ����ַ�
	*/

	//4���ַ��ͱ�����ӦASCII���� 
	//��(int)ch�ĺ����ǽ��ַ���chת�������Σ�Ҳ���Ǳ��һ��ʮ���Ƶ����� ����˵a��97 b��98
	//Ҫ��ס�ģ� a 97   A 65
	cout << (int)ch << endl;
	system("pause");

	return 0;
}
