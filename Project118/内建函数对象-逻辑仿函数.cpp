//�ڽ���������-�߼��º���
#include<iostream>
#include<string>
#include<algorithm>
#include<functional>//�ڽ���������ͷ�ļ�
#include<vector>

using namespace std;

//����ԭ�ͣ�
//1.template<class T> bool logical_and < T>   //�߼���
//2.template<class T> bool logical_or < T>    //�߼���
//3.template<class T> bool logical_not<T>     //�߼���


void PrintVector(const vector<bool>& v)
{
	for (vector<bool>::const_iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";

	}

	cout << endl;
}


void test01()
{

	vector<bool>v;
	v.push_back(true);
	v.push_back(false);
	v.push_back(false);
	v.push_back(true);
	v.push_back(true);
	PrintVector(v);


	cout << "�����߼��ǣ�������v���˵�����v2�У�����ִ��ȡ��������" << endl;
	vector<bool>v2;
	v2.resize(v.size());//����v2�մ�����û�пռ䣬Ӧ����v�Ĵ�С����ָ��v2������

	  //���� transform���� �㷨��v�е�Ԫ�ذᵽv2��
	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());
	PrintVector(v2);
		  /*transform�Ĳ�����
		  ��һ���������ڶ��������� ����������v�ĵ�����
		  ������������ ���˵�������v2�ĵ�����
		  ���ĸ��������Ƿº���*/



}

int main()
{
	test01();


	system("pause");
	return 0;
}


