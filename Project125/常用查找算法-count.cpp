// ���ò����㷨 - count
#include <iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

//����ԭ�ͣ�
//count(iterator beg, iterator end, value);
	// ͳ��Ԫ�س��ִ���������һ��int
	// beg ��ʼ������
	// end ����������
	// value ͳ�Ƶ�Ԫ��



//1��������������
void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);

	}

	for (int i = 10; i >0; i--)
	{
		v.push_back(i);

	}

	int result = count(v.begin(), v.end(), 9);
	cout << "9��Ԫ�ظ���Ϊ" << result << endl;
	


}




//2���Զ�����������
class Person
{
public:
	string m_Name;
	int m_Age;

	Person(string name,int age)
	{
		this->m_Age = age;
		this->m_Name = name;

	}

	bool operator==(const Person& p)const //����==���ж������Ƿ����
	{//�����const��ǿ����Ҫ��ӵġ�
		if (this->m_Age == p.m_Age)
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

	Person p("�����", 30);
	int num = count(v.begin(), v.end(), p);

	cout << "��" << p.m_Name << "������ͬ����Ա������" <<num<< endl;



}



int main()
{
	test01();
	test02();


	system("pause");
	return 0;
}
