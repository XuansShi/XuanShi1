//set����-��С�ͽ���
#include<iostream>
#include<set>
#include<string>
#include<algorithm>
using namespace std;

//����ԭ�ͣ�
//size();          //����������Ԫ�ص���Ŀ
//empty();        //�ж������Ƿ�Ϊ��
//swap(st);      //����������������



void PrintSet(const set<int>& s)
{
	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";

	}
	cout << endl;
}



void test01()
{
	set<int>s1;

	//set������������ֻ��insert����
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);
	PrintSet(s1); 

	if (s1.empty())
	{//empty();        //�ж������Ƿ�Ϊ��

		cout << "s1Ϊ��" << endl;
	}
	else
	{//size();          //����������Ԫ�ص���Ŀ

		cout << "s1��Ϊ��" << endl;

		cout << "s1��Ԫ�ظ���" << s1.size() << endl;
	}



	//swap(st);      //����������������
	set<int>s2;
	cout<<"����ǰ��" << endl;
	cout << "s1" << endl;
	PrintSet(s1);
	cout << "s2" << endl;
	s2.insert(100);
	s2.insert(200);
	s2.insert(300);
	PrintSet(s2);

	cout << "������" << endl;
	s1.swap(s2);
	cout << "s1" << endl;
	PrintSet(s1);
	cout << "s2" << endl;
	PrintSet(s2);

	
	
}

int main()
{
	test01();



	system("pause");
	return 0;
}
