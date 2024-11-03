#pragma once//防止重复包含
#include <iostream>
//#include "worker.h"
#include "workerManager.h"
#include "employee.h"
#include <string>
using namespace std;

#include "manager.h"
#include "boss.h"
int main()
{
	////测试代码
	  //员工
	Worker* worker = NULL;//指针变量初始化不知道写什么就写NULL
	worker  = new Employee(1, "张三", 1);
	worker->showInfo();
	//我发现指针调用函数时，自动补全用的就是->
	delete worker;
	  //经理
	Manager* manager = NULL;
	manager = new Manager(2, "李四经理", 2);
	manager->showInfo();
	delete manager;
	  //老板
	Boss* boss = NULL;
	boss = new Boss(3, "王五老板", 3);
	boss->showInfo();
	delete boss;



	////调用成员函数前，先要:
	// //实例化管理者的对象
	//WorkerManager wm;

	//int choice = 0;//用来储存用户的选择


	//while (1)
	//{
	//	//显示菜单
	//	//调用成员函数：
	//	wm.Show_Menu();
	//
	//	cout << "请输入您的选择" << endl;
	//	cin >> choice;

	//	switch (choice)
	//	{
	//	case 0://退出系统
	//		wm.ExitSystem();

	//		break;
 //        
	//	case 1://退出系统

	//		break;

	//	case 2://退出系统

	//		break;

	//	case 3://退出系统

	//		break;

	//	case 4://退出系统

	//		break;

	//	case 5://退出系统

	//		break;

	//	case 6://退出系统

	//		break;

	//	case 7://退出系统

	//		break;

	//	default:
	//		system("cls");//系统命令：清屏
	//		break;
	//	}

	//}




	system("pause");
	return 0;
}