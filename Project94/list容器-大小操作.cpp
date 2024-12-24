//list����-��С����

#include <iostream>
#include <list>
#include <string>
#include <algorithm>

using namespace std;

//����ԭ�ͣ�
//1 size();                     //����������Ԫ�صĸ���

//2 empty();                  //�ж������Ƿ�Ϊ��

//3 resize(num);       //����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ�����λ�á�

                         //���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����

//4 resize(num, elem);   //����ָ�������ĳ���Ϊnum���������䳤������elemֵ�����λ�á�

                         //���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����

void PrintList(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";

	}
	cout << endl;


}



void test01()
{
	list<int>L1;
	list<int>L2;
	list<int>L3;
	list<int>L4;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	L1.push_back(50);
	L1.push_back(60);



	//2 empty();                            //�ж������Ƿ�Ϊ��

	if (L1.empty())
	{
		cout << "�жϽ��Ϊ�棬��ʱ����Ϊ��" << endl;

	}
	else
	{
		cout << "�жϽ��Ϊ�٣���ʱ������Ϊ��" << endl;
		//1 size();            //����������Ԫ�صĸ���
		cout << "L1Ԫ�ظ���Ϊ: "<<L1.size()  << endl;

	}


//3 resize(num);       //����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ�����λ��
						 //���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
	cout << " 3 resize(num)   ָ������ " << endl;
	L1.resize(10);
	PrintList(L1);

	cout << " 3 resize(num)   ָ������ " << endl;
	L1.resize(3);
	PrintList(L1);

//4 resize(num, elem);   //����ָ�������ĳ���Ϊnum���������䳤������elemֵ�����λ�á�
						 //���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����

	cout<<" 4 resize(num, elem)   ָ������ " << endl;
	L1.resize(20,1145);
	PrintList(L1);



}

int main()
{
	test01();



	system("pause");
	return 0;
}