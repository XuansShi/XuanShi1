#include <iostream>
using namespace std;
#include <string>
//1���캯���ķ��༰����
//����
  //�������֣� �޲ι���(Ĭ�Ϲ���,Ҳ�����㲻�ṩ��ʱ��������Զ�������һ���޲ε�) �� �вι���
  //�����ͷ֣� ��ͨ���� ��������

class Person
{
public:
	//���캯��
	Person()
	{
		cout << "Person���޲ι��캯������" << endl;

	}

	Person(int a )
	{
		age = a;
		cout << "Person���вι��캯������" << endl;

	}
	 
	//�������캯��
	Person(const Person &p)//����������д���� const ��������ͬ���������� ��ַ
	{

		//��������������������Կ�����������
		age = p.age;
		cout << "Person�Ŀ������캯������" << endl;

	}


	 

	//��������
	~Person()
	{
		cout << "Person��������������" << endl;


	}

	int age;




};


//����
void test01()
{
 //1.���ŷ�    ������
	//Person p1;//Ĭ�Ϲ��캯���ĵ���
	//Person p2(10);//�вι��캯���ĵ���
	//Person p3(p2);

	//cout << "p2������Ϊ��"<<p2.age << endl;
	//cout << "p3������Ϊ��" << p3.age << endl;
	
    // ע�����
	// ����Ĭ�Ϲ��캯����ʱ��Ҫ��()
	// ��Ϊ����������Ϊ���Ǻ��������� eg�� Person p1();
	
 //2.��ʾ��
	//Person p1;
	//Person p2 = Person(10);//�вι���
	//Person p3 = Person(p2);//��������

	// Person(10)�����������ڵ�ǰִ�н�����ϵͳ������������������
	//cout << "AAAA" << endl;
	
	//ע������2:
	//��Ҫ���ÿ������캯����ʼ����������
	//eg Person(p3);    ����������Ϊ���� Person p3 Ҳ����ʵ�������󣬻ᷢ���ض���


	//3.��ʽת����
	Person p4 = 10; //�൱��д�� Person p4 = Person(10);
	Person p5 = p4;//��������

}







int main()
{



	system("pause");
	return 0; 
}