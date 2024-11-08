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

WorkerManager::~WorkerManager()//将数组释放置空
{
    if(this->m_EmpArray !=NULL )
    {
        for (int i = 0; i < this->m_EmpNum; i++)
        {
            if (this->m_EmpArray[i] != NULL)
            {
                delete this->m_EmpArray[i];
            }


       }
        delete[] this->m_EmpArray;
        this->m_EmpArray = NULL;

    }

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


void WorkerManager::Show_Emp()
{
    if (this->m_FileIsEmpty)//判断文件是否为空
    {
        cout << "文件不存在或记录为空" << endl;

    }
    else
    {
        for (int i = 0; i < m_EmpNum; i++)
        {
            //利用多态调用接口
            this->m_EmpArray[i]->showInfo();

        }


    }
    system("pause");
    system("cls");

}


int WorkerManager::IsExist(int id)
{
    int index = -1;

    for (int i = 0; i < this->m_EmpNum; i++)
    {
        if (this->m_EmpArray[i]->m_Id == id)
        {
            index = i;
            break;
        }



    }
    return index;

}

//删除职工
void WorkerManager::Del_Emp()
{
    if (this->m_FileIsEmpty)
    {
        cout << "文件不存在" << endl;

    }
    else
    {
        //按照职工编号删除职工
        cout << "请输入想要删除职工编号" << endl;
        int id = 0;
        cin >> id;
        int index = this->IsExist(id);


        if (index != -1)//如果不等于-1，说明职工存在，需要删掉index位置上的职工
        {
            //数据前移
            for (int i = index; i < this->m_EmpNum - 1; i++)//m_EmpNum-1就是你找到的员工编号对应的数组元素编号
            {
                this->m_EmpArray[i] = this->m_EmpArray[i + 1];


            }
            this->m_EmpNum--;//更新数组中记录人员的个数
            //同步更新到文件中
            this->save();
            cout << "删除成功!" << endl;




        }
        else
        {
            cout << "删除失败，未找到该职工" << endl;
        }
    }
    //按任意键清屏
    system("pause");
    system("cls");

}

//修改职工
void WorkerManager::Mod_Emp()
{
    if (this->m_FileIsEmpty)//判断文件是否存在或为空
    {
        cout << "文件不存在或记录为空！" << endl;
    }
    else
    {
        cout << "请输入修改职工的编号：" << endl;
        int id;
        cin >> id;

        int ret = this->IsExist(id);
        if (ret != -1)
        {
            //查找到编号的职工
            delete this->m_EmpArray[ret];//释放干净原来堆区里的数据
            int newId = 0;
        
            string newName = " ";

            int dSelect = 0;

            cout << "查找：" << id << "号职工，重新输入新职工号：" << endl;
            cin >> newId;

            cout << "请输入新姓名" << endl;
            cin >> newName ;

            cout << "请输入岗位" << endl;
            cout << "1、普通职工" << endl;
            cout << "2、经理" << endl;
            cout << "3、老板" << endl;
            cin >> dSelect;

            Worker* worker = NULL;
            switch (dSelect)
            {
            case 1 :
                worker = new Employee(newId, newName, dSelect);
                break;
             
            case 2:
                worker = new Manager(newId, newName, dSelect);
                break;

            case 3:
                worker = new Boss(newId, newName, dSelect);
                break;

            default:
                break;

            }
            //更改数据 到数组中
            this->m_EmpArray[ret] = worker;

            cout << "修改成功" << this->m_EmpArray[ret]->m_DeptId << endl;

            //保存到文件中
            this->save();

        }
        else
        {
            cout << "查无此人，修改失败" << endl;
        }


    }
    //按任意键清屏
    system("pause");
    system("cls");

}


//查找职工
void WorkerManager::Find_Emp()
{
    if (this->m_FileIsEmpty)
    {
        cout << "文件不存在或记录为空" << endl;

    }
    else
    {
        cout << "请输入查找的方式" << endl;

        cout << "1、按职工编号查找" << endl;
        cout << "2、按姓名查找" << endl;

        int select = 0;
        cin >> select;

        if (select == 1)//按编号进行查找
        {
            int id;
            cout << "请输入查找的职工编号" << endl;
            cin >> id;

            int ret = IsExist(id);
            if (ret != -1)
            {
                cout << "查找成功，该职工信息如下" << endl;
                this->m_EmpArray[ret]->showInfo();


            }
            else
            {
                cout << "查找失败，查无此人" << endl;

            }


        }
        else if (select == 2)//按姓名查找
        {
            string name;
            cout << "请输入要查找的姓名" << endl;
            cin >> name;

            bool flag = false;//查找到的标签
            for (int i = 0; i < m_EmpNum; i++)
            {
                if (m_EmpArray[i]->m_Name == name)
                {
                    cout << "查找成功，职工编号为：" << m_EmpArray[i]->m_Id<<" 号的信息如下："<<endl;
                    flag = true;
                    this->m_EmpArray[i]->showInfo();

                }

            }
            if (flag == false)
            {
                //查无此人
                cout << "查无此人，查找失败" << endl;

            }
            else
            {
                cout << "输入选项有误" << endl;

            }

        }

        system("pause");
        system("cls");
    }






}

//排序职工
void WorkerManager::Sort_Emp()
{
    if (this->m_FileIsEmpty)
    {
        cout << "文件不存在或记录为空" << endl;
        system("pause");
        system("cls");

    }
    else
    {
        cout << "请选择排序方式：" << endl;
        cout << "1、按职工号进行升序" << endl;
        cout << "2、按职工号进行降序" << endl;

        int select = 0;
        cin >> select;
        for (int i = 0; i < m_EmpNum; i++)
        {
            int minOrMax = i;

            for (int j = i + 1; j < m_EmpNum; j++)
            {
                if (select == 1)//升序
                {
                    if (m_EmpArray[minOrMax]->m_Id)
                    {
                        minOrMax = j;

                    }


                }
                else //降序
                {
                    if (m_EmpArray[minOrMax]->m_Id)
                    {
                        minOrMax = j;

                    }

                }



            }

            if (i != minOrMax)
            {
                Worker* temp = m_EmpArray[i];
                m_EmpArray[i] = m_EmpArray[minOrMax];
                m_EmpArray[minOrMax] = temp;

            }




        }
        cout << "排序成功，排序后的结果为：" << endl;
        this->save();
        this->Show_Emp();


    }




}

//清空文件
void WorkerManager::Clean_File()
{
    cout << "确认清空文件吗？" << endl;
    cout << "1、确认" << endl;
    cout << "2、返回" << endl;

    int select = 0;
    cin >> select;

    if (select == 1)
    {//清空文件
        //打开模式
        ofstream ofs(FILENAME, ios::trunc);//删除文件后重新创建

        ofs.close();

        if (this->m_EmpArray != NULL)
        {
            //删除堆区的每个职工对象
            for (int i = 0; i < this->m_EmpNum; i++)
            {
                if (this->m_EmpArray[i] != NULL)
                {
                    delete this->m_EmpArray[i];
                     

                }

            }
            this->m_EmpNum = 0;
            delete[] this->m_EmpArray;
            this->m_EmpArray = NULL;
            this->m_FileIsEmpty = true;

        }
        cout<<"清空成功！" << endl;


    }
    system("pause");

    system("cls");




}