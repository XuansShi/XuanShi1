#include<iostream>
using namespace std;
#include<string>



class Building//建筑物类
{
	friend void goodGay(Building* building);

public:
	string m_SittingRoom;//客厅

	Building()//构造函数
	{
		m_SittingRoom = "客厅";
		m_BedRoom = "卧室";

	}


private:
	string m_BedRoom;//卧室



};
//写一个全局函数
void goodGay(Building *building)//这里用指针或者引用都可以
{
	cout << "好基友全局函数 正在访问" << building->m_SittingRoom << endl;
	cout << "好基友全局函数 正在访问" << building->m_BedRoom << endl;


}

void test01()
{


	Building building;//实例化出building对象
	goodGay(&building);//传入地址

}


int main()
{

	test01();

	system("pause");
	return 0;
}