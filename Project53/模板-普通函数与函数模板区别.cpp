//05ģ��-��ͨ�����뺯��ģ������
#include <iostream>
using namespace std;

//1����ͨ��������ʱ�ɷ�����ʽ����ת��
//2������ģ�� �� �Զ������Ƶ������ɷ�����ʽ����ת��
//3��         �� ��ʾָ�����ͣ��ɷ�����ʽ����ת��      


//��ͨ����
int myAdd0(int a,int b)
{



	return a+b;
}

//����ģ��
template<class T>
T myAdd02(T a, T b)
{


	return a + b;
}


void test01()
{

	int a = 10;
	int b = 20;
	char c = 'c';
	//��ͨ�����ɷ�����ʽ����ת��
	cout << myAdd0(a, c) << endl;

	//�Զ������Ƶ�
	cout << myAdd02(a, b) << endl;//a bͬ����û����
	//cout << myAdd02(a, c) << endl;//a c��ͬ���ͣ�����,�� �Զ������Ƶ� ���ɷ�����ʽ����ת��

	//��ʾָ������
	cout << myAdd02<int>(a, c) << endl;//δ����,�� ��ʾָ������ �ɷ�����ʽ����ת�� 



}


int main()
{

	test01();


	system("pause");
	return 0;
}