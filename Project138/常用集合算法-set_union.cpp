//���ü����㷨-set_union
#include<iostream>
#include<numeric>
#include<vector>
#include<algorithm>

using namespace std;
//����ԭ�ͣ�
//set_union(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
	// ���������ϵĲ���
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
		cout << val << endl;
	}


};
void test01()
{
	vector<int>v1;
	vector<int>v2;

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 10);
		//ע������ԭ������������������
	}

	vector<int>vTarget;
	//���ٿռ䣺
	   //�����������Ŀ������size = ������+С������
	vTarget.resize(v1.size()+v2.size());

	//��ȡ����
	vector<int>::iterator itEnd = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());//������������������ʼ/ĩβ��������Ŀ����������ʼ������
	//set_intersection�᷵�ؽ�����ĩβ������

//��������ӡ
	for_each(vTarget.begin(), itEnd, MyPrint());//�������ʹ�ò�����ĩβ��������������Ŀ��������ĩβ�������������Ͳ�����Ϊ���ٵĿռ���󣬶���ӡ��һ���Ĭ�ϵ�0��


}

int main()
{
	test01();


	system("pause");
	return 0;
}





















