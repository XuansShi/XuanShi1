#include<iostream>
using namespace std;
#include<string>



class Building//��������
{
	friend void goodGay(Building* building);

public:
	string m_SittingRoom;//����

	Building()//���캯��
	{
		m_SittingRoom = "����";
		m_BedRoom = "����";

	}


private:
	string m_BedRoom;//����



};
//дһ��ȫ�ֺ���
void goodGay(Building *building)//������ָ��������ö�����
{
	cout << "�û���ȫ�ֺ��� ���ڷ���" << building->m_SittingRoom << endl;
	cout << "�û���ȫ�ֺ��� ���ڷ���" << building->m_BedRoom << endl;


}

void test01()
{


	Building building;//ʵ������building����
	goodGay(&building);//�����ַ

}


int main()
{

	test01();

	system("pause");
	return 0;
}