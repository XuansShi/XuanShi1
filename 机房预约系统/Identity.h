#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include"globalFile.h"
#include"student.h"
#include"teacher.h"
#include"manager.h"
using namespace std;

//身份基类
class Identity
{
public:

	//操作菜单纯虚函数
	virtual void operMenu() = 0;
	string m_Name; //用户名
	string m_Pwd;//密码


};