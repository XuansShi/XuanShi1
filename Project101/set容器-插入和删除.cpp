//set����-�����ɾ��
#include<iostream>
#include<set>
#include<string>
#include<algorithm>

using namespace std;

//����ԭ�ͣ�
//1.	insert(elem);           //�������в���Ԫ�ء�

//2.	clear();                    //�������Ԫ��

//3.	erase(pos);              //ɾ��pos��������ָ��Ԫ�أ�������һ��Ԫ�صĵ�������

//4.	erase(beg, end);    //ɾ������[beg,end)������Ԫ�� ��������һ��Ԫ�صĵ�������

//5.	erase(elem);            //ɾ��������ֵΪelem��Ԫ�ء�



void PrintSet(const set<int>& s)
{
	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";

	}
	cout << endl;
}



void test01()
{
	set<int>s1;

	//1.	insert(elem);           //�������в���Ԫ�ء�
	cout << "1 insert(elem)" << endl;
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);
	PrintSet(s1);

	//3.	erase(pos);              //ɾ��pos��������ָ��Ԫ�أ�������һ��Ԫ�صĵ�������
	cout << "3 erase(pos)" << endl;
	set<int>::iterator it = s1.begin();
	it++;
	s1.erase(it);
	PrintSet(s1);

	//4.	erase(beg, end);    //ɾ������[beg,end)������Ԫ�� ��������һ��Ԫ�صĵ�������
	cout << "4 erase(beg, end)" << endl;
	s1.erase(s1.begin(), s1.end());
	PrintSet(s1);

	//5.	erase(elem);            //ɾ��������ֵΪelem��Ԫ�ء�
	cout << "5 erase(elem)" << endl;
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);
	PrintSet(s1);

	s1.erase(10);
	PrintSet(s1);


	//2.	clear();                    //�������Ԫ��
	cout << "2 clear()" << endl;
	s1.clear();
	PrintSet(s1);

}


int main()
{
	test01();


	system("pause");
	return 0;
}