//���ÿ������滻�㷨-replace
#include <iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<ctime>

using namespace std;
//����ԭ�ͣ�
//replace(iterator beg, iterator end, oldvalue, newvalue);
	// �������ھ�Ԫ�� �滻�� ��Ԫ��
	// beg ��ʼ������
	// end ����������
	// oldvalue ��Ԫ��
	// newvalue ��Ԫ��


class MyPrint
{
public:
	void operator ()(int val)
	{
		cout << val << " ";
	}
};



void test01()
{
	vector<int>v1;

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	for_each(v1.begin(), v1.end(), MyPrint());


	cout << "�滻��" << endl;
	replace(v1.begin(), v1.end(), 9, 900);
	for_each(v1.begin(), v1.end(), MyPrint());
} 




int main()
{

	test01();

	system("pause");
	return 0;
}

