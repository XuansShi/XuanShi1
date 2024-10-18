#include <iostream>
using namespace std;

class 动物
{
public:
	int m_Age;

};

class 艾雅法拉:virtual public 动物{};

class 穆图:virtual public 动物{};

class 羊驼:public 艾雅法拉,public 穆图{};

void test01()
{
	羊驼 st;

	//st.m_Age = 18;//不加作用域就有二义性了，此处报错“不明确”
	st.艾雅法拉::m_Age = 18;
	st.穆图::m_Age = 28;
	cout << "st.艾雅法拉::m_Age = "<< st.艾雅法拉::m_Age << endl;
	cout << "st.穆图::m_Age = " << st.穆图::m_Age << endl;
   //当出现菱形继承（两个父类拥有同名数据），需要加以作用域区分

	//显然这样让一个变量有了两份数据，造成了资源的浪费
  //利用虚继承，可解决该问题
	//虚继承语法:class 子类: virtual 继承方式 父类{};
  //此时 class动物称为“虚基类”  
  
  //此时你再写一个cout<<"st.m_Age = "<<st.m_Age<<endl;它就不会再报错了
	cout << "st.m_Age = " << st.m_Age << endl;
}



int main()
{
	test01();


	system("pause");
	return 0;
}