#pragma once
#include<iostream>
#include<string>
#include"Identity.h"

using namespace std;

class Student :public Identity
{
public:
	//Ĭ�Ϲ���
	Student();

	//�вι���(ѧ�� ���� ����)
	Student(int id, string name, string pwd);

	//�˵�����
	virtual void operMenu();  //�����д��麯�������������д������Ϊÿ�����඼�иú�������������Ҳд�ɴ��麯��

	//����ԤԼ
	void applyOrder();

	//�鿴�ҵ�ԤԼ
	void showMyOrder();

	//�鿴����ԤԼ
	void showAllOrder();

	//ȡ��ԤԼ
	void cancelOrder();

	//ѧ��ѧ��
	int m_Id;

	//��������
	vector<ComputerRoom> vCom;



};