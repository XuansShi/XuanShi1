//deque����-���ݴ�ȡ
#include<iostream>
#include<string>
#include<deque>

using namespace std;


//����ԭ�ͣ�
//1 at(int idx);     //��������idx��ָ������
//2 operator[];     //��������idx��ָ������
//3 front();         //���������е�һ������Ԫ��
//4 back();             //�������������һ������Ԫ��

void printDeque(const deque<int>&d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

}

int main()
{
	deque<int> d1;
	deque<int>d2;

//����ԭ�ͣ�
//1 at(int idx);     //��������idx��ָ������
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	for (int i = 0; i <10;i++)
	{
		d1.push_front(i); 
	}

	cout << "d1��������ݣ�"  << endl;
	printDeque(d1);

	cout << "����d1�� ��0λ = " << d1.at(0) << endl;


//2 operator[];     //��������idx��ָ������
	cout << "����d1�� ��3λ = " << d1[3] << endl;


//3 front();         //���������е�һ������Ԫ��
	cout << "����d1�� ��λ = " << d1.front() << endl;


//4 back();             //�������������һ������Ԫ��
	cout << "����d1�� ĩλ = " << d1.back() << endl;



	system("pause");
	return 0;
}