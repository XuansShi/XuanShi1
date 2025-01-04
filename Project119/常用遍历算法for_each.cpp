//���ñ����㷨for_each
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;


/*
for_each


���ܣ�ʵ�ֱ�������


����ԭ�ͣ�
for_each(iterator beg, iterator end, _func);

//�����㷨 ��������Ԫ��

//beg ��ʼ������

//end ����������

//_func �������ߺ�������

*/

//_funcΪ��ͨ����
void print01(int val)
{
	cout << val << " ";
}

//_funcΪ�º���
class Print02
{
public:
	void operator()(int val)
	{
		cout<< val<<" ";
	}


};

void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);

	}


	//_funcΪ��ͨ����
	for_each(v.begin(), v.end(), print01);
	cout << endl;

	

	//_funcΪ��������
	for_each(v.begin(), v.end(), Print02());
	cout << endl;

}


int main()
{
	test01();

}

