//���ÿ������滻�㷨-replace_if
#include <iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<ctime>

using namespace std;
//����ԭ�ͣ�
//replace_if(iterator beg, iterator end, _pred, newvalue);
	// �������滻Ԫ�أ������������滻��ָ��Ԫ��
	// beg ��ʼ������
	// end ����������
	// _pred ν��
	// newvalue �滻����Ԫ��

class Greater30
{
public:
	bool operator()(int val)

	{
		return val >= 30;
	}



};

void MyPrint(int val)
{
	cout << val << " ";
}



void test01()
{
	vector<int>v1;
	v1.push_back(10);
	v1.push_back(50);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(80);
	v1.push_back(60);
	v1.push_back(20);

	//�����ڵ���30�Ķ��滻Ϊ3000
	cout << "�滻ǰ" << endl;

	for_each(v1.begin(), v1.end(), MyPrint);
	cout << endl;

	cout << "�滻��" << endl;
	replace_if(v1.begin(), v1.end(), Greater30(), 3000);
	for_each(v1.begin(), v1.end(), MyPrint);



}




int main()
{

	test01();

	system("pause");
	return 0;
}

