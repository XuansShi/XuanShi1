//ģ��-��ģ���뺯��ģ������
#include <iostream>
#include <string>
using namespace std;

template<class NameType,class AgeType>
class Person1
{
public:

	NameType m_Name;
	AgeType m_Age;

	Person1(NameType name, AgeType age)
	{
		this->m_Name = name;
		this->m_Age = age;


	}

	void showPerson()
	{
		cout << "m_Name = " << this->m_Name << " " << "m_Age = " << this->m_Age << endl;
	}


};

//1����ģ��û���Զ������Ƶ�ʹ�÷�ʽ��ֻ������ʾָ������
void test01()
{
	Person1<string, int>p1("wukong",1000);

	p1.showPerson();

}




//2����ģ����ģ������б��п�����Ĭ�ϲ���
    //����������ڡ�template<class NameType,class AgeType>���У��ü�����������͵���ʵ�ʵ����ͣ�
      //Ҳ����template<class NameType,class AgeType=int>�����£�
template<class NameType, class AgeType = int>
class Person2
{
public:

	NameType m_Name;
	AgeType m_Age;

	Person2(NameType name, AgeType age)
	{
		this->m_Name = name;
		this->m_Age = age;


	}

	void showPerson()
	{
		cout << "m_Name = " << this->m_Name << " " << "m_Age = " << this->m_Age << endl;
	}


};




void test02()
{
	Person2<string>p2("bajie", 900);//�ͺ���һ���ģ���Ĭ�ϲ���ʱ�������˾��ô��Σ�û���ξ���Ĭ��

	p2.showPerson();

}

int main()
{
	test01();
	test02();

	system("pause");
	return 0;
}