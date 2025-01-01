//STL����2-Ա������
#include<iostream>
#include<map>
#include<vector>
#include<string>
#include<algorithm>
#include<ctime>

using namespace std;

#define �໬ 0 
#define ���� 1
#define �з� 2

//��������
//* ��˾������Ƹ��10��Ա����ABCDEFGHIJ����10��Ա�����빫˾֮����Ҫָ��Ա�����Ǹ����Ź���
//* Ա����Ϣ��: ����  ������ɣ����ŷ�Ϊ���߻����������з�
//* �����10��Ա�����䲿�ź͹���
//* ͨ��multimap������Ϣ�Ĳ���  key(���ű��) value(Ա��)
//* �ֲ�����ʾԱ����Ϣ


//1. ����10��Ա�����ŵ�vector��
//2. ����vector������ȡ��ÿ��Ա���������������
//3. ����󣬽�Ա�����ű����Ϊkey������Ա����Ϊvalue�����뵽multimap������
//4. �ֲ�����ʾԱ����Ϣ


class Worker
{
public:
	string m_Name;
	int m_Salary;


};

void createWorker(vector<Worker>&v)//����Ա������
{
	string namedSeed = "ABCDEFGHIJ";//��ǰ׼�������������ڸ�ֵ
	for (int i = 0; i < 10; i++)
	{
		Worker worker;//ʵ����
		worker.m_Name = "Ա��";
		worker.m_Name += namedSeed[i];
		
		worker.m_Salary = rand() % 10000 + 10000+1;// 10000<=����<=20000 

		v.push_back(worker);//�Ѳ���vector����

	}


}

void PrintWorker(const vector<Worker>&vWorker)
{
	for (vector<Worker>::const_iterator it = vWorker.begin(); it != vWorker.end(); it++)
	{

		cout << "������" << it->m_Name << " ���ʣ�" << it->m_Salary << endl;
	}
	cout << endl;

}


void setGroup(vector<Worker>&v,multimap<int,Worker>&m)
{
	for (vector<Worker>::const_iterator it = v.begin(); it != v.end(); it++)
	{
		//����������ű��
		int deptID = rand() % 3;//��������� 0 �� 1 �� 2 

		m.insert(make_pair(deptID, *it));//it�ǵ��������������Ϊ��ַ)����ô*it���Ǿ����ֵ


	}



}


void showWorker(multimap<int, Worker>& m)
{
	cout << "�߻����ţ�" << endl;
	multimap<int,Worker>::iterator Fit = m.find(�໬);//ʹ��multimap�������õ�find�������ҵ���һ���߻�Ա���ĵ�����
	int count = m.count(�໬);////ʹ��multimap�������õ�count������ȷ��key = 0�ļ�ֵ�Եĸ���
	int index = 0;//����������ѭ������
	for (; Fit != m.end() && index < count; Fit++, index++)
	{
		cout << "key = " << Fit->first << "  ������ " << Fit->second.m_Name << "  ���ʣ� " << Fit->second.m_Salary << endl;//����ġ�Fit->second.m_Name��ǰ������ü�ͷ����������õ��
		cout << endl;
	}


	cout << "�������ţ�" << endl;
	 Fit = m.find(����);
	count = m.count(����);
	index = 0;
	for (; Fit != m.end() && index < count; Fit++, index++)
	{
		cout << "key = " << Fit->first << "  ������ " << Fit->second.m_Name << "  ���ʣ� " << Fit->second.m_Salary << endl;
		cout << endl;
	}


	cout << "�з����ţ�" << endl;
	 Fit = m.find(�з�);
	count = m.count(�з�);
	index = 0;
	for (; Fit != m.end() && index < count; Fit++, index++)
	{
		cout << "key = " << Fit->first << "  ������ " << Fit->second.m_Name << "  ���ʣ� " << Fit->second.m_Salary << endl;//����ġ�Fit->second.m_Name��ǰ������ü�ͷ����������õ��
		cout << endl;
	}


}



int main()
{

	srand((unsigned int)time(NULL));//ʱ��������������

	//1������Ա��
	vector<Worker>vWorker;
	createWorker(vWorker);

	//PrintWorker(vWorker);


	//2��Ա������
	multimap<int, Worker>mWorker;
	setGroup(vWorker, mWorker);


	//3��������ʾԱ��
	showWorker(mWorker);

	system("pause");
	return 0;
}