#include<iostream>
using namespace std;

//常函数
  //成员函数后加const称之为常函数
  //常函数内不可以修改成员属性
  //成员属性声明时加关键字mutable后，在常函数中依然可修改
class Person
{
public:
	//习：this指针的本质是指针常量，指针的指向是不可修改的

	void showPerson() const
	{

		//m_A = 100;  这里会报错，m_A的值不能修改
	    //原因：
		  // 每一个成员函数内都有一个this指针
	



	}
	int m_A;
};





//常对象
  //声明对象前加const称该对象为常对象
  //常对象只能调用常函数

int main()
{


	system("pause");
	return 0;
}