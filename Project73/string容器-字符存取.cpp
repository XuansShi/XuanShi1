//string����-�ַ���ȡ
#include <iostream>
using namespace std;


//string�е����ַ���ȡ��ʽ�����֣�
//1 char& operator[](int n);     //ͨ��[]��ʽȡ�ַ�
//2 char& at(int n);                      //ͨ��at������ȡ�ַ�

void test01()
{
	string str = "hello";
	cout << "str = " << str << endl;

	//ȡ�ַ�
	cout << "ȡ�������ַ�" << endl;
	//1��ͨ��[]��ʽȡ�����ַ�
	for (int i = 0; i < str.size();i++)//size�������Է����ַ����ĳ���
	{
		cout << str[i] << " ";

	 }
	cout << endl;


	//2��ͨ��at������ȡ�����ַ�
	for (int i = 0; i < str.size(); i++)
	{
		cout << str.at(i) << " ";


	}
	cout << endl;



	//�޸ĵ����ַ�
	cout << "�޸ĵ����ַ�" << endl;


	//1��ͨ��[]��ʽ
	str[0] = 'x';
	cout << "str = " << str << endl;

	//2��ͨ��at����
	str.at(1) = 'x';
	cout << "str = " << str << endl;

}


int main()
{
	test01();




	system("pause");
	return 0;
}