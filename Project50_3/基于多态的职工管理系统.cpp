#include <iostream>
#include "workerManager.h"

using namespace std;

int main()
{
	//调用成员函数前，先要:
	 //实例化管理者的对象
	WorkerManager wm;

	int choice = 0;//用来储存用户的选择


	while (1)
	{
		//显示菜单
		//调用成员函数：
		wm.Show_Menu();
	
		cout << "请输入您的选择" << endl;
		cin >> choice;

		switch (choice)
		{
		case 0://退出系统
			wm.ExitSystem();

			break;
         
		case 1://退出系统

			break;

		case 2://退出系统

			break;

		case 3://退出系统

			break;

		case 4://退出系统

			break;

		case 5://退出系统

			break;

		case 6://退出系统

			break;

		case 7://退出系统

			break;

		default:
			system("cls");
			break;
		}

	}




	system("pause");
	return 0;
}