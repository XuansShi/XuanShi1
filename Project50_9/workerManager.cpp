#pragma once//��ֹ�ظ�����

#include "worker.h"
#include "workerManager.h"
#include <string>


WorkerManager::WorkerManager()//��ʼ������
{
    ifstream ifs;
    ifs.open(FILENAME, ios::in);
    //�ļ������ڵ����
    if (!ifs.is_open())
    {
        cout << "�ļ�������" << endl;//��������
        this->m_EmpNum = 0;//��ʼ������
        this->m_FileIsEmpty = true;//��ʼ���ļ�Ϊ�ձ�־
        this->m_EmpArray = NULL;//��ʼ������ָ��
        ifs.close();//�ر��ļ�


        return;
    }

    //2���ļ����ڣ���û�м�¼
    char ch;
    ifs >> ch;
    if (ifs.eof())
    {
        cout << "�ļ�Ϊ�գ�" << endl;
        this->m_EmpNum = 0;
        this->m_FileIsEmpty = true;
        this->m_EmpArray = NULL;
        ifs.close();
        return;
    }

    //3���ļ��������м�¼
    int num = this->get_EmpNum();
    cout << "ְ������Ϊ" << num << endl;
    this->m_EmpNum = num;

    //���ٿռ�
    this->m_EmpArray = new Worker * [this->m_EmpNum];
    //���ļ��е����ݴ浽������
    this->init_Emp();
 




  

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

WorkerManager::~WorkerManager()//�������ͷ��ÿ�
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

//ͳ���ļ�������
int WorkerManager::get_EmpNum()
{
    ifstream ifs;
    ifs.open(FILENAME, ios::in);//���ļ� ���ļ�


    int id;
    string name;
    int dId;

    int num = 0;

    while (ifs >> id && ifs >> name && ifs >> dId)
    {
        //��¼����
        num++;


    }
    ifs.close();
    return num;


}

//��ʼ��ְ��
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
        if (dId == 1)//��ͨԱ��
        {
            worker = new Employee(id, name, dId);


        }
        else if (dId == 2)//����
        {
            worker = new Manager(id, name, dId);

        }
        else if (dId == 3)//�ϰ�
        {
            worker = new Boss(id, name, dId);

        }
        this->m_EmpArray[index] = worker;
        index++;
    }

    //�ر��ļ�
    ifs.close();

}


void WorkerManager::Show_Emp()
{
    if (this->m_FileIsEmpty)//�ж��ļ��Ƿ�Ϊ��
    {
        cout << "�ļ������ڻ��¼Ϊ��" << endl;

    }
    else
    {
        for (int i = 0; i < m_EmpNum; i++)
        {
            //���ö�̬���ýӿ�
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

//ɾ��ְ��
void WorkerManager::Del_Emp()
{
    if (this->m_FileIsEmpty)
    {
        cout << "�ļ�������" << endl;

    }
    else
    {
        //����ְ�����ɾ��ְ��
        cout << "��������Ҫɾ��ְ�����" << endl;
        int id = 0;
        cin >> id;
        int index = this->IsExist(id);


        if (index != -1)//���������-1��˵��ְ�����ڣ���Ҫɾ��indexλ���ϵ�ְ��
        {
            //����ǰ��
            for (int i = index; i < this->m_EmpNum - 1; i++)//m_EmpNum-1�������ҵ���Ա����Ŷ�Ӧ������Ԫ�ر��
            {
                this->m_EmpArray[i] = this->m_EmpArray[i + 1];


            }
            this->m_EmpNum--;//���������м�¼��Ա�ĸ���
            //ͬ�����µ��ļ���
            this->save();
            cout << "ɾ���ɹ�!" << endl;




        }
        else
        {
            cout << "ɾ��ʧ�ܣ�δ�ҵ���ְ��" << endl;
        }
    }
    //�����������
    system("pause");
    system("cls");

}

//�޸�ְ��
void WorkerManager::Mod_Emp()
{
    if (this->m_FileIsEmpty)//�ж��ļ��Ƿ���ڻ�Ϊ��
    {
        cout << "�ļ������ڻ��¼Ϊ�գ�" << endl;
    }
    else
    {
        cout << "�������޸�ְ���ı�ţ�" << endl;
        int id;
        cin >> id;

        int ret = this->IsExist(id);
        if (ret != -1)
        {
            //���ҵ���ŵ�ְ��
            delete this->m_EmpArray[ret];//�ͷŸɾ�ԭ�������������
            int newId = 0;
        
            string newName = " ";

            int dSelect = 0;

            cout << "���ң�" << id << "��ְ��������������ְ���ţ�" << endl;
            cin >> newId;

            cout << "������������" << endl;
            cin >> newName ;

            cout << "�������λ" << endl;
            cout << "1����ְͨ��" << endl;
            cout << "2������" << endl;
            cout << "3���ϰ�" << endl;
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
            //�������� ��������
            this->m_EmpArray[ret] = worker;

            cout << "�޸ĳɹ�" << this->m_EmpArray[ret]->m_DeptId << endl;

            //���浽�ļ���
            this->save();

        }
        else
        {
            cout << "���޴��ˣ��޸�ʧ��" << endl;
        }


    }
    //�����������
    system("pause");
    system("cls");

}


//����ְ��
void WorkerManager::Find_Emp()
{
    if (this->m_FileIsEmpty)
    {
        cout << "�ļ������ڻ��¼Ϊ��" << endl;

    }
    else
    {
        cout << "��������ҵķ�ʽ" << endl;

        cout << "1����ְ����Ų���" << endl;
        cout << "2������������" << endl;

        int select = 0;
        cin >> select;

        if (select == 1)//����Ž��в���
        {
            int id;
            cout << "��������ҵ�ְ�����" << endl;
            cin >> id;

            int ret = IsExist(id);
            if (ret != -1)
            {
                cout << "���ҳɹ�����ְ����Ϣ����" << endl;
                this->m_EmpArray[ret]->showInfo();


            }
            else
            {
                cout << "����ʧ�ܣ����޴���" << endl;

            }


        }
        else if (select == 2)//����������
        {
            string name;
            cout << "������Ҫ���ҵ�����" << endl;
            cin >> name;

            bool flag = false;//���ҵ��ı�ǩ
            for (int i = 0; i < m_EmpNum; i++)
            {
                if (m_EmpArray[i]->m_Name == name)
                {
                    cout << "���ҳɹ���ְ�����Ϊ��" << m_EmpArray[i]->m_Id<<" �ŵ���Ϣ���£�"<<endl;
                    flag = true;
                    this->m_EmpArray[i]->showInfo();

                }

            }
            if (flag == false)
            {
                //���޴���
                cout << "���޴��ˣ�����ʧ��" << endl;

            }
            else
            {
                cout << "����ѡ������" << endl;

            }

        }

        system("pause");
        system("cls");
    }






}

//����ְ��
void WorkerManager::Sort_Emp()
{
    if (this->m_FileIsEmpty)
    {
        cout << "�ļ������ڻ��¼Ϊ��" << endl;
        system("pause");
        system("cls");

    }
    else
    {
        cout << "��ѡ������ʽ��" << endl;
        cout << "1����ְ���Ž�������" << endl;
        cout << "2����ְ���Ž��н���" << endl;

        int select = 0;
        cin >> select;
        for (int i = 0; i < m_EmpNum; i++)
        {
            int minOrMax = i;

            for (int j = i + 1; j < m_EmpNum; j++)
            {
                if (select == 1)//����
                {
                    if (m_EmpArray[minOrMax]->m_Id)
                    {
                        minOrMax = j;

                    }


                }
                else //����
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
        cout << "����ɹ��������Ľ��Ϊ��" << endl;
        this->save();
        this->Show_Emp();


    }




}

//����ļ�
void WorkerManager::Clean_File()
{
    cout << "ȷ������ļ���" << endl;
    cout << "1��ȷ��" << endl;
    cout << "2������" << endl;

    int select = 0;
    cin >> select;

    if (select == 1)
    {//����ļ�
        //��ģʽ
        ofstream ofs(FILENAME, ios::trunc);//ɾ���ļ������´���

        ofs.close();

        if (this->m_EmpArray != NULL)
        {
            //ɾ��������ÿ��ְ������
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
        cout<<"��ճɹ���" << endl;


    }
    system("pause");

    system("cls");




}