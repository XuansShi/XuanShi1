#pragma once//��ֹ�ظ�����
#include<fstream>
#define FILENAME "emFile.txt"
#include <iostream>//���������������ͷ�ļ�
using namespace std;//ʹ�ñ�׼�����ռ�
#include <string>
#include "worker.h"
#include "workerManager.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"



class WorkerManager
{
public:
	//���캯��
	WorkerManager();

	//��������
	~WorkerManager();

	//չʾ�˵�����
	void Show_Menu();

	//�˳�ϵͳ
	void ExitSystem();

	//��¼�ļ�����������
	int m_EmpNum;

	//Ա�������ָ��
	Worker** m_EmpArray;

	//����ְ��
	void Add_Emp();

	//�����ļ�
	void save();


};