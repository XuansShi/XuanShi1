#include <iostream>
using namespace std;
#include <string>
//������������ʱ��
//1��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���

//2��ֵ���ݵķ�ʽ������������ֵ


//3��ֵ��ʽ���ؾֲ�����

class Person
{
public:
Person()
{
	cout << "PersonĬ�Ϲ��캯������" << endl;



}


Person(int age)
{
	cout << "Person�вι���" << endl;
	m_Age = age;

}

Person(const Person &p)//�������캯��
{

	cout << "PersonĬ�Ϲ��캯������" << endl;
	m_Age = p.m_Age;



}




~Person()
{
	cout << "Person������������" << endl;


}
int m_Age; 




};

//1��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
void test01()
{
	Person p1(20);//ʹ���вι��캯��
	Person p2(p1);//ʹ�ÿ������캯��
	cout << "p2������Ϊ��" << p2.m_Age << endl;


}
//2��ֵ���ݵķ�ʽ������������ֵ
void doWork(Person p)
{



}


void test02()
{
	Person p;
	doWork(p);//�൱�ڵ��ÿ������캯��

}


//3��ֵ��ʽ���ؾֲ�����

Person  doWork2()
{
	Person p1;
	return p1;


}

void test03()
{
	Person p = doWork2();


}




int main()
{
	test01();






	system("pause");
	return 0;
}