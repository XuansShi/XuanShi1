//vector����-�����ʹ�С

//����ԭ�ͣ�
//1 empty();                  //�ж������Ƿ�Ϊ�ա�Ϊ�շ���true

//2 capacity();               //����������

//3 size();                   //����������Ԫ�صĸ�����ע��capacity>=size

//4 resize(int num);          //����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ�����λ��;��������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����

//5 resize(int num, elem);    //����ָ�������ĳ���Ϊnum���������䳤������elemֵ�����λ��;��������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��

#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int>&v)//?:ΪʲôҪ�����õķ�ʽ��������� 1Ϊ�˱������س�ͻ
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)//û��ϸ����������ʹ��
	{
		cout << *it << " ";

	}
	cout<<endl;

}



void test01()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);



	}
	printVector(v1);



	//1 empty();                  //�ж������Ƿ�Ϊ�ա�Ϊ�շ���true
	if(v1.empty())//����Ϊ���������Ϊ��
	{
		cout << "v1����Ϊ��" << endl;
	}
	else
	{
		cout << "v1������Ϊ��" << endl;
//2 capacity();               //����������
		cout << "v1����������Ϊ��"<<v1.capacity() << endl;
//3 size();                   //����������Ԫ�صĸ�����capacity>=size
		cout << "v1�����Ĵ�СΪ��" << v1.size() << endl;

	}

//4 resize(int num);          //����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ�����λ��;��������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
	cout << "4 resize(int num); " << endl;
	v1.resize(15);//����ָ������Ϊ15
	printVector(v1);//��λ�ã�����û�и�ֵ��λ�ã�����Ĭ��ֵ0���


//5 resize(int num, elem);    //����ָ�������ĳ���Ϊnum���������䳤������elemֵ�����λ��;��������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��
	cout << "5 resize(int num, elem);" << endl;
	v1.resize(20,100);//�������صİ汾����ָ��Ĭ�ϵ����ֵ���˴�Ϊ20��
	printVector(v1);//��λ�ö���100�����

	//ָ��ʹ���ȱ�̣�
	cout << "ָ��ʹ���ȱ�̣�" << endl;
	v1.resize(7);
	printVector(v1);//�����Ĳ��ֻᱻɾ��

}


int main()
{
	test01();

	system("pause");
	return 0;
}