//vector����-��������
#include <iostream>
#include <vector>
using namespace std;


void printVector(vector<int>&v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";


	}
	cout << endl;

}

//swap(vec);  // ��vec�뱾���Ԫ�ػ���

//1������ʹ��
void test01()
{
	cout << "����ǰ" << endl;
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);

	}

	printVector(v1);//v1���Ԫ����0~9


	
	vector<int> v2;
	for (int i = 10; i > 0; i--)
	{
		v2.push_back(i);

	}
	printVector(v2);




	cout << "������" << endl;
	v1.swap(v2);
	printVector(v1);
	printVector(v2);
	
}




//2��ʵ����;
  //����swap���������ڴ�ռ�
void test02()
{
	vector<int> v;
	for(int i = 0;i<100000;i++)
	{
		v.push_back(i);
	}
	cout << "v������Ϊ: " << v.capacity() << endl;
	cout << "v�Ĵ�СΪ: " << v.size() << endl;
	  //�����ӡ���� ���� �� ��С ��Ҫ��һ��� 

	v.resize(3);//����ָ����С
	cout << "v������Ϊ: " << v.capacity() << endl;
	cout << "v�Ĵ�СΪ: " << v.size() << endl;
	   //����Ĵ�ӡ������������䣬��С��Ϊ3
	     //�����ͺ��˷ѿռ䣬���Կ�������swap����


	//����swap�����ڴ�:
	vector<int>(v).swap(v);
	  //�����������
	    //vector<int>(v)  �����������������൱�����ö���v���ÿ������캯��������һ��û�����ֵĶ���ʹ��vĿǰ���õ�size����ʼ������������Ĵ�С�����Ը���������ĳ�ʼsize = capacity = 3��
	    //Ȼ��swap(v)���������Ľ�����ʹ��v��size=capacity=���������size=���������capacity=3
	    //Ȼ����������������ص㣨��ǰ��ִ�������Զ������������󣩣��������������ڴ�ͱ�������������
	cout << "v������Ϊ: " << v.capacity() << endl;
	cout << "v�Ĵ�СΪ: " << v.size() << endl;
	  //���������ʹ�С�Ͷ���Ϊ3�ˣ����ڽ�С���Ǹ��ˣ�


}



int main()
{
	cout << "1�������÷�" << endl;
	test01();

	cout << "2��ʵ����;" << endl;
	test02();



	system("pause");
	return 0;
}