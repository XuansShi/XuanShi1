//���������㷨-reverse
#include <iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<ctime>

using namespace std;

//����ԭ�ͣ�
//reverse(iterator beg, iterator end);
	// ��תָ����Χ��Ԫ��
	// beg ��ʼ������
	// end ����������




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

	cout << "reverseǰ��" << endl;
	for_each(v1.begin(), v1.end(), MyPrint);

	cout << endl;

	cout << "reverse��" << endl;
	reverse(v1.begin(),v1.end());
	for_each(v1.begin(), v1.end(), MyPrint);



}




int main()
{

	test01();

	system("pause");
	return 0;
}




















