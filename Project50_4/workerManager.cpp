#pragma once//��ֹ�ظ�����
#include <iostream>
//#include "worker.h"
#include "workerManager.h"
#include "employee.h"
#include <string>

using namespace std;
WorkerManager::WorkerManager()
{


}

void WorkerManager:: Show_Menu()//չʾ�˵��ĺ���
{
    cout << "********************************************" << endl;
    cout << "*********  ��ӭʹ��ְ������ϵͳ�� **********" << endl;
    cout << "*************  0.�˳��������  *************" << endl;
    cout << "*************  1.����ְ����Ϣ  *************" << endl;
    cout << "*************  2.��ʾְ����Ϣ  *************" << endl;
    cout << "*************  3.ɾ����ְְ��  *************" << endl;
    cout << "*************  4.�޸�ְ����Ϣ  *************" << endl;
    cout << "*************  5.����ְ����Ϣ  *************" << endl;
    cout << "*************  6.���ձ������  *************" << endl;
    cout << "*************  7.��������ĵ�  *************" << endl;
    cout << "********************************************" << endl;
    cout << endl;



}

WorkerManager::~WorkerManager()
{
    cout << "��ӭ�´�ʹ��" << endl;

}


void WorkerManager :: ExitSystem()
{
    cout << "��ӭ�´�ʹ��" << endl;
    system("pause");
    exit(0);


}