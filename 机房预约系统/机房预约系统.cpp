#include<iostream>
#include<string>
#include<fstream>
#include"globalFile.h"
#include"identity.h"
#include"student.h"
#include"teacher.h"
#include"manager.h"


using namespace std;

//ѧ���˵�
void studentMenu(Identity * &student)
{
	while (true)
	{
		//ѧ���˵�
		student->operMenu();

		Student* stu = (Student*)student;
		int select = 0;

		cin >> select;

		if (select == 1) //����ԤԼ
		{
			stu->applyOrder();
		}
		else if (select == 2) //�鿴����ԤԼ
		{
			stu->showMyOrder();
		}
		else if (select == 3) //�鿴����ԤԼ
		{
			stu->showAllOrder();
		}
		else if (select == 4) //ȡ��ԤԼ
		{
			stu->cancelOrder();
		}
		else
		{
			delete student;
			cout << "ע���ɹ�" << endl;
			system("pause");
			system("cls");
			return;
		}
	}
}





//�������Ա�Ӳ˵�����
void managerMenu(Identity*& manager)
{
	while (true)
	{
		//����Ա�˵�
		manager->operMenu();

		Manager*man = (Manager*)manager;//������ָ��תΪ����ָ�룬���������еķ���

		int select = 0;

		cin >> select;

		if (select == 1)//����˺�
		{
			cout << "����˺�" << endl;
			man->addPerson();


		}
		else if (select == 2)//�鿴�˺�
		{
			cout << "�鿴�˺�" << endl;
			man->showPerson();
		
		
		}
		else if (select == 3)//�鿴����
		{
			cout << "�鿴����" << endl;
			man->showComputer();
		}
		else if(select == 4)//���ԤԼ��¼
		{
			cout << "���ԤԼ��¼" << endl;
			man->cleanFile();
		}
		else
		{
			delete manager;
			cout << "ע���ɹ�" << endl;
			system("pause");
			system("cls");
			return;
			 
		}

	}

}




//��¼����
void LoginIn(string fileName, int type)
{
	Identity* person = NULL;//��ǰ׼��һ������ָ�룬����ָ���������

	//���ļ�
	ifstream ifs;
	ifs.open(fileName, ios::in);

	//�ļ�������ʱ
	if(!ifs.is_open())
	{
		cout << "�ļ�������" << endl;
		ifs.close();
		return;
	}

	int id = 0;

	string name;

	string pwd;

	if (type == 1)//ѧ����¼
	{
		cout << "���������ѧ��" << endl;
		cin >> id;

	}
	else if (type==2)//��ʦ��¼
	{
		cout << "���������ְ����" << endl;
		cin >> id;
	}

	cout<<"�������û���"<<endl;
	cin >> name;

	cout<<"����������" << endl;
	cin >> pwd;

	if (type == 1)
	{
		//ѧ����¼��֤
		int fId;//�ļ��е�ѧ��
		string fName;//�ļ��е�����
		string fPwd;//�ļ��е�����
		while (ifs >> fId && ifs >>fName && ifs>>fPwd)// ϰ��ifsÿ�ζ����ո�ͻ�ֹͣ������������ifs��ֱ�����ļ���ѧ����ID������������
		{
			//���û��������Ϣ���бȶ�
			if(fId == id && fName == name && fPwd == pwd)
			{
				cout << "ѧ����֤��¼�ɹ���" << endl;
				system("pause");
				system("cls");

				person = new Student(id, name, pwd);

				//����ѧ���Ӳ˵�
				person->operMenu();
				delete person;
				person = NULL;

				studentMenu(person);

				return;
			}




		}
		 

	}
	else if (type == 2)
	{

		//��ʦ��¼��֤
		int fId;
		string fName;
		string fPwd;
		while (ifs >> fId && ifs >> fName && ifs >> fPwd)
		{
			if (id == fId && name == fName && pwd == fPwd)
			{
				cout << "��ʦ��֤��¼�ɹ�!" << endl;
				system("pause");
				system("cls");
				person = new Teacher(id, name, pwd);

				//�����ʦ�Ӳ˵�
				teacherMenu(person);
				return;
			}
		}




	}

	else if (type == 3)
	{
		//����Ա��¼��֤
		string fName;
		string fPwd;
		while (ifs >> fName && ifs >> fPwd)
		{
			if (name == fName && pwd == fPwd)
			{
				cout << "��֤��¼�ɹ�!" << endl;
				//��¼�ɹ��󣬰�������������Ա����
				system("pause");
				system("cls");
				//��������Ա����
				person = new Manager(name, pwd);
				managerMenu(person);
				return;
			}
		}






	}

	cout << "��֤��¼ʧ�ܣ�" << endl;
	system("pause");
	system("cls");
	return;




}

int main()
{

	while (true)
	{
		cout << "======================  ��ӭ�������ǲ��ͻ���ԤԼϵͳ  ====================="
			<< endl;
		cout << endl << "�������������" << endl;
		cout << "\t\t -------------------------------\n";
		cout << "\t\t|                               |\n";
		cout << "\t\t|          1.ѧ������           |\n";
		cout << "\t\t|                               |\n";
		cout << "\t\t|          2.��    ʦ           |\n";
		cout << "\t\t|                               |\n";
		cout << "\t\t|          3.�� �� Ա           |\n";
		cout << "\t\t|                               |\n";
		cout << "\t\t|          0.��    ��           |\n";
		cout << "\t\t|                               |\n";
		cout << "\t\t -------------------------------\n";
		cout << "��������ѡ��: ";


		int select = 0;

		cin >> select;

		switch (select)
		{
		case 1://1 ѧ������
			LoginIn(STUDENT_FILE, 1);
			break;

		case 2://2 ��ʦ
			LoginIn(TEACHER_FILE, 2);
			break;

		case 3://3 ����Ա
			LoginIn(ADMIN_FILE, 3);
			break;

		case 0://0 �˳�
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;

		default:
			cout << "��������������ѡ��" << endl;
			system("pause");
			system("cls");
			break;
		}

	}
	

	system("pause");
	return 0;
}


//�����ʦ�Ӳ˵�����
void teacherMenu(Identity*& teacher)
{
	while (true)
	{ 
		//�����Ӳ˵�����
		teacher->operMenu();
		Teacher* tea = (Teacher*)teacher;

		int select = 0;

		cin >> select;

		if (select == 1)
		{
			//�鿴����ԤԼ
			tea->showAllOrder();
		}
		else if (select == 2)
		{
			//���ԤԼ
			tea->validOrder();
		}
		else
		{
			delete teacher;
			cout << "ע���ɹ�" << endl;
			system("pause");
			system("cls");
			return;
		}


	}



}





