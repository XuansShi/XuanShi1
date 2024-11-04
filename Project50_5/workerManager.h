#pragma once//防止重复包含
#include<fstream>
#define FILENAME "emFile.txt"
#include <iostream>//包含输入输出流的头文件
using namespace std;//使用标准命名空间
#include <string>
#include "worker.h"
#include "workerManager.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"



class WorkerManager
{
public:
	//构造函数
	WorkerManager();

	//析构函数
	~WorkerManager();

	//展示菜单函数
	void Show_Menu();

	//退出系统
	void ExitSystem();

	//记录文件中人数个数
	int m_EmpNum;

	//员工数组的指针
	Worker** m_EmpArray;

	//添加职工
	void Add_Emp();

	//保存文件
	void save();


};