//list����-���ݴ�ȡ

#include<iostream>
#include<string>
#include<list>
#include<algorithm>
using namespace std;

//����ԭ�ͣ�
//1 front();       //���ص�һ��Ԫ�ء�

//2 back();        //�������һ��Ԫ�ء�

//list������vector��deque������ͬ������֧��ʹ�� ����[] �� at ���������ݴ�ȡ
  //��Ϊlist������ÿ������֮�䲻�������ģ�
    //���Ա����ϲ�����Ծʽ����
    //���ǿ��Դ���һ��������Ȼ�󲻶ϵ�++/--

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
	L1.push_back(1);
	L1.push_back(2);
	L1.push_back(3);
	L1.push_back(4);

	cout << "L1�����ĵ�һ��Ԫ��" << L1.front() << endl;

	cout << "L1���������һ��Ԫ��" << L1.back() << endl;

	//��֤list�ĵ�������֧��������ʣ�
	list<int>::iterator it = L1.begin();

	//it = it + 1;  �����ᱨ����ֻ��++/-- ���£�
	it++;
	it--;//++��--������������֧��˫��

	PrintList(L1);

}


int main()
{
	test01();



	system("pause");
	return 0;
}