//list容器-排序案例
#include <iostream>
#include<string>
#include<list>
#include<algorithm>
using namespace std;

//案例描述：将Person自定义数据类型进行排序，Person中属性有姓名、年龄、身高

//排序规则：按照年龄进行升序，如果年龄相同按照身高进行降序

class Person
{
public:
	Person(string name, int age, int height)
	{
		//习：“用this直接箭头找到成员数据，很快”
		this->m_Name = name;
		this->m_Age = age;
		this->m_Height = height;

	}

	string m_Name;//姓名
	int m_Age;//年龄
	int m_Height;//身高






};
void PrintList(const list<Person>&p)
{
	for (list<Person>::const_iterator it = p.begin(); it != p.end(); it++)
	{
		//习：  使用class类型的容器：用小括号括起来先解引用，再点出
		cout <<"姓名  " << (*it).m_Name << "  ";
		cout <<"年龄  " << (*it).m_Age << "  ";
		cout <<"身高  " << (*it).m_Height <<endl;
		//习：  it也可以当成指针来对待，所以你用箭头，比如  it->m_Name  也是可以的


	}
	cout << endl;


}


//指定排序规则(此处写一个仿函数):
  //一般步骤：
    //1.  bool数据类型
    //2.  传入两个相同数据类型的变量进行比较
    //3.  return返回   升序：第一个小于第二个；降序：第二个小于第一个
    //4.  高级排序可以用if
bool compare(Person &p1,Person &p2)
{
	
	if (p1.m_Age == p2.m_Age)
	{
		//若年龄相等，则身高降序
		return p1.m_Height > p2.m_Height;

	}
	else
	{
		//按照年龄 升序
		return p1.m_Age < p2.m_Age;//升序就是要让前一个较小
	}


}


void test01()
{

	list<Person>L;

	Person p1("刘备", 35, 175);
	Person p2("曹操", 45, 180);
	Person p3("孙权", 40, 170);
	Person p4("赵云", 25, 190);
	Person p5("张飞", 35, 160);
	Person p6("关羽", 35, 200);

	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	L.push_back(p5);
	L.push_back(p6);

	//实现目标：排序规则：按照年龄进行升序，如果年龄相同按照身高进行降序
	cout << "排序前：" << endl;
	PrintList(L);

	cout << "--------------------------------------------------------------------" << endl;

	cout << "排序后：" << endl;
	L.sort(compare);//如果你操纵的是自定义的数据类型，那你使用list的sort时必须指明排序规则（也就是 回调函数 或者 仿函数）
	PrintList(L);

}



int main()
{
	test01();

	system("pause");
	return 0;
}
