//set����-���Һ�ͳ��
#include<iostream>
#include<set>
#include<string>
#include<algorithm>

using namespace std;

//����ԭ�ͣ�
//1  find(key);   //����key�Ƿ����,�����ڣ����ظü���Ԫ�صĵ��������������ڣ�����set.end();

//2  count(key);  //ͳ��key��Ԫ�ظ���������set�����ֵ��0��1������multiset��Ϊ�Ǹ�������





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
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);
	PrintSet(s1);

//1  find(key);   //����key�Ƿ����,�����ڣ����ظü���Ԫ�صĵ��������������ڣ�����set.end();
	int elem1 = 10;
	cout << "��Ҫ�� " << elem1 << endl;
	set<int>::iterator pos =s1.find(elem1);
	//�ж��Ƿ��ҵ�
	if (pos != s1.end())
	{
		cout << "�ҵ� "<<*pos<<" �� " << endl;

	}
	else
	{
		cout << "δ�ҵ�" <<elem1<< endl;
	}



//2  count(key);  //ͳ��key��Ԫ�ظ���������set�����ֵ��0��1������multiset��Ϊ�Ǹ�������
	int num = 0;
	int elem2 = 10;
	num = s1.count(elem2);
	cout << "������ " << num << " ��" << elem2 << endl;



	
}


int main()
{
	test01();


	system("pause");
	return 0;
}
