#include <iostream>
using namespace std;
#include <string>

int main()
{
	//1��C�����ַ���
	//ע��1��char �ַ������� []       ��Ҫ��������
	//ע��2�� �Ⱥź�Ҫ��˫���Ű�ס�ַ���

	char str1[] = "hello world";

	//2��C++�����ַ��� 
	string str2 = "hello world";
	//����Ȼ�򵥣����ǲ���ֱ���������Ҫ����һ��ͷ�ļ�
	//ͷ�ļ����� ��1 д�Ķ���
	//Ҫ�ڿ�ͷ���ϣ� #include <string>  
	//����ʾ��C++����ַ�����ʱ��Ҫ�������ͷ�ļ�
//ע�⣺Ҫ��һ��ͷ�ļ� #include <string>  
	cout << str1 << endl;
	cout << str2 << endl;

	system("pause");

	return 0;
}


