#include <iostream>
using namespace std;
#include<string.h>

class Building;

//声明一下class Building
  //因为你要用到Building类型，而且你又必修把class Building写在class GoodGay后面

class GoodGay
{
public:
	GoodGay();

	Building * building;

	void visit();//让visit函数可以访问Building中私有成员
	void visit2();//让visit2函数不可以访问Building中私有成员




};
//卡住：这两个类的顺序不要改
class Building
{
	friend void GoodGay::visit();//告诉编译器，GoodGay类下的visit成员函数是本类的好朋友，可以访问private



public:
	Building();//构造函数实名 //这里为了复习一下在类外书写，所以写外面了


	string m_SittingRoom;//客厅

private:
	string m_BedRoom;//卧室
};

Building::Building()//类外实现构造函数
{
	m_SittingRoom = "客厅";

	m_BedRoom = "卧室";



}


GoodGay::GoodGay()
{
	building = new Building;//用指针维护建筑物对象




}





void GoodGay :: visit()
{
	cout << "visit函数正在访问： " << building->m_SittingRoom << endl;

	cout << "visit函数正在访问： " << building->m_BedRoom << endl;

}

void GoodGay :: visit2()
{
	cout << "visit2函数正在访问： " << building->m_SittingRoom << endl;

	//cout << "visit2函数正在访问： " << building->m_BedRoom << endl;

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