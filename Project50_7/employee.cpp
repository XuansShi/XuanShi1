#pragma once//��ֹ�ظ�����
#include <iostream>
//#include "worker.h"
#include "workerManager.h"
#include "employee.h"
#include <string>

using namespace std;

Employee::Employee(int id, string name, int dId)//���캯������
{
	this->m_Id = id;
	this->m_DeptId = dId;
	this->m_Name = name;

}

void Employee::showInfo()
{
	cout << "ְ����ţ�" << this->m_Id
		<< "\tְ��������" << this->m_Name
		<< "\t��λ��" << this->getDeptName()
		<< "\t��λְ����ɾ�����������" << endl;



}

string Employee::getDeptName()
{
	return string("Ա��");


}
