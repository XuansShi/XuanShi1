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

	//标志文件是否为空
	bool m_FileIsEmpty;

	//统计文件中人数
	int get_EmpNum();

	//初始化职工
	void init_Emp();

	//显示职工
	void Show_Emp();

	//删除职工
	void Del_Emp();

	//按照职工编号判断职工是否存在，若存在，返回职工在数组中位置；不存在则返回-1
	int IsExist(int id);

	//修改职工
	void Mod_Emp();

	//查找职工
	void Find_Emp();
};