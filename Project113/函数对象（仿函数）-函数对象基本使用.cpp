//�������󣨷º�����-�����������ʹ��
#include<iostream>
#include<string>
using namespace std;

//�ص㣺
//1 ����������ʹ��ʱ����������ͨ������������, �����в����������з���ֵ

//2 �������󳬳���ͨ�����ĸ����������������Լ���״̬

//3 �������������Ϊ��������



//1 ����������ʹ��ʱ����������ͨ������������, �����в����������з���ֵ
class MyAdd//ʹ�÷º�������С���ţ�ʵ�ּӷ�
{
public:
	int operator()(int  v1 ,int v2)//������Ա��������������С����
	{
		return v1 + v2;


	}



};

void test01()
{
	MyAdd myAdd;
	cout << myAdd(10, 20) << endl;



}

//2 �������󳬳���ͨ�����ĸ����������������Լ���״̬
class MyPrint//ʹ�÷º�������С���ţ�ʵ�ִ�ӡ���ܣ�ͬʱ�Էº�����ʹ�ô������м���
{
public:
	//��������������Լ���״̬1��
	  //�˴��Ե��ô���Ϊ��
	int count = 0;

	MyPrint()//ע�⹹�캯��ֻ����ʵ������ʱ��Ż���Ч
	{
		this->count = 0;
	}

	void operator()(string s)
	{
		cout << s << endl;
		this->count++;
	}
	
	//����ͨ������һ�������Ƿº������ŵ㣬��ͨ����������ȫ�ֱ������߾�̬�����ᱻ�ͷŵ�������ˣ����º�������
};

void test02()
{
	MyPrint myprint;//ע�⹹�캯��ֻ���ڴ��������ʱ��Ż���Ч����������ļ��в�����count����
	myprint("HELLO_WORLD");
	myprint("HELLO_WORLD");
	myprint("HELLO_WORLD");
	myprint("HELLO_WORLD");
	cout << "�������󣨷º�����MyPrint��״̬-���ô�����" << myprint.count << endl;


}

//3 �������������Ϊ��������
void doPrint(MyPrint &mp,string test)
{
	mp(test);//ֱ�ӽ���������MyPrint������ͨ����doPrint��Ȼ����ú�������

}

void test03()
{
	MyPrint myprint;
	doPrint(myprint, "HELLO_C++");
}

int main()
{
	test01();
	test02();
	test03();
	

	system("pause");
	return 0;
}