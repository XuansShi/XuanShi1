//�ڽ���������-��ϵ�º���
#include<iostream>
#include<string>
#include<algorithm>
#include<functional>//�ڽ���������ͷ�ļ�
#include<vector>

using namespace std;

//�º���ԭ�ͣ�
//1.	template<class T> bool equal_to < T>         //����
//2.	template<class T> bool not_equal_to < T>     //������
//3.	template<class T> bool greater < T>          //����
//4.	template<class T> bool greater_equal < T>    //���ڵ���
//5.	template<class T> bool less < T>             //С��
//6.	template<class T> bool less_equal<T>         //С�ڵ���

class MyCompare
{
public:
	bool operator()(const int v1, const int v2)const
	{
		return v1 > v2;
	}


};

void PrintVector(const vector<int>& v)
{
	for (vector<int>::const_iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";

	}

	cout << endl;
}


void test01()
{
	cout << "�Զ��庯������ʵ��sort����" << endl;
	vector<int>v;
	v.push_back(10);
	v.push_back(40);
	v.push_back(20);
	v.push_back(30);
	v.push_back(50);
	PrintVector(v);

	//����
	sort(v.begin(), v.end(), MyCompare());
	PrintVector(v);

}


void test02()
{
	cout << "�ڽ���������ʵ��sort����" << endl;
	vector<int>v;
	v.push_back(10);
	v.push_back(40);
	v.push_back(60);
	v.push_back(20);
	v.push_back(30);
	v.push_back(50);
	PrintVector(v);


	sort(v.begin(), v.end(),greater<int>());//ע���ڽ���������ļ�����<>��Ҫд��������
	  //ע����sort�ĵײ�����֪�����ڶ������ص�Ĭ�����򷽷��Ǳ��ڵ� 5.template<class T> bool less < T>//С��
	PrintVector(v);


}

int main()
{
	test01();
	test02();


	system("pause");
	return 0;
}
