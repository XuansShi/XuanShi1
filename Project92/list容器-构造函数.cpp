//list����-���캯��

#include <iostream>
#include <list>
#include <string>
#include <algorithm>

using namespace std;


//����ԭ�ͣ�
//1 list<T> lst;                  //list���ò���ģ����ʵ��,�����Ĭ�Ϲ�����ʽ��
//2 list(beg, end);               //���캯����[beg, end)�����е�Ԫ�ؿ���������
//3 list(n, elem);                //���캯����n��elem����������
//4 list(const list & lst);       //�������캯����


void printList(const list<int>&l)
{
	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
	{
		cout << *it << " ";

	}
	cout << endl;


}


void test01()
{
	//����list����
	list<int> L1;

	//�������
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	//��������
	cout << "��������L1��" << endl;
	printList(L1);


	//���䷽ʽ����
	cout<<"���䷽ʽ����L2��" << endl;
	list<int>L2(L1.begin(), L1.end());
	printList(L2);

	//��������
	cout << "��������L3��" << endl;
	list<int>L3(L2);
	printList(L3);


	//n��Ԫ��elem
	cout << "n��Ԫ��elem����L3��" << endl;
	list<int>L4(10, 1000);//10��1000
	printList(L4);

}

int main()
{
	test01();


	system("pause");
	return 0;
}