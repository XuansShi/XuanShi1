//vector����-���캯��
#include <iostream>
using namespace std;
#include <vector>//����������Ҫ����ͷ�ļ�


//����ԭ�ͣ�
//1 vector<T> v;               //����ģ��ʵ����ʵ�֣�Ĭ�Ϲ��캯��
//2 vector(v.begin(), v.end());          //��v[begin(), end())�����е�Ԫ�ؿ���������
//3 vector(n, elem);                           //���캯����n��elem����������
//4 vector(const vector& vec);        //�������캯����

void printVector(vector<int> &v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";

	}
	cout << endl;

}





void test01()
{

	//1 Ĭ�Ϲ��죨�޲ι��죩
	cout << "v1:" << endl;
	vector<int> v1;
	for (int i = 0;i<10;i++)
	{
		v1.push_back(i);
	}
	printVector(v1);



	//2 ͨ�����䷽ʽ���й���
	cout << "v2:" << endl;
	vector<int>v2(v1.begin(), v1.end());
	printVector(v2);



	//3 n��elem��ʽ����
	cout << "v3:" << endl;
	vector<int>v3(10,100);//��һ��������������ڶ���������Ԫ��
	printVector(v3);


	//4 �������캯�������ã�
	cout << "v4:" << endl;
	vector<int>v4(v3);//ʹ��һ��ͬ���͵ı������˴�Ϊ����v3������ʼ��
	printVector(v3);
}


int main()
{
	test01();






	system("pause");
	return 0;
}