//���ò����㷨-binary_search
#include <iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

//����ԭ�ͣ�
//bool binary_search(iterator beg, iterator end, value);
	// ����ָ����Ԫ�أ��鵽 ����true  ����false
	// ע��: ��**���������в�����**
	// beg ��ʼ������
	// end ����������
	// value ���ҵ�Ԫ��


//����������������
void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);

	}

	bool result  = binary_search(v.begin(), v.end(),9);//����һ��9,�ҵ��˷���true �����򷵻�false
	  //ע��ֻ������������ʹ�ã��������еĲ��ҽ��׼ȷ��Ϊ50%

	if (result)
	{
		cout << "�ҵ���" << result << endl;
	}
	else
	{
		cout << "δ�ҵ�" << endl;
	}



}



int main()
{
	test01();

	system("pause");
	return 0;
}

