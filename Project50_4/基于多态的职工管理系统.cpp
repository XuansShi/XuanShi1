#pragma once//��ֹ�ظ�����
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
	////���Դ���
	  //Ա��
	Worker* worker = NULL;//ָ�������ʼ����֪��дʲô��дNULL
	worker  = new Employee(1, "����", 1);
	worker->showInfo();
	//�ҷ���ָ����ú���ʱ���Զ���ȫ�õľ���->
	delete worker;
	  //����
	Manager* manager = NULL;
	manager = new Manager(2, "���ľ���", 2);
	manager->showInfo();
	delete manager;
	  //�ϰ�
	Boss* boss = NULL;
	boss = new Boss(3, "�����ϰ�", 3);
	boss->showInfo();
	delete boss;



	////���ó�Ա����ǰ����Ҫ:
	// //ʵ���������ߵĶ���
	//WorkerManager wm;

	//int choice = 0;//���������û���ѡ��


	//while (1)
	//{
	//	//��ʾ�˵�
	//	//���ó�Ա������
	//	wm.Show_Menu();
	//
	//	cout << "����������ѡ��" << endl;
	//	cin >> choice;

	//	switch (choice)
	//	{
	//	case 0://�˳�ϵͳ
	//		wm.ExitSystem();

	//		break;
 //        
	//	case 1://�˳�ϵͳ

	//		break;

	//	case 2://�˳�ϵͳ

	//		break;

	//	case 3://�˳�ϵͳ

	//		break;

	//	case 4://�˳�ϵͳ

	//		break;

	//	case 5://�˳�ϵͳ

	//		break;

	//	case 6://�˳�ϵͳ

	//		break;

	//	case 7://�˳�ϵͳ

	//		break;

	//	default:
	//		system("cls");//ϵͳ�������
	//		break;
	//	}

	//}




	system("pause");
	return 0;
}