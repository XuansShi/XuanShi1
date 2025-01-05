//���ò����㷨-find_if
#include <iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

//����ԭ�ͣ�
//find_if(iterator beg, iterator end, _Pred);
  // ��ֵ����Ԫ�أ��ҵ�����ָ��λ�õ��������Ҳ������ؽ���������λ��
  // beg ��ʼ������
  // end ����������
  // _Pred ��������ν�ʣ�����bool���͵ķº�����      ��find�㷨�Ĳ�֮ͬ�����ǵ����������ɲ��Ҷ����Ϊ�˺�������



//һ�� ����������������

class GreaterFive//�������󣺷���vector�����5����
{
public:
	bool operator()(int v1)
	{
		return v1 > 5;

	}


};


void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}


	vector<int>::iterator it1 = find_if(v.begin(), v.end(), GreaterFive());//���ҵ�һ������5�Ķ�������Ӧ�ĵ�����

	if (it1 == v.end())
	{
		cout << "û�ҵ�" << endl;
	}
	else
	{
		cout << "�ҵ���" << *it1 << endl;
	}






}


class Person
{
public:
	int m_Age;
	string m_Name;

	Person(int age, string name)
	{
		this->m_Age = age;
		this->m_Name = name;


	}

	//����==�ײ�find֪����ζԱ�Person��������
	bool operator==(const Person& p)const
	{
		//��� ����� == ����� ����Ϊ����ȣ�����true�����򷵻�false
		if (this->m_Age == p.m_Age && this->m_Name == p.m_Name)
		{
			return true;
		}
		else
		{
			return false;
		}


	}



};


//���� �����Զ�����������
class LesserTwenty
{
public:
	bool operator()(Person &p)//��������С��20��Person���Ͷ���ķº�������ʲô���͵Ķ���ʹ���ʲô���ͣ�
	{
		return p.m_Age < 20;


	}


};


void test02()
{
	vector<Person> p;
	Person p1(18, "����ϣ��");
	Person p2(50008, "�� �١��ޡ�~");
	Person p3(50018, "����");

	p.push_back(p1);
	p.push_back(p2);
	p.push_back(p3);


	//��������С��20�Ķ���
	vector<Person>::iterator itp1 = find_if(p.begin(), p.end(), LesserTwenty());

	
	if (itp1 == p.end())
	{
		cout << "û�ҵ�" << endl;
	}
	else
	{
		cout << "�ҵ���" << " ���䣺 " << (*itp1).m_Age << " ������ " << (*itp1).m_Name << endl;
	}



}


int main()
{
	test01();
	test02();


	system("pause");
	return 0;
}





