//���������㷨-random_shuffle
#include <iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<ctime>

using namespace std;

//����ԭ�ͣ�
//random_shuffle(iterator beg, iterator end);
	// ָ����Χ�ڵ�Ԫ�������������
	// beg ��ʼ������
	// end ����������


void MyPrint(const vector<int>& v)
{
	for (vector<int>::const_iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

}

void foreachPrint(int v)
{
	cout << v << " ";
}

void test01()
{
	//ע��random_shuffleҲҪʹ��һ������������Ӳ��������������
	srand((unsigned int)time(NULL));

	vector<int>v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	v.push_back(60);

	cout << "����ǰ" << endl;
	MyPrint(v);



	cout << "���������" << endl;
	sort(v.begin(), v.end());
	for_each(v.begin(), v.end(), foreachPrint);//ϰ��ʹ��for_each�������Ҵ�ӡ

	cout << endl;

	cout << "ʹ��random_shuffle��" << endl;

	random_shuffle(v.begin(), v.end());
	for_each(v.begin(), v.end(), foreachPrint);



}




int main()
{

	test01();

	system("pause");
	return 0;
}

