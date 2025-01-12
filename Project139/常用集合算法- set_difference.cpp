//���ü����㷨-set_difference
#include<iostream>
#include<numeric>
#include<vector>
#include<algorithm>

using namespace std;

//����ԭ�ͣ�
//set_difference(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
	// ���������ϵĲ
	// ע��:�������ϱ�������������
	// beg1 ����1��ʼ������
	// end1 ����1����������
	// beg2 ����2��ʼ������
	// end2 ����2����������
	// dest Ŀ��������ʼ������


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
	vector<int>v1;
	vector<int>v2;

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 6);
		//ע������ԭ������������������
	}

	cout << "v1:" << endl;
	for_each(v1.begin(), v1.end(), MyPrint());

	cout << endl;

	cout << "v2:" << endl;
	for_each(v2.begin(), v2.end(), MyPrint());//�������ʹ�ò��ĩβ��������������Ŀ��������ĩβ�������������Ͳ�����Ϊ���ٵĿռ���󣬶���ӡ��һ���Ĭ�ϵ�0��

	cout << endl;


	vector<int>vTarget1;
	//���ٿռ䣺
	   //�����������������û�н�����ȡ����size�����ٿռ�
	vTarget1.resize(max(v1.size(), v2.size()));

	//��ȡ�
	vector<int>::iterator itEnd1 = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget1.begin());//������������������ʼ/ĩβ��������Ŀ����������ʼ������
	//set_difference�᷵�ز��ĩβ������

	cout << endl;


	//��������ӡ
	cout << "v1 - v2 " << endl;
	for_each(vTarget1.begin(), itEnd1, MyPrint());//�������ʹ�ò��ĩβ��������������Ŀ��������ĩβ�������������Ͳ�����Ϊ���ٵĿռ���󣬶���ӡ��һ���Ĭ�ϵ�0��

	cout << endl;
	cout << endl;


	vector<int>vTarget2;
	vTarget2.resize(max(v1.size(), v2.size()));
	vector<int>::iterator itEnd2 = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), vTarget2.begin());//������������������ʼ/ĩβ��������Ŀ����������ʼ������
	
	cout << "v2 - v1 " << endl;
	for_each(vTarget2.begin(), itEnd2, MyPrint());//�������ʹ�ò��ĩβ��������������Ŀ��������ĩβ�������������Ͳ�����Ϊ���ٵĿռ���󣬶���ӡ��һ���Ĭ�ϵ�0��

}

int main()
{
	test01();


	system("pause");
	return 0;
}
