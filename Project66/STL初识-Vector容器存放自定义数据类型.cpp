//STL��ʶ-Vector��������Զ�����������
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

class Person
{
   public:
	   Person(string name, int age)
	   {
		   m_Name = name;
		   m_Age = age ;


	   }
	   string m_Name;
	   int m_Age;


};


//һ��
void test01()
{
	vector<Person> v;

	Person p1("������",16);
	Person p2("ѿ��", 18);
	Person p3("�������", 15);
	Person p4("����", 50018);
	Person p5("����ɯ", 30);

	//β�巨�������в������
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	//���������е�����
	  //"ÿ�����������Լ�ר���ĵ�����"�������������д<Person>
	for (vector<Person> ::iterator it = v.begin() ;it != v.end();it++)
	                          //��ʼ�������� �����ڽ�����������          
	{
		cout << "����" << (*it).m_Name << "����" << (*it).m_Age << endl;
		            //������Ȼ���������ܵõ���Ҫ�����ݣ�ע��Ҫ��С����
		              //vector��<>����ʲô�������ͣ���������õõ���Ҳ��ʲô��������
	}
}


//��������Զ����������͵�ָ�루���������ָ��棩
void test02()
{
	vector<Person*>v;//<>�����*���ָ������

	Person p1("����", 1);
	Person p2("����ϣ��", 2);
	Person p3("��������", 3);
	Person p4("����", 4);
	Person p5("ά��ޱ",5 );

	//β�巨�������в������
	v.push_back(&p1);//����ַ
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	v.push_back(&p5);

	//��������
	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "����" << (*it)->m_Name << "λ��" << (*it)->m_Age << endl;
			//��*�����õõ�����ָ�룬����Ҫ�ü�ͷ�����õ�����
		//ͬ��Ҳ��������д��cout << "����" << (**it).m_Name << "λ��" << (**it).m_Age << endl;
	}


}

int main()
{
	test01();
	test02();



	system("pause");
	return 0;
}
