#pragma once//防止重复包含
#include <iostream>//包含输入输出流的头文件
using namespace std;//使用标准命名空间
#include <string>
#include "worker.h"
#include "workerManager.h"
#include "employee.h"


class WorkerManager
{
public:
	//构造函数
	WorkerManager();

	//析构函数
	~WorkerManager();

	//展示菜单函数
	void Show_Menu();

	void ExitSystem();

	



};