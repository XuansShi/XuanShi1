//set����-set��multiset����
#include<iostream>
#include<set>
#include<string>
#include<algorithm>

using namespace std;

//����
//set�����Բ����ظ����ݣ���multiset����
//set�������ݵ�ͬʱ�᷵�ز���������ʾ�����Ƿ�ɹ�
//multiset���������ݣ���˿��Բ����ظ�����





void PrintSet(const set<int>& s)
{
	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";

	}
	cout << endl;
}

void PrintMultiset(const multiset<int>& ms)
{
	for (multiset<int>::const_iterator it = ms.begin(); it != ms.end(); it++)
	{
		cout << *it << " ";

	}
	cout << endl;
}



void test01()
{

	cout << "set������" << endl;

	set<int>s1;
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);
	PrintSet(s1);

	//������set��insert�Ķ��壺
	/*template <bool _Multi2 = _Multi, enable_if_t<!_Multi2, int> = 0>
	pair<iterator, bool> insert(value_type && _Val) {
		const auto _Result = _Emplace(_STD move(_Val));
		return { iterator(_Result.first, _Get_scary()), _Result.second };
	}*/
	  
	  //insert����ֵ��������һ�� pair<iterator, bool>����
	    //������ǳɶԳ��ֵ����ݣ��˴���һ�������ǵ��������ڶ�����bool�������Ƿ����ɹ���

	pair<set<int>::iterator, bool> ret ;
	ret = s1.insert(10);
	if (ret.second)//ʹ�õ���õ�����ĵڶ�������
	{
		cout << "����ɹ�" << endl;
	}
	else
	{
		cout << "����ʧ�ܣ������Ѿ����ڸ�Ԫ��" << endl;
	}


	cout << "multiset������" << endl;
	multiset<int> ms1;
	ms1.insert(10);
	ms1.insert(10);
	ms1.insert(10);
	ms1.insert(10);

	//������multiset��insert�Ķ��壺
	/*template <bool _Multi2 = _Multi, enable_if_t<_Multi2, int> = 0>
	iterator insert(value_type && _Val) {
		return iterator(_Emplace(_STD move(_Val)).first, _Get_scary());
	}*/

	  //���Կ���insert����ֵ�����������ǵ����������Բ����ж��Ƿ�����ظ�

	PrintMultiset(ms1);

}


int main()
{
	test01();


	system("pause");
	return 0;
}
