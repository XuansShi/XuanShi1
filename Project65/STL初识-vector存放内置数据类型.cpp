//STL��ʶ-vector���������������

#include <iostream>
#include <vector>//STL��ÿ��������Ҫ������ͷ�ļ�
#include <algorithm>//��׼�㷨��ͷ�ļ�
#include <string>
using namespace std;





//vector�������������������

void myPrint(int val)
{
	cout << val << endl;
}




void test01()
{

	//������һ��vector��������������
	vector<int> v;

	//�������в������ݣ�β�巨��
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);


	//ͨ�����������������е�����
	//vector <int> ::iterator itBegin = v.begin();//��ʼ��������ָ�������е�һ��Ԫ��
	//vector <int> ::iterator itEnd = v.end();//������������ָ�����������һ��Ԫ�ص���һ��λ��

	////��һ�ֱ�����ʽ
	//while (itBegin !=itEnd)
	//{
	//	cout << *itBegin << endl;//���������Դ��Ե����Ϊָ��
	//	itBegin++;

	//}


	//�ڶ��ֱ�����ʽ�������ã�
	for (vector <int> ::iterator it = v.begin(); it != v.end(); it++)
	{

		cout << *it << endl;

	}

	//�����ֱ�����ʽ ����STL�ṩ�ı����㷨
	for_each(v.begin(), v.end(), myPrint);
	 // ���ײ�ԭ�������ʼ������������������
	 //�ص�������ȡ������Ȼ�������
	

}


int main()
{

	test01();


	system("pause");
	return 0;
}