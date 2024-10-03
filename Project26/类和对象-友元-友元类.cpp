#include <iostream>
#include <string>
using namespace std;

//类做友元

class Building//Building类
{
	friend class GoodGay;;
public:

	Building();//构造函数 本节学习一下在类外构造函数

	string m_SittingRoom;//公共 客厅

private:
	string m_BedRoom;//私有 卧室


};

//本节学习一下在类外构造函数（写成员函数）：

Building::Building()//习：设置作用域
{
	//给成员变量赋予初值
	m_SittingRoom = "客厅";

	m_BedRoom = "卧室";

};







class GoodGay//好基友类
{
public:
	Building * building;//Building类型的building指针

	GoodGay();//构造函数  这里也学习一下在类外构造的方法


	void visit();//声明参观函数 访问Building类的公共和私有属性
	
	//注意声明的时候不要写函数体，不然会卡住后面使得无法定义函数
};

GoodGay:: GoodGay()//学习一下在类外构造函数的方法
{
	//创建建筑物的对象
	building = new Building;//用new在堆区创建一个对象
	//上面写了个“Building * building;”Building类型的building指针,让它指向new出的对象building
	
	//习：new出什么数据类型就返回什么数据类型


}

//参观函数
void GoodGay::visit()//习：这个作用域写在返回值类型后，函数名前
{
	cout << "好基友类正在访问" << building->m_SittingRoom << endl;

	cout << "好基友类正在访问" << building->m_BedRoom << endl;//如果你不采取措施，这里就会报错
	//↑就是这里用到了本节的内容
	  //你只需要像上一节那样（把朋友函数声明放到class内部的最前面)，写一个GoodGay友元类在Building类的最前面就好
}


//测试函数：
void test01()
{
	GoodGay gg;//实例化出一个对象gg

	gg.visit();//用gg调用GoodGay作用域的visit函数


}

int main()
{
	test01();
	//先讲一下运行test01会发生什么：
	  //1 先实例化得到对象gg
	  //2 创建对象gg时，先调用GoodGay的构造函数
	  //3 在GoodGay构造函数里，它创建了一个对象building
      //4 创建对象building时，也会调用Building的构造函数，然后赋予成员变量初值
	  //5 然后对象gg点出visit函数，输出“好基友正在访问客厅”


	system("pause");
	return 0;
}