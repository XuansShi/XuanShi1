#pragma once //��ֹͷ�ļ��ظ�����
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <deque>
#include <algorithm>
#include <functional>
#include <iterator>
#include <fstream>
#include <sstream>
#include <ctime>
#include <numeric>
#include "speechManager.h"
#include "speaker.h"
using namespace std;

//���캯��
SpeechManager::SpeechManager()
{
	this->initSpeech();//��ʼ�����Ժ���

	this->createSpeaker();//����ѡ�ֺ���

	this->loadRecord();//���������¼

}

//��������
SpeechManager::~SpeechManager()
{



}

//չʾ�˵�����ʵ��
void SpeechManager:: show_Menu() //ϰ������ֵ+������+������
{
	cout << "����������������-��ӭ�μ��ݽ���������������������--" << endl;
	cout << "��������������������1����ʼ�ݽ���������������������" << endl;
	cout << "��������������������2���鿴�����¼����������������" << endl;
	cout << "��������������������3����ձ�����¼����������������" << endl;
	cout << "��������������������0���˳��������򡪡�������������" << endl;
	cout << endl;


}

// choice = 0 �˳�ϵͳ����
void SpeechManager::exitSystem()
{
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0);//��ֹ�����ִ��
	//C++ �е� exit ����
	//	�� C++ �У�exit ����������ֹ�����ִ�У��������ϵͳ����һ��״̬�롣
	//	���Ǳ�׼�⺯���������� <cstdlib> ͷ�ļ��С�
	//	exit ����ԭ�ͣ�
	//	void exit(int status);
	//		status ͨ������ָʾ������˳�״̬��0 ��ʾ�ɹ����� 0 ��ʾʧ��


}


//��ʼ������ 
void  SpeechManager::initSpeech()
{
	//�������ÿ�
	this->v1.clear();
	this->v2.clear();
	this->vVictory.clear();	
	this->m_Speaker.clear();
	this->m_Index = 1;
	this->fileIsEmpty = false;

	//����¼�������
	this->m_Record.clear();
}


//����ѡ��
void SpeechManager::createSpeaker()
{
string nameSeed = "ABCDEFGHIJKL";//Ԥ����������
for (int i = 0; i < nameSeed.size(); i++)//ϰ��ʹ��size()����ͳ���ַ�������
{
	string name = "ѡ��";
	name += nameSeed[i];//�ַ���ƴ��

	Speaker sp;

	sp.m_Name = name;//��ֵѡ������

	for(int j = 0 ; j<2; j++)
	{
		sp.m_Score[j] = 0;
	}

	//����12��ѡ�ֱ�ŵ�v1������
	this->v1.push_back(i + 10001);

	//����ѡ�ֱ���Լ���Ӧѡ�ֵļ�ֵ�Ե�map������
	this->m_Speaker.insert(make_pair(i+ 10001, sp));

}

}


// choice == 1 ��ʼ����-�ݽ��������̿��ƺ���
void SpeechManager::startSpeech()
{
	//��һ�ֱ���

	//1.��ǩ
	this->speechDraw();
	//2.����
	this->speechContest();
	//3.��ʾ�������
	this->showScore();

	//�ڶ��ֱ���
	this->m_Index++;
	//1.��ǩ
	this->speechDraw();
	//2.����
	this->speechContest();
	//3.��ʾ���ս��
	this->showScore();
	//4.�������
	this->saveRecord();

	//���ñ�������
	this->initSpeech();//��ʼ������
	this->createSpeaker();//����ѡ��
	this->loadRecord();//���������¼


	cout<<"����������" << endl;
	system("pause");



}



//��ǩ
void  SpeechManager::speechDraw()
{
	cout << "��" << this->m_Index << "�ֱ���ѡ�����ڳ�ǩ" << endl;
	cout << "-------------------" << endl;
	cout << "��ǩ���ݽ�˳�����£�" << endl;
	if (this->m_Index == 1)
	{
		random_shuffle(v1.begin(), v1.end());//�����������v1��Ԫ�ص�˳��
		for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
		{
			cout << *it << " ";
		}
		cout << endl;

	}
	else
	{
		random_shuffle(v2.begin(), v2.end());//�����������v2��Ԫ�ص�˳��
		for (vector<int>::iterator it = v2.begin(); it != v2.end(); it++)
		{
			cout << *it << " ";
		}
		cout << endl;
	}

	cout << "-------------------" << endl;
	system("pause");

}


//����
void SpeechManager::speechContest()
{
	cout << "��" << this->m_Index << "�ֱ�����ʽ��ʼ" << endl;

	//׼����ʱ���������С��ɼ�
	multimap<double, int, greater<double>> groupScore;//key�ǵ÷֣�value�Ǿ���ѡ�ֱ�ţ�greater<double>�ǽ���

	int num = 0;//��¼��Ա���������ڼ�¼����,6��һ��

	vector<int> v_Src;//����ѡ������

	//�жϵ�ǰ�ǵڼ��֣�ѡ��������ֵ
	if(this->m_Index == 1)
	{
		v_Src = v1;
	}
	else
	{
		v_Src = v2;
	}

	for (vector<int>::iterator it = v_Src.begin(); it != v_Src.end(); it++)
	{
		num++;

		//��ί���
		deque<double> d;
		for (int i = 0; i< 10; i++)
		{
			double score = (rand() % 401 + 600) / 10.f;//����60~100֮������С����֣�.f��ʾС��
		
			d.push_back(score);//��������
		}
		cout << endl;

		sort(d.begin(), d.end(), greater<double>());//��������

		d.pop_front();//ȥ����߷�
		d.pop_back();//ȥ����ͷ�

		double sum = accumulate(d.begin(), d.end(), 0.0f);//accumulate�㷨���ܷ֣���ʼ�ۼ�ֵΪ0.0f����������
		double avg = sum /(double)d.size();//��ƽ����

		//ÿ���˵�ƽ����

		this->m_Speaker[*it].m_Score[this->m_Index - 1] = avg;//��ƽ���ַ���map������

		//6����һ�飬����ʱ����multimap<double, int, greater<double>> groupScore���
		groupScore.insert(make_pair(avg,*it));

		if (num % 6 == 0)
		{
			cout<< "��" << num / 6 << "С������������£�" << endl;//����6���˾��ǵ�1�飬����12���˾��ǵ�2��

			for (multimap<double, int, greater<double>>::iterator it = groupScore.begin(); it != groupScore.end(); it++)
			{
				cout << "��ţ�" << it->second << "������" << this->m_Speaker[it->second].m_Name << "�÷֣�" << this->m_Speaker[it->second].m_Score[this->m_Index - 1] << endl;
			}

			int count = 0;

			//ȡǰ����
			for (multimap<double, int, greater<double>>::iterator it = groupScore.begin(); it != groupScore.end() && count < 3; it++, count++)
			{
				if (this->m_Index == 1)
				{
					v2.push_back((*it).second);//��һ�ֱ�������С��ǰ��������v2����(����������6����)
				}
				else
				{
					vVictory.push_back((*it).second);//�ڶ��ֱ�������С��ǰ��������vVictory����(ʤ����ǰ����)
				}
			}

			groupScore.clear();//С���������

			cout << endl;
		}











	}
	cout<<"��" << this->m_Index << "�ֱ������" << endl;
	system("pause");

}

void SpeechManager::showScore()
{
	cout << "��" << this->m_Index << "�ֽ���ѡ�����£�" << endl;
	vector<int>v;
	if (this->m_Index == 1)
	{
		v = v2;
	}
	else
	{
		v = vVictory;
	}

	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout<<"ѡ�ֱ��"<<*it<<"����"<<m_Speaker[*it].m_Score[this->m_Index - 1]<<endl;
	}
	cout << endl;

	system("pause");
	system("cls");//����
	this->show_Menu();//���ò˵�����
}

//�����¼
void SpeechManager::saveRecord()
{
	ofstream ofs;
	ofs.open("speech.csv", ios::out | ios::app);//������ķ�ʽ���ļ�--д�ļ�

	//��ÿ��ѡ������д�뵽�ļ���
	for (vector<int>::iterator it = vVictory.begin(); it != vVictory.end(); it++)
	{
	ofs<<*it<<","<<m_Speaker[*it].m_Score[1] << ",";
	}
	ofs << endl;

	//�ر��ļ�
	ofs.close();

	cout << "��¼�Ѿ�����" << endl;

	//�����ļ���Ϊ�յ�״̬
	this->fileIsEmpty = false;
}






void SpeechManager::loadRecord()
{
	ifstream ifs("speech.csv", ios::in);//���������� ��ȡ�ļ�
	if (!ifs.is_open())
	{
		this->fileIsEmpty = true;
		cout << "�ļ�������" << endl;
		ifs.close();
		return;
	}

	char ch;
	ifs >> ch;

	if (ifs.eof())
	{
		cout << "�ļ�Ϊ��" << endl;
		this->fileIsEmpty = true;
		ifs.close();
		return;
	}

	//�ļ���Ϊ��
	this->fileIsEmpty = false;
	ifs.putback(ch);//�������ȡ�ĵ����ַ��Ż�ȥ
	string data;
	int index = 0;

	while (ifs >> data)
	{
		vector<string>v;//��ŵ���ѡ������
		int pos = -1;//���Ҷ���λ��
		int start = 0;//��ʼλ��
		while (true)
		{
			pos = data.find(",", start);//��startλ�ÿ�ʼ���Ҷ���
			if (pos == -1)
			{
				break;//�Ҳ������ţ��˳�ѭ��
			}
			string tmp = data.substr(start, pos - start);//�ҵ��ˣ����зָ��ȡ����ǰ�������      ��  ����1 ����ʼλ�ã�����2����ȡ����
			v.push_back(tmp);//����ȡ�����ݷ���������	

			start = pos + 1;//����start��λ�ã���������
		}
		this->m_Record.insert(make_pair(index, v));//��ÿ��ѡ�����ݷ��뵽map������
		index++;
	}
	ifs.close();
	for (map<int,vector<string>>::iterator it = m_Record.begin();it !=m_Record.end();it++ )
	{ 
		cout << it->first << "�ھ����" << it->second[0] << "�÷�" << it->second[1] << endl;
	}
}



void SpeechManager::showRecord()
{


	if (this->fileIsEmpty)
	{
		cout << "�ļ������ڻ��߼�¼Ϊ��" << endl;
	}
	else
	{
	for (int i = 0; i < this->m_Record.size(); i++)
	{
		cout<<"��"<<i+1<<"��"<<
			"�ھ����"<<this->m_Record[i][0]<<"�÷�"<<this->m_Record[i][1]<<" "
			"�Ǿ����"<<this->m_Record[i][2]<<"�÷�"<<this->m_Record[i][3]<<" "
			"�������"<<this->m_Record[i][4]<<"�÷�"<<this->m_Record[i][5]<<endl;
	}

	}

	system("pause");
	system("cls");
}

void SpeechManager::clearRecord()
{
	cout << "ȷ������ļ���" << endl;
	cout << " 1 �� " << endl;
	cout << " 2  �� " << endl;
	cin >> select;
	if (select == 1)
	{
		ofstream ofs("speech.csv", ios::trunc);
		ofs.close();

		this->initSpeech();//��ʼ�����Ժ���

		this->createSpeaker();//����ѡ�ֺ���

		this->loadRecord();//���������¼

		cout << "��ճɹ���" << endl;
	}

	system("pause");
	system("cls");

}
