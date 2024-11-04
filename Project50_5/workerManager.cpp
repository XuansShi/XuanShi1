#pragma once//��ֹ�ظ�����

#include "worker.h"
#include "workerManager.h"
#include <string>


WorkerManager::WorkerManager()//��ʼ������
{
    //��ʼ������
    this->m_EmpNum = 0;
    //��ʼ������ָ��
    this->m_EmpArray = NULL;


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

void WorkerManager::Add_Emp()
{
    cout << "����������ְ������" << endl;

    int addNum = 0;
    cin >> addNum;
    if (addNum > 0)
    {
        //�����¿ռ��С
        int newSize = this->m_EmpNum + addNum;

        //�����¿ռ�
        Worker** newSpace = new Worker * [newSize];



        //��ԭ�ռ������ݴ�ŵ��¿ռ���
        if (this->m_EmpArray != NULL)//�ж�ԭ���Ƿ������ݣ��оͿ���������û�о�ֱ�������
        {
            for (int i = 0; i < this->m_EmpNum; i++)
            {
                newSpace[i] = this->m_EmpArray[i];
            }


        }

        //��������������
        for (int i = 0; i < addNum; i++)
        {
            int id;
            string name;
            int dSelect;

            cout << "�������" << i + 1 << "����ְ����ţ�" << endl;
            cin >> id;

            cout << "�������" << i + 1 << "����ְ��������" << endl;
            cin >> name;

            cout << "��ѡ���ְ���ĸ�λ" << endl;
            cout << "1����ְͨ��" << endl;
            cout << "2������" << endl;
            cout << "3���ϰ�" << endl;
            cin >> dSelect;

            Worker* worker = NULL;

            switch (dSelect)
            {
            case 1://��ͨԱ��
                worker = new Employee(id, name, 1);

            case 2://��ͨԱ��
                worker = new Manager(id, name, 2);
            
            case 3://��ͨԱ��
                worker = new Boss(id, name, 3);
                break;
            default:
                break;

            }
            //��������ְ��ָ�뱣�浽������
            newSpace[this->m_EmpNum + i];


        }
        //�ͷ�ԭ�пռ�
        delete [] this->m_EmpArray;//�ͷŵ��Ǹ����飬��Ҫ����������
        //�����¿ռ�ָ��
        this->m_EmpArray = newSpace;
        //�����µ�ְ������
        this->m_EmpNum = newSize;

        //��ʾ��Ϣ
        cout << "�ɹ����" << addNum << "����ְ��" << endl;

        //���浽�ļ���
        this->save();


    }
    else
    {
        cout << "��������" << endl;
    }

    system("pause");
    system("cls");
}

void WorkerManager:: save()
{
    ofstream ofs;
    ofs.open(FILENAME, ios::out);//������ķ�ʽ���ļ�--д�ļ�

    //��ÿ���˵�����д�뵽�ļ���
    for (int i = 0; i<this ->m_EmpNum; i++)
    {
        ofs << this->m_EmpArray[i]->m_Id << " "
            << this->m_EmpArray[i]->m_Name << " "
            << this->m_EmpArray[i]->m_DeptId << endl;


    }
    //�ر��ļ�
    ofs.close();



}