//STL初识-Vector容器存放自定义数据类型
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

class Person
{
   public:
	   Person(string name, int age)
	   {
		   m_Name = name;
		   m_Age = age ;


	   }
	   string m_Name;
	   int m_Age;


};


//一、
void test01()
{
	vector<Person> v;

	Person p1("琪亚娜",16);
	Person p2("芽衣", 18);
	Person p3("布洛妮娅", 15);
	Person p4("符华", 50018);
	Person p5("德丽莎", 30);

	//尾插法向容器中插入参数
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	//遍历容器中的数据
	  //"每个容器都有自己专属的迭代器"，所以这里必须写<Person>
	for (vector<Person> ::iterator it = v.begin() ;it != v.end();it++)
	                          //起始迭代器↑ 不等于结束迭代器↑          
	{
		cout << "姓名" << (*it).m_Name << "年龄" << (*it).m_Age << endl;
		            //解引用然后点出↑才能得到你要的数据，注意要有小括号
		              //vector的<>里是什么数据类型，这里解引用得到的也是什么数据类型
	}
}


//二、存放自定义数据类型的指针（就是上面的指针版）
void test02()
{
	vector<Person*>v;//<>里面加*变成指针类型

	Person p1("凯文", 1);
	Person p2("爱莉希雅", 2);
	Person p3("阿波尼亚", 3);
	Person p4("伊甸", 4);
	Person p5("维尔薇",5 );

	//尾插法向容器中插入参数
	v.push_back(&p1);//传地址
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	v.push_back(&p5);

	//遍历容器
	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "姓名" << (*it)->m_Name << "位次" << (*it)->m_Age << endl;
			//你*解引用得到的是指针，还需要用箭头才能拿到数据
		//同理也可以这样写：cout << "姓名" << (**it).m_Name << "位次" << (**it).m_Age << endl;
	}


}

int main()
{
	test01();
	test02();



	system("pause");
	return 0;
}
