//P246 ���ò����㷨-count_if
#include <iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

//����ԭ�ͣ�
//count_if(iterator beg, iterator end, _Pred);
	// ������ͳ��Ԫ�س��ִ���
	// beg ��ʼ������
	// end ����������
	// _Pred ν��




//1��������������
class Greater20//�ṩ ���Ҵ���20��Ԫ�� �ķº���
{
public:
	bool operator()(int val)
	{
		return val > 20;

	}




};

void test01()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	v.push_back(60);

	int num = count_if(v.begin(), v.end(), Greater20());

	cout << "����20��Ԫ�ظ��� = " << num << endl;

}




//2���Զ�����������
class Person
{
public:
	string m_Name;
	int m_Age;

	Person(string name, int age)
	{
		this->m_Age = age;
		this->m_Name = name;

	}
};

class  PersonGreater35
{
public:
	bool operator()(const Person& p)const
	{
		if (p.m_Age > 35)
		{
			return true;
		}
		else
		{
			return false;
		}

	}


};

void test02()
{
	vector<Person> v;
	Person p1("����", 35);
	Person p2("����", 35);
	Person p3("�ŷ�", 35);
	Person p4("����", 30);
	Person p5("�ܲ�", 40);


	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);


	int num = count_if(v.begin(), v.end(), PersonGreater35());
	cout << "�������35���� " << num << "��" << endl;


}



int main()
{
	test01();
	test02();


	system("pause");
	return 0;
}
