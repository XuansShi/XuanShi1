//set����-��������ָ���������
#include<iostream>
#include<string>
#include<algorithm>
#include<set>

using namespace std;


//����һ���º���ʵ�ִӴ�С����
class MyCompare
{
public:
	//bool operator()(int v1,int v2) //ԭ�汾��û�м�const�ģ����Իᱨ��C3848
	//{
	//	return v1 > v2;

	//}

//���ڱ���C3848��
  //��bool operator()(int v1,int v2){} д�ɣ� bool operator()(int v1,int v2) const {} ���Խ������C3848
  //����������Ա�������const������thisָ�룬ʹthisָ���ֵҲ�����޸ģ�
    //�����޸����ڵ���ĳ�Ա�Ĳ������ǲ�����ģ���Ϊ�����˶�thisָ���const���ã���������const�ĳ�Ա����ֻ�ܱ���const������á�
    //���ǣ��ڳ�Ա����ǰ����mutable�ؼ������εĳ�Ա�����Ա��޸ġ�����const�ĳ�Ա�������Ա���const�����const������ã�






	bool operator()(int v1, int v2) const//����С����()    ��һ��С���ű�ʾҪ����С���ţ��ڶ���С���ű�ʾ���صĲ����б�
	{
		return v1 > v2;

	}


};



void PrintSet2(set<int, MyCompare> &s2)//��������������ҲҪ�޸ģ����Ϸº�����
{
	for (set<int, MyCompare>::iterator it = s2.begin(); it != s2.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

}



void PrintSet1(const set<int>& s1)
{
	for (set<int>::const_iterator it = s1.begin(); it != s1.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

}


void test01()
{
	cout << "s1��" << endl;
	set<int>s1;
	s1.insert(10);
	s1.insert(20);
	s1.insert(40);
	s1.insert(30);
	s1.insert(50);
	PrintSet1(s1);


	//�ڲ���ǰ�ͽ��������Ϊ�Ӵ�С��
	  //��������<>�����º�������ʵ�º����ı�����һ���������ͣ���
	cout << "s2��" << endl;
	set<int,MyCompare>s2;
	s2.insert(10);
	s2.insert(20);
	s2.insert(40);
	s2.insert(30);
	s2.insert(50);
	PrintSet2(s2);



}




int main()
{
	test01();



	system("pause");
	return 0;
}