//P127 ��Ͷ���-�̳�-�����﷨
#include<iostream>

using namespace std;
//�̳�ʵ��ҳ��

//����ҳ����
class BasePage
{
public:
	void  header()
	{
		printf("��ҳ�������Ρ���¼��ע��...(����ͷ��)\n");


	}
	void footer()
	{
		printf("�������ġ�����������վ�ڵ�ͼ...(�����ײ�)\n");


	}
	void left()
	{
		cout << "Java��Python��C++��...(���������б�)" << endl;

	}
	

};

//Javaҳ�� 
class Java :public BasePage
{
public:
	void content()
	{
		cout << "Javaѧ����Ƶ" << endl;
	}

};
//Pytonҳ��
class Python:public BasePage
{
public:
	void content()
	{
		cout << "Pythonѧ����Ƶ" << endl;
	}

};
//C++ҳ��
class Cpp :public BasePage
{
public:
	void content()
	{
		cout << "C++ѧ����Ƶ" << endl;
	}

};

//�̳еĺô���
  // �����ظ����루ͬ��#define��typedef)
//�﷨�� class ���� : �̳з�ʽ ����
  //���� Ҳ��Ϊ ������
  //���� Ҳ��Ϊ ����

void test01()
{
	cout << "Java������Ƶҳ������:" << endl;
	Java ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();
	cout << "--------------------------------------------" << endl;
	cout << "Python������Ƶҳ������:" << endl;
	Python py;
	py.header();
	py.footer();
	py.left();
	py.content();
	cout << "--------------------------------------------" << endl;
	cout << "C++������Ƶҳ������:" << endl;
	Cpp cpp;
	cpp.header();
	cpp.footer();
	cpp.left();
	cpp.content();


}


int main()
{
	test01();



	system("pause");
	return 0;

}




/*
//P127 ��Ͷ���-�̳�-�����﷨
#include<iostream>

using namespace std;
//��ͨʵ��ҳ��

//Javaҳ��
class Java
{
public :
	void  header()
	{
		printf("��ҳ�������Ρ���¼��ע��...(����ͷ��)\n");


	}
	void footer()
	{
		printf("�������ġ�����������վ�ڵ�ͼ...(�����ײ�)\n") ;


	}
	void left()
	{
		cout << "Java��Python��C++��...(���������б�)" << endl;

	}
	void content()
	{
		cout << "Javaѧ����Ƶ" << endl;
	}
};

class Python
{
public:
	void  header()
	{
		printf("��ҳ�������Ρ���¼��ע��...(����ͷ��)\n");


	}
	void footer()
	{
		printf("�������ġ�����������վ�ڵ�ͼ...(�����ײ�)\n");


	}
	void left()
	{
		cout << "Java��Python��C++��...(���������б�)" << endl;

	}
	void content()
	{
		cout << "Pythonѧ����Ƶ" << endl;
	}
};

class Cpp
{
public:
	void  header()
	{
		printf("��ҳ�������Ρ���¼��ע��...(����ͷ��)\n");


	}
	void footer()
	{
		printf("�������ġ�����������վ�ڵ�ͼ...(�����ײ�)\n");


	}
	void left()
	{
		cout << "Java��Python��C++��...(���������б�)" << endl;

	}
	void content()
	{
		cout << "C++ѧ����Ƶ" << endl;
	}
};

void test01()
{
	cout << "Java������Ƶҳ������:" << endl;
	Java ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();
	cout << "--------------------------------------------" << endl;
	cout << "Python������Ƶҳ������:" << endl;
	Python py;
	py.header();
	py.footer();
	py.left();
	py.content();
	cout << "--------------------------------------------" << endl;
	cout << "C++������Ƶҳ������:" << endl;
	Cpp cpp;
	cpp.header();
	cpp.footer();
	cpp.left();
	cpp.content();


}


int main()
{
	test01();



	system("pause");
	return 0;
}

*/