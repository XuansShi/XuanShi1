//string����-���캯��
#include <iostream> 
using namespace std;
#include <string>

//���캯��ԭ�ͣ�
   //string();                       //����һ���յ��ַ��� ����: string str;
   //string(const char* s);          //ʹ���ַ���s��ʼ��
   //string(const string& str);      //ʹ��һ��string�����ʼ����һ��string����
   //string(int n, char c);          //ʹ��n���ַ�c��ʼ�� 



void test01()
{
	//1 Ĭ�Ϲ��죨�޲ι��죩
	string s1;

	//2 ʹ���ַ���s��ʼ��
	const char* str = "hello";
	string s2(str);
	cout << "s2 = " << s2 << endl;



	//3 ʹ��һ��string�����ʼ����һ��string���󣨿������죩
	string s3(s2);
	cout << "s3 = " << s3 << endl;


	//4 ʹ��n���ַ�c��ʼ�� 
	string s4(10, 'a');//10��a
	cout << "s4 = " << s4 << endl;




}

int main()
{

	test01();

	system("pause");
	return 0;
}