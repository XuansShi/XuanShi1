//vector����-���ݴ�ȡ
#include<iostream>
#include <vector>
#include <string>
using namespace std;

//����ԭ�ͣ�
//1 at(int idx);      //��������idx��ָ������
//2 operator[idx];        //��������idx��ָ������
//3 front();             //���������е�һ������Ԫ��
//4 back();              //�������������һ������Ԫ��

//����ʹ�õ��������㻹����ʹ����Щ��Ա�������õ�����Ҫ�Ĳ���

void test01()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)//ʹ��for+β�巨Ѹ�ٲ�������
	{
		v1.push_back(i);
	}



	//1 at(int idx);      //����at��������idx��ָ�������е�����
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1.at(i) << " ";
	}
	cout << endl;



	//2 operator[idx];   //��������idx��ָ�������е�����
		
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;


	//3 front();             //���������е�һ������Ԫ��
	cout << "��һ��Ԫ��Ϊ" << v1.front() << endl;



    //4 back();              //�������������һ������Ԫ��
	cout << "���һ��Ԫ��Ϊ" << v1.back() << endl;

}

int main()
{
	test01();
	system("pause");
	return 0;
}