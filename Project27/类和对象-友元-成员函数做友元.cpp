#include <iostream>
using namespace std;
#include<string.h>

class Building;

//����һ��class Building
  //��Ϊ��Ҫ�õ�Building���ͣ��������ֱ��ް�class Buildingд��class GoodGay����

class GoodGay
{
public:
	GoodGay();

	Building * building;

	void visit();//��visit�������Է���Building��˽�г�Ա
	void visit2();//��visit2���������Է���Building��˽�г�Ա




};
//��ס�����������˳��Ҫ��
class Building
{
	friend void GoodGay::visit();//���߱�������GoodGay���µ�visit��Ա�����Ǳ���ĺ����ѣ����Է���private



public:
	Building();//���캯��ʵ�� //����Ϊ�˸�ϰһ����������д������д������


	string m_SittingRoom;//����

private:
	string m_BedRoom;//����
};

Building::Building()//����ʵ�ֹ��캯��
{
	m_SittingRoom = "����";

	m_BedRoom = "����";



}


GoodGay::GoodGay()
{
	building = new Building;//��ָ��ά�����������




}





void GoodGay :: visit()
{
	cout << "visit�������ڷ��ʣ� " << building->m_SittingRoom << endl;

	cout << "visit�������ڷ��ʣ� " << building->m_BedRoom << endl;

}

void GoodGay :: visit2()
{
	cout << "visit2�������ڷ��ʣ� " << building->m_SittingRoom << endl;

	//cout << "visit2�������ڷ��ʣ� " << building->m_BedRoom << endl;

}

void test01()
{
	GoodGay gg;
	gg.visit();
	gg.visit2();

}



int main()
{

	test01();




	system("pause");
	return 0;

}