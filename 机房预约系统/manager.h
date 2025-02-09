#pragma once
#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include"Identity.h"
#include"globalFile.h"
#include"student.h"
#include"teacher.h"
#include"computerRoom.h"
#include"orderFile.h"
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

//����Ա�����
class Manager :public Identity
{

public:
	//Ĭ�Ϲ���
	Manager();

	//�вι��� (����������)
	Manager(string name, string pwd);

	//�˵�����
	virtual void operMenu();

	//����˺�
	void addPerson();

	//�鿴�˺�
	void showPerson();

	//�鿴������Ϣ
	void showComputer();

	//���ԤԼ��¼
	void cleanFile();

	//��ʼ������
	void initVector();

	//ѧ������
	vector<Student> vStu;

	//��ʦ����
	vector<Teacher> vTea;

	//����ظ� ������ְ����� ����ֵ���Ƿ��ظ�
	bool checkRepeat(int id, int type);



	//��������
	vector <ComputerRoom>vCom;

};
