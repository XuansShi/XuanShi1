//���ñ����㷨transform
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

/*
����ԭ�ͣ�
transform(iterator beg1, iterator end1, iterator beg2, _func);

//beg1 Դ������ʼ������

//end1 Դ��������������

//beg2 Ŀ��������ʼ������

//_func �������ߺ�������
*/

class Transform
{
public:
	int operator()(int v)
	{
		return v;
	}


};

class MyPrint
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}


};


void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);

	}

	vector<int>Targetv;
	Targetv.resize(v.size());//ע��Ҫ��ǰ�����˵����������ٿռ�

	transform(v.begin(), v.end(), Targetv.begin(), Transform());//����

	for_each(Targetv.begin(), Targetv.end(), MyPrint());//���������Ҵ�ӡ


}


int main()
{
	test01();

	return 0;
	system("pause");
}
