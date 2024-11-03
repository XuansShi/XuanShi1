#pragma once//防止重复包含
#include <iostream>
//#include "worker.h"
#include "workerManager.h"
#include "employee.h"
#include <string>

using namespace std;

Employee::Employee(int id, string name, int dId)//构造函数重载
{
	this->m_Id = id;
	this->m_DeptId = dId;
	this->m_Name = name;

}

void Employee::showInfo()
{
	cout << "职工编号：" << this->m_Id
		<< "\t职工姓名：" << this->m_Name
		<< "\t岗位：" << this->getDeptName()
		<< "\t岗位职责：完成经理交给的任务" << endl;



}

string Employee::getDeptName()
{
	return string("员工");


}
