//��Ͷ���-��̬-���麯���ͳ�����
#include <iostream>
using namespace std;

//���麯�� �� ������

class Base//������
{
public:
	virtual void func() = 0;//���麯��   ���麯�������д��0

	//ֻҪ��һ�����麯���������ͳ�Ϊ������
	 
	
	//�������ص㣺
	  //1.�޷�ʵ��������         ����BaseҲ����     
	  //2.����������� ����Ҫ��д�����еĴ��麯��������Ҳ���ڳ�����
};

class Son :public Base
{
public:
	 void func()
	{
		 cout << "func�ĺ�������" << endl;//��д���麯��

	
	}
	

};


void test01()
{
	Base* base = new Son;
	base->func();
	//����new������ʲô���󣬵��õľ���ʲô�����func����

	Son s;	Son s;//��Son������д�˴��麯��func��������ܳɹ�ʵ��������ȻSon��Ҳ�ǳ�����

}
int main()
{
	test01();


	system("pause");
	return 0;
}