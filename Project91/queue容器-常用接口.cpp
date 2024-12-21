//queue����-���ýӿ�
#include<iostream>
#include<queue>
#include<algorithm>
#include<string>

using namespace std;

//���캯����
//1 queue<T> que;                 //queue����ģ����ʵ�֣�queue�����Ĭ�Ϲ�����ʽ
//2 queue(const queue & que); `            //�������캯��

//��ֵ������
//queue& operator=(const queue& que);           //���صȺŲ�����

//���ݴ�ȡ��
//1 push(elem);                //����β���Ԫ��
//2 pop();                     //�Ӷ�ͷ�Ƴ���һ��Ԫ��
//3 back();                    //�������һ��Ԫ��
//4 front();                    //���ص�һ��Ԫ��

//��С������
//1 empty();            //�ж϶�ջ�Ƿ�Ϊ��
//2 size();               //����ջ�Ĵ�С

class Person
{
public:
	string m_Name;
	int m_Age;

	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;

	}

};


void test01()
{
	//������������
	queue<Person>q;

	//׼������
	Person p1("��ɮ", 30);
	Person p2("�����", 510);
	Person p3("��˽�", 520);
	Person p4("ɳ����", 530);


	//���
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);

	cout << "����ǰ�����д�СΪ��" << q.size() << endl;

	//�ж�ֻҪ���в�Ϊ�գ��鿴��ͷ����β
	while (!q.empty())
	{
		//�鿴��ͷ
		cout << "��ͷԪ�ء���������" << q.front().m_Name << "    ���䣺" << q.front().m_Age << endl;

		//�鿴��β
		cout << "��βԪ�ء���������" << q.back().m_Name << "    ���䣺" << q.back().m_Age << endl;

		//����
		q.pop();


	}
	cout << "���Ӻ󣬶��д�СΪ��" << q.size() << endl;
}


int main()
{
	test01();



	system("pause");
	return 0;
}

