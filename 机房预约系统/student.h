#pragma once
#include<iostream>
#include<string>
#include"Identity.h"

using namespace std;

class Student :public Identity
{
public:
	//默认构造
	Student();

	//有参构造(学号 姓名 密码)
	Student(int id, string name, string pwd);

	//菜单界面
	virtual void operMenu();  //父类有纯虚函数，子类必须重写。又因为每个子类都有该函数，所以这里也写成纯虚函数

	//申请预约
	void applyOrder();

	//查看我的预约
	void showMyOrder();

	//查看所有预约
	void showAllOrder();

	//取消预约
	void cancelOrder();

	//学生学号
	int m_Id;

	//机房容器
	vector<ComputerRoom> vCom;



};