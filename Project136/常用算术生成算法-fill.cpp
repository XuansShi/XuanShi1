//�������������㷨-fill
#include<iostream>
#include<numeric>//���������㷨ͷ�ļ�
#include<vector>
#include<algorithm>

using namespace std;
//����ԭ�ͣ�
//fill(iterator beg, iterator end, value);
	// �����������Ԫ��
	// beg ��ʼ������
	// end ����������
	// value ����ֵ

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
	v1.resize(10);

	fill(v1.begin(), v1.end(), 10);//ȫ10
	for_each(v1.begin(), v1.end(), MyPrint());

	

}

int main()
{
	test01();


	system("pause");
	return 0;
}


