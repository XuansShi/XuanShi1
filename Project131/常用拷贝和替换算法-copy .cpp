//���ÿ������滻�㷨-copy
#include <iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<ctime>

using namespace std;
//copy(iterator beg, iterator end, iterator dest);
	// ��ֵ����Ԫ�أ��ҵ�����ָ��λ�õ��������Ҳ������ؽ���������λ��
	// beg  ��ʼ������
	// end  ����������
	// dest Ŀ����ʼ������




void MyPrint(int val)
{
	cout << val << " ";
}



void test01()
{
	vector<int>v1;

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	for_each(v1.begin(), v1.end(), MyPrint);


	vector<int>v2;
	v2.resize(v1.size());//ע��Ҫ���½����������ٿռ�
	copy(v1.begin(), v1.end(), v2.begin());
	for_each(v2.begin(), v2.end(), MyPrint);

}




int main()
{

	test01();

	system("pause");
	return 0;
}


