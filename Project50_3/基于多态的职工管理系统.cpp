#include <iostream>
#include "workerManager.h"

using namespace std;

int main()
{
	//���ó�Ա����ǰ����Ҫ:
	 //ʵ���������ߵĶ���
	WorkerManager wm;

	int choice = 0;//���������û���ѡ��


	while (1)
	{
		//��ʾ�˵�
		//���ó�Ա������
		wm.Show_Menu();
	
		cout << "����������ѡ��" << endl;
		cin >> choice;

		switch (choice)
		{
		case 0://�˳�ϵͳ
			wm.ExitSystem();

			break;
         
		case 1://�˳�ϵͳ

			break;

		case 2://�˳�ϵͳ

			break;

		case 3://�˳�ϵͳ

			break;

		case 4://�˳�ϵͳ

			break;

		case 5://�˳�ϵͳ

			break;

		case 6://�˳�ϵͳ

			break;

		case 7://�˳�ϵͳ

			break;

		default:
			system("cls");
			break;
		}

	}




	system("pause");
	return 0;
}