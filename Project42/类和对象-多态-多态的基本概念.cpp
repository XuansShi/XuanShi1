//类和对象-多态-多态的基本概念
#include <iostream>
using namespace std;

//动物类
class Animal
{
public:
	virtual void  speak()
	{

		cout << "动物在说话" << endl;
	}

};

//猫类
class Cat :public Animal
{
	void speak()
	{

		cout << "杰西卡在说话" << endl;
	}


};

//狗类
class Dog :public Animal
{
	void speak()
	{

		cout << "拉普兰德在说话" << endl;
	}


};


//执行说话的函数
void doSpeak(Animal& animal)
{
	animal.speak();


}




void test01()
{

	Cat cat;
	doSpeak(cat);//Animal & animal = cat （用Animal & animal接受cat)

	//在C++中允许父子之间的类型转换，不需要做强制转换

	//这里发现输出结果是“动物在说话”，是“静态多态的函数地址早绑定” ，即编译阶段就能确定地址 

	//如果需要使用 “猫猫在说话”，就需要使用动态多态了。也就是不能让这个函数地址提前绑定(不可让它在编译阶段绑定)，需要在运行阶段绑定（地址晚绑定)

	//只需要把动物类的成员函数改成虚函数，也就是在父类返回值类型前加上virtual（子类的virtual可写可不写）
	//这样函数就会根据传入的地址来选择调用哪个函数

	//据此写一个狗子在说话的函数：
	Dog dog;
	doSpeak(dog);


}
/*
动态多态满足条件：
1、	有继承关系
2、	子类重写父类的虚函数
	//重写：函数返回值类型、函数名、参数列表完全相同
*/


//动态多态的使用：
  //父类的指针或者引用执行子类对象



int main()
{
	test01();



	system("pause");
	return 0;
}