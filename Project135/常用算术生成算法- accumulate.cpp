//�������������㷨- accumulate
#include<iostream>
#include<numeric>//���������㷨ͷ�ļ�
#include<vector>


using namespace std;

//����ԭ�ͣ�
//accumulate(iterator beg, iterator end, value);
	// ��������Ԫ���ۼ��ܺ�
	// beg ��ʼ������
	// end ����������
	// value ��ʼֵ
  //ͷ�ļ�numeric


void test01()
{
	vector<int>v1;
	for (int i = 0; i < 100; i++)
	{
		v1.push_back(i);
	}
	int sum = accumulate(v1.begin(), v1.end(), 0);

	cout << sum << endl;

}

int main()
{
	test01();


	system("pause");
	return 0;
}