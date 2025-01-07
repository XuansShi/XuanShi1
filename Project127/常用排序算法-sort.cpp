//���������㷨-sort
#include <iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

//sort(iterator beg, iterator end, _Pred);
  //���ܣ���������Ԫ�ؽ������� 
	// ��ֵ����Ԫ�أ��ҵ�����ָ��λ�õ��������Ҳ������ؽ���������λ��
	//  beg    ��ʼ������
	//  end    ����������
	// _Pred  ν��



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

	cout << "���������" << endl;
	sort(v.begin(), v.end(),greater<int>());//ʹ���ڽ���������greater+sort�㷨ʵ�ֽ�������
	for_each(v.begin(), v.end(), foreachPrint);

	 

}




int main()
{
	test01();

	system("pause");
	return 0;
}

