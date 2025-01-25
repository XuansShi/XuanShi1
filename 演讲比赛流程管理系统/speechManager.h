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
#include "speaker.h"
using namespace std;

//����ݽ�������
class SpeechManager
{
public:
	//��Ա����
	
	  //�����һ�ֱ���ѡ�ֱ������
	vector<int> v1;

	//��һ�ֽ���ѡ�ֱ������
	vector<int> v2;

	//ʤ��ǰ����ѡ�ֱ������
	vector<int> vVictory;

	//��ű���Լ���Ӧ����ѡ������
	map<int, Speaker> m_Speaker;

	//��������
	int m_Index;

	//�ļ�Ϊ�ձ�־
	bool fileIsEmpty;

	//��ʼ������ 
	void initSpeech();




	//���캯��
	SpeechManager();
	 
	//��������
	~SpeechManager();

	//չʾ�˵�
	void show_Menu();

	//choice = 0 �˳�ϵͳ����
	void exitSystem();

	//����12��ѡ��
	void createSpeaker();

	//��ʼ����-�ݽ��������̿��ƺ���
	void startSpeech();

	//��ǩ
	void speechDraw();

	//����
	void speechContest();

	//��ʾ�������
	void showScore();

	//�����¼
	void saveRecord();

	//��ȡ��¼
	void loadRecord();


	//�����¼
	map<int, vector<string>> m_Record;

	//��ʾ����÷�
	void showRecord();

	//��ռ�¼
	void clearRecord();

};
