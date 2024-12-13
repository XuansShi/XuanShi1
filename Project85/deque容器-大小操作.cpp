//deque����-��С����
#include <iostream>
#include <deque>
#include <string>

using namespace std;

//����ԭ�ͣ�
//1 deque.empty();             //�ж������Ƿ�Ϊ��

//2 deque.size();              //����������Ԫ�صĸ���

//3 deque.resize(num);         //����ָ�������ĳ���Ϊnum,�������䳤������Ĭ��ֵ�����λ�á�
                               //���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����

//4 deque.resize(num, elem);   //����ָ�������ĳ���Ϊnum,�������䳤������elemֵ�����λ�á�
                               //���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����


//ע�⵽vector��deque���������dequeû�С��������ĸ�����Ĵ�С��������

void printDeque(const deque<int>&d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;


}


void test01()
{
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{

		d1.push_back(i);
	}
	printDeque(d1);

//1 deque.empty();             //�ж������Ƿ�Ϊ��
	cout << "1 deque.empty();             //�ж������Ƿ�Ϊ��" << endl;
	if (d1.empty())
	{
		cout << "d1Ϊ��" << endl;
	}
	else
	{
		cout << "d1��Ϊ��" << endl;
//2 deque.size();              //����������Ԫ�صĸ���
		cout << "2 deque.size();              //����������Ԫ�صĸ���" << endl;
		cout << "d1�Ĵ�С(������Ԫ�صĸ���)Ϊ = " << d1.size() << endl;

	}


//3 deque.resize(num);         //����ָ�������ĳ���Ϊnum,�������䳤������Ĭ��ֵ�����λ�á�
							   //���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
	cout << "3 deque.resize(num);" << endl;

	d1.resize(15);
	printDeque(d1);
	d1.resize(10);
	printDeque(d1);


//4 deque.resize(num, elem);   //����ָ�������ĳ���Ϊnum,�������䳤������elemֵ�����λ�á�
							   //���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
	cout << "4 deque.resize(num, elem);" << endl;
	d1.resize(20, 1);
	printDeque(d1);


	



}


int main()
{
	test01();




	system("pause");
	return 0;
}