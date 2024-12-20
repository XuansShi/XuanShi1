//STL����-��ί���

#include <iostream>
#include <string>
#include <deque>
#include <vector>
#include <algorithm>
#include <ctime>
using namespace std;

//����������
//��5��ѡ�֣�ѡ��ABCDE��10����ί�ֱ��ÿһ��ѡ�ִ�֣�ȥ����߷֣�ȥ����ί����ͷ֣�ȡƽ���֡�



class Person
{ 
public:
	Person(string name, int score)
	{
		this->m_Name = name;
		this->m_Score = score;

	}

	//ѡ�ֵ����ԣ����� �� ƽ����
	string m_Name;
	int m_Score;


};

void createPerson(vector<Person>&v)//����㲻�����õķ�ʽ���룬�������޷�ʹ���β��޸�ʵ�ε�
{
	//���Ƹ�ֵС���ɣ�
	  //������ȰѴ������ֵ׼���ã�Ȼ���ٽ���ƴ��
	string nameSeed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string name = " ѡ��";
		name += nameSeed[i];//ϰ��string�ַ���ƴ�ӡ��ַ�����ȡ

		int score = 0;

		Person p(name, score);//ʵ����

		//��������person���� ���뵽������
		v.push_back(p);
	}



}



void MyPrintScore(const vector<Person>&p)
{
	for (vector<Person> ::const_iterator it = p.begin(); it != p.end(); it++)
	{
		cout <<"������"<< (*it).m_Name << "  ";//ע��it��Person���ͣ�������Ӧ��ʹ�õ��
		cout << "ƽ���֣�" << (*it).m_Score << endl;;
	}
	cout << endl;

}

void setScore(vector<Person>&v)
{

	cout << "��ʾ����÷֣�" << endl;
	for (vector<Person> ::iterator it = v.begin(); it != v.end(); it++)
	{
   //����ί�ķ�������deque������
		deque<int> d;
		for (int i = 0; i < 10; i++)
		{
			//�������������Լ��ֶ����룬Ҳ����ֱ�Ӵ��������������Ϊ�˷�����ʾֱ��ʹ���������
			int score = rand()%41+60;//ϰ�������ȡģ41��ֻ��õ�0��40������Ȼ�����60�ͻ�õ�60~100
			d.push_back(score);

		}
		

		
		cout << "ѡ�֣� " << it->m_Name << "   �����֣� " << endl;
		for (deque<int> ::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			cout << *dit << " ";
		}
		cout << endl;
		//ȥ����߷ֺ���ͷ�
		  //��sort�㷨������ͱ�÷ǳ������
		sort(d.begin(), d.end());

		//ȥ����ߺ���ͷ֣�������deque��ͷɾ��βɾ
		d.pop_back();
		d.pop_front();

		//ȡƽ����
		int sum = 0;
		for (deque<int> ::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			sum += *dit;//�ۼӷ���
		}
		int avg = sum / d.size();//ֱ�ӳ�����d�Ĵ�С

		//��ƽ���ָ�ֵ��m_Score
		it->m_Score = avg;




	}
	



}

int main()
{
	//���������
	srand((unsigned int)time(NULL));


	//1������5��ѡ��
	vector<Person> v;
	createPerson(v);

	//���ԣ�
	//MyPrint(v);
	
	//2����5��ѡ�ִ��
	setScore(v);

	//3����ʾ���÷�
	cout  << endl;
	cout << "��ʾ���÷֣�" << endl;
	MyPrintScore(v);


	 

	system("pause");
	return 0;
}

