//set����-����͸�ֵ
#include<iostream>
#include<set>
#include<string>
#include<algorithm>
using namespace std;

//���죺
//set<T> st;                //Ĭ�Ϲ��캯��
//set(const set& st);       //�������캯��

//��ֵ��
//set& operator=(const set& st);    //���صȺŲ�����

void PrintSet(const set<int>& s)
{
	for (set<int>::const_iterator it = s.begin();it != s.end();it++)
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
    s1.insert(30);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);
	PrintSet(s1); //��ӡ�����10 20 30 40  �ĸ�����֤��set�������Զ�������Ԫ�ز����ظ�

//���죺
	//set<T> st;                //Ĭ�Ϲ��캯����
	//set(const set& st);       //�������캯��
	
	//��������
	set<int>s2(s1);
	PrintSet(s2);

//��ֵ��
    //set& operator=(const set& st);    //���صȺŲ�����

	set<int>s3;
	s3 = s2;
	PrintSet(s3);

}

int main()
{
	test01();



	system("pause");
	return 0;
}