#pragma once//防止重复包含

#include "worker.h"
#include "workerManager.h"
#include <string>


WorkerManager::WorkerManager()//初始化函数
{
    ifstream ifs;
    ifs.open(FILENAME, ios::in);
    //文件不存在的情况
    if (!ifs.is_open())
    {
        cout << "文件不存在" << endl;//测试输入
        this->m_EmpNum = 0;//初始化人数
        this->m_FileIsEmpty = true;//初始化文件为空标志
        this->m_EmpArray = NULL;//初始化数组指针
        ifs.close();//关闭文件


        return;
    }

    //2、文件存在，但没有记录
    char ch;
    ifs >> ch;
    if (ifs.eof())
    {
        cout << "文件为空！" << endl;
        this->m_EmpNum = 0;
        this->m_FileIsEmpty = true;
        this->m_EmpArray = NULL;
        ifs.close();
        return;
    }

    //3、文件存着且有记录
    int num = this->get_EmpNum();
    cout << "职工人数为" << num << endl;
    this->m_EmpNum = num;

    //开辟空间
    this->m_EmpArray = new Worker * [this->m_EmpNum];
    //将文件中的数据存到数组中
    this->init_Emp();
 




  

}



void WorkerManager:: Show_Menu()//展示菜单的函数
{
    cout << "********************************************" << endl;
    cout << "*********  欢迎使用职工管理系统！ **********" << endl;
    cout << "*************  0.退出管理程序  *************" << endl;
    cout << "*************  1.增加职工信息  *************" << endl;
    cout << "*************  2.显示职工信息  *************" << endl;
    cout << "*************  3.删除离职职工  *************" << endl;
    cout << "*************  4.修改职工信息  *************" << endl;
    cout << "*************  5.查找职工信息  *************" << endl;
    cout << "*************  6.按照编号排序  *************" << endl;
    cout << "*************  7.清空所有文档  *************" << endl;
    cout << "********************************************" << endl;
    cout << endl;



}

WorkerManager::~WorkerManager()
{
    cout << "欢迎下次使用" << endl;

}


void WorkerManager :: ExitSystem()
{
    cout << "欢迎下次使用" << endl;
    system("pause");
    exit(0);


}

void WorkerManager::Add_Emp()
{
    cout << "请输入增加职工数量" << endl;

    int addNum = 0;
    cin >> addNum;
    if (addNum > 0)
    {
        //计算新空间大小
        int newSize = this->m_EmpNum + addNum;

        //开辟新空间
        Worker** newSpace = new Worker * [newSize];



        //将原空间下内容存放到新空间下
        if (this->m_EmpArray != NULL)//判断原来是否有数据，有就拷贝过来，没有就直接往里放
        {
            for (int i = 0; i < this->m_EmpNum; i++)
            {
                newSpace[i] = this->m_EmpArray[i];
            }


        }

        //批量输入新数据
        for (int i = 0; i < addNum; i++)
        {
            int id;
            string name;
            int dSelect;

            cout << "请输入第" << i + 1 << "个新职工编号：" << endl;
            cin >> id;

            cout << "请输入第" << i + 1 << "个新职工姓名：" << endl;
            cin >> name;

            cout << "请选择该职工的岗位" << endl;
            cout << "1、普通职工" << endl;
            cout << "2、经理" << endl;
            cout << "3、老板" << endl;
            cin >> dSelect;

            Worker* worker = NULL;

            switch (dSelect)
            {
            case 1://普通员工
                worker = new Employee(id, name, 1);

            case 2://普通员工
                worker = new Manager(id, name, 2);
            
            case 3://普通员工
                worker = new Boss(id, name, 3);
                break;
            default:
                break;

            }
            //将创建的职工指针保存到数组中
            newSpace[this->m_EmpNum + i];


        }
        //释放原有空间
        delete [] this->m_EmpArray;//释放的是个数组，你要带上中括号
        //更改新空间指向
        this->m_EmpArray = newSpace;
        //更新新的职工人数
        this->m_EmpNum = newSize;

        //提示信息
        cout << "成功添加" << addNum << "名新职工" << endl;

        //保存到文件中
        this->save();


    }
    else
    {
        cout << "输入有误" << endl;
    }

    system("pause");
    system("cls");
}

void WorkerManager:: save()
{
    ofstream ofs;
    ofs.open(FILENAME, ios::out);//用输出的方式打开文件--写文件

    //将每个人的数据写入到文件中
    for (int i = 0; i<this ->m_EmpNum; i++)
    {
        ofs << this->m_EmpArray[i]->m_Id << " "
            << this->m_EmpArray[i]->m_Name << " "
            << this->m_EmpArray[i]->m_DeptId << endl;


    }
    //关闭文件
    ofs.close();



}

//统计文件中人数
int WorkerManager::get_EmpNum()
{
    ifstream ifs;
    ifs.open(FILENAME, ios::in);//打开文件 读文件


    int id;
    string name;
    int dId;

    int num = 0;

    while (ifs >> id && ifs >> name && ifs >> dId)
    {
        //记录人数
        num++;


    }
    ifs.close();
    return num;


}

//初始化职工
void WorkerManager :: init_Emp()
{
    ifstream ifs;
    ifs.open(FILENAME, ios::in);
    int id;
    string name;
    int dId;

    int index = 0;
    while (ifs >> id && ifs >> name && ifs >> dId)
    {
        Worker* worker = NULL;
        if (dId == 1)//普通员工
        {
            worker = new Employee(id, name, dId);


        }
        else if (dId == 2)//经理
        {
            worker = new Manager(id, name, dId);

        }
        else if (dId == 3)//老板
        {
            worker = new Boss(id, name, dId);

        }
        this->m_EmpArray[index] = worker;
        index++;
    }

    //关闭文件
    ifs.close();

}