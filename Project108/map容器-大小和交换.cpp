//map����-��С�ͽ���
#include<map>
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

//����ԭ�ͣ�
//size();       //����������Ԫ�ص���Ŀ
//empty();        //�ж������Ƿ�Ϊ��
//swap(st);     //����������������

void PrintMap(const map<int, int>& mp)
{
	for (map<int, int>::const_iterator it = mp.begin(); it != mp.end(); it++)
	{

		cout << "key = " << (*it).first << "value = " << it->second << endl;//��Ϊ�����Ƕ��飬�����㲻��ֻ����*it��������õ�����߼�ͷ�ķ����õ���һ���͵ڶ�������
	}
	cout << endl;


}


void test01()
{
	
	map<int, int> m1;//����map����

	m1.insert(pair<int, int>(1, 10));
	m1.insert(pair<int, int>(2, 20));
	m1.insert(pair<int, int>(3, 30));
	m1.insert(pair<int, int>(4, 40));


	map<int, int> m2;//����map����
	m2.insert(pair<int, int>(1, 100));
	m2.insert(pair<int, int>(2, 200));
	m2.insert(pair<int, int>(3, 300));
	m2.insert(pair<int, int>(4, 400));


//size();       //����������Ԫ�ص���Ŀ
	cout << "m1�е�Ԫ����Ŀ��" << m1.size() << endl;


//empty();        //�ж������Ƿ�Ϊ��
	if (m1.empty())
	{
		printf("����Ϊ��\n") ;
	}
	else
	{
		cout << "������Ϊ��" << endl;
	}


//swap(st);     //����������������
	cout << "����ǰ��" << endl;
	cout << "m1 �� " << endl;
	PrintMap(m1);
	cout << "m2 �� " << endl;
	PrintMap(m2);

	cout << "������" << endl;
	m1.swap(m2);
	cout << "m1 �� " << endl;
	PrintMap(m1);
	cout << "m2 �� " << endl;
	PrintMap(m2);
}



int main()
{
	test01();




	system("pause");
	return 0;
}
