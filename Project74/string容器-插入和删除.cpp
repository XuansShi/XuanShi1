//string����-�����ɾ��
#include <iostream>
using namespace std;
#include <string>

//����ԭ�ͣ�
//1 string& insert(int pos, const char* s);            //�����ַ���
//2 string& insert(int pos, const string& str);        //�����ַ���
//3 string& insert(int pos, int n, char c);            //��ָ��λ�ò���n���ַ�c
//4 string& erase(int pos, int n = npos);              //ɾ����Pos��ʼ��n���ַ� 


void test01()
{
	string str = "hello";

	//����
	str.insert(1, "111");//��str��1��λ���롰111��
	cout << "str = " << str << endl;//������h111ello

	//ɾ��
	str.erase(1,3);//��1��λ��ʼɾ��3���ַ�
	  //��һ�������ǿ�ʼλ�ã��ڶ��������ǽ���λ��


	//ע�⣺�±��0��ʼ����
}

int main()
{
	test01();



	system("pause");
	return 0;
}