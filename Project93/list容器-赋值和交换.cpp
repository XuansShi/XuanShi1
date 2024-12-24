//list����-��ֵ�ͽ���

#include<iostream>
#include<list>
#include<string>
#include<algorithm>
using namespace std;

//����ԭ�ͣ�
//1 assign(beg, end);                     //��[beg, end)�����е����ݿ�����ֵ������

//2 assign(n, elem);                      //��n��elem������ֵ������

//3 list & operator=(const list & lst);   //���صȺŲ�����

//4 swap(lst);                            //��lst�뱾���Ԫ�ػ�����


void PrintList(const list<int>& L)
{
	for(list<int>::const_iterator it =L.begin();it !=L.end();it++)
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

//3 list & operator=(const list & lst);   //���صȺŲ�����
	L2 = L1;
	PrintList(L2);


//1 assign(beg, end);                     //��[beg, end)�����е����ݿ�����ֵ������
	L3.assign(L2.begin(), L2.end());
	PrintList(L3);


//2 assign(n, elem);                      //��n��elem������ֵ������
	L4.assign(10, 1000);
	PrintList(L4);



//4 swap(lst);                            //��lst�뱾���Ԫ�ػ�����




}


void test02()
{
	list<int>L1;
	list<int>L2;
	list<int>L3;
	list<int>L4;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	L2.assign(10, 200);
	cout << "����ǰ��" << endl;
	PrintList(L1);
	PrintList(L2);

	
	cout << "������" << endl;
    L1.swap(L2);
	PrintList(L1);
	PrintList(L2);


}

int main()
{
	test01();

	test02();

	system("pause");
	return 0;
}