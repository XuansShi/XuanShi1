#include<iostream>
using namespace std;
//P116 类和对象-对象特性-空指针访问成员函数
//空指针调用成员函数
class Person
{
public:
	void showClassName()
	{

		cout << "this is Person class" << endl;


	}

	void showPersonAge()
	{
		

		if (this == NULL)
		{

			return;
		}
		//加上这个if就可以解决由空指针带来的问题
		 //释义：如果传入的空指针就直接返回结束，不会运行下面的cout

		
		cout << "age = " << m_Age << endl;
	
	}


	int m_Age;
};

void test01()
{
	Person* p = NULL;//Person类型的指针指向NULL空 

	p->showClassName();//使用空指针调用成员函数
	p->showPersonAge();

}
//像这样运行会出错
  //但是 只运行 p->showClassName();  不会出错
  //发现运行 p->showPersonAge(); 会出错 
    //报错：读取访问权限错误
	
//分析： 
  //其实属性前都默认加了个 this->
    //cout << "age = " << m_Age << endl;
      //相当于 cout << "age = " << this->m_Age << endl;
  //但此时用了个空指针，相当于这个对象是个空的没有实体的东西，也就是没有任何对象
  //用一个空的值不能访问一个属性。也就是无法访问 不确切对象的属性

  //报错原因是传入的指针为空NULL




 
int main()
{
	test01();



	system("pause");
	return 0;
}