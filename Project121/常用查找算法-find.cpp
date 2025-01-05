//���ò����㷨 - find
#include <iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

//�㷨��飺
//1.	find              //����Ԫ��
//2.	find_if           //����������Ԫ��
//3.	adjacent_find     //���������ظ�Ԫ��
//4.	binary_search     //���ֲ��ҷ�
//5.	count             //ͳ��Ԫ�ظ���
//6.	count_if          //������ͳ��Ԫ�ظ���


//����������������
void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	//1.	find              //����Ԫ��
	vector<int>::iterator it1 = find(v.begin(), v.end(), 3);//����һ��3����Ӧ�ĵ�����
	  //�ҵ��˷��ض�Ӧ�ĵ�������û�ҵ�����ĩβ������

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
	bool operator==(const Person &p)const
	{
		//��� ����� == ����� ����Ϊ����ȣ�����true�����򷵻�false
		if(this->m_Age == p.m_Age && this->m_Name == p.m_Name)
		{
			return true;
		}
		else
		{
			return false;
		}


	}



};
//�����Զ�����������
void test02()
{
	vector<Person> p;
	Person p1(18, "����ϣ��");
	Person p2(50008, "�� �١��ޡ�~");
	Person p3(50018, "����");
	
	p.push_back(p1);
	p.push_back(p2);
	p.push_back(p3);

	vector<Person>::iterator itp1 = find(p.begin(), p.end(), p2);
	
	if (itp1 == p.end())
	{
		cout << "û�ҵ�" << endl;
	}
	else
	{
		cout << "�ҵ���" << " ���䣺 "<<(*itp1).m_Age<<" ������ "<<(*itp1).m_Name << endl;
	}

	/*
	����
	������	����	˵��	��Ŀ	�ļ�	��	��ֹ��ʾ״̬	��ϸ��Ϣ
		����	C2676	�����ơ� == ��:��Person����������������Ԥ����������ɽ��յ����͵�ת��	Project121	C : \Program Files\Microsoft Visual Studio\2022\Enterprise\VC\Tools\MSVC\14.40.33807\include\xutility	5941
	
	����Ϊ�� itp1 == p.end() ��
	����� == 
	��������֪����ô�Ƚϣ�������Ҫ���� == ��


	*/
	



}


int main()
{
	test01();
	test02();



	system("pause");
	return 0;
}