//���������㷨-merge
#include <iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<ctime>

using namespace std;
//����ԭ�ͣ�
//merge(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
	// ����Ԫ�غϲ������洢����һ������
	// ע��: ��������������**�����**
	// beg1   ����1��ʼ������
	// end1   ����1����������
	// beg2   ����2��ʼ������
	// end2   ����2����������
	// dest    Ŀ��������ʼ������

void MyPrint(const vector<int>& v)
{
	

	for (vector<int>::const_iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}



void test01()
{
	vector<int>v1;
	vector<int>v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 10);

	}
	
	//Ŀ������
	vector<int>vTarget;
	vTarget.resize(v1.size() + v2.size());//����������һ��Ҫ��������ռ�

	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
		//ע�⣺
			// ԭ�������������������У��������������ͬ������������߽���


	//��ӡ���
	MyPrint(vTarget);


}




int main()
{

	test01();

	system("pause");
	return 0;
}



