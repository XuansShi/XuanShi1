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

//管理员类设计
class Manager :public Identity
{

public:
	//默认构造
	Manager();

	//有参构造 (姓名，密码)
	Manager(string name, string pwd);

	//菜单界面
	virtual void operMenu();

	//添加账号
	void addPerson();

	//查看账号
	void showPerson();

	//查看机房信息
	void showComputer();

	//清空预约记录
	void cleanFile();

	//初始化容器
	void initVector();

	//学生容器
	vector<Student> vStu;

	//老师容器
	vector<Teacher> vTea;

	//检测重复 参数：职工编号 返回值：是否重复
	bool checkRepeat(int id, int type);



	//机房容器
	vector <ComputerRoom>vCom;

};
