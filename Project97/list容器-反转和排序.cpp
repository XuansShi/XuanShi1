//list����-��ת������
#include <iostream>
#include<string>
#include<list>
#include<algorithm>
using namespace std;

//����ԭ�ͣ�
//reverse();   //��ת�����൱�ڰ�˳��ȫ������
//sort();     //��������



void PrintList(const list<int>& l)
{
	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;


}


void test01()
{
	list<int> L1;
	L1.push_back(10);
	L1.push_back(30);
	L1.push_back(50);
	L1.push_back(20);
	L1.push_back(40);
	cout << "��תǰ" << endl;
	PrintList(L1);

	//reverse();   //��ת�����൱�ڰ�˳��ȫ������
	cout << "reverse();   //��ת����" << endl;
	L1.reverse();
	PrintList(L1);
	 
}


void test02()
{
	list<int> L1;
	L1.push_back(10);
	L1.push_back(30);
	L1.push_back(50);
	L1.push_back(20);
	L1.push_back(40);

	cout << "L1����ǰ" << endl;
	PrintList(L1);

	//sort();     //��������
	//ע�⣺���в�֧��������ʵ�������������������ʹ�ñ�׼�㷨���������ڲ����ṩ��Ӧ���㷨
	   //sort(L1.begin(), L1.end());����������û���﷨���󣬵����޷����У�����ԣ�
	
	//����԰�sort�ĳɳ�Ա������ʹ�ã�
	L1.sort();//Ĭ��Ϊ����
	cout << "L1�����" << endl;
	PrintList(L1);
	//�������Ǵ�С�������������

	//������ṩһ���º������������ɽ���
	list<int> L2;
	L2.push_back(40);
	L2.push_back(20);
	L2.push_back(10);
	L2.push_back(30);
	L2.push_back(50);
	cout << "L2����ǰ" << endl;
	PrintList(L2);


	cout << "L2�����" << endl;
	L2.sort(myCompare);
	PrintList(L2);

}

//��������sort��ɽ������������ṩ�º�����
bool myCompare(int v1, int v2)//����������ģ����ͬ���͵Ĳ���
{
	//����   ֻ��Ҫ�� ��һ���� ���� �ڶ�����
	return v1 > v2;

	//Ȼ�����myCompare����sort������������
}

int main()
{
	test01();

	system("pause");
	return 0;
}
