//�ļ�����-�ı��ļ�-д�ļ�
#include <iostream>
#include <fstream>
using namespace std;

void test01() 
{
	//1.����ͷ�ļ�

	//2.����������

	ofstream ofs;

	//3.ָ���򿪷�ʽ

	ofs.open("text.txt", ios::out);

	//4��д����
	ofs << "����������" << endl;
	ofs << "�Ա���" << endl;
	ofs << "���䣺18" << endl;



}


int main()
{

	test01();

	system("pause");
	return 0;
}