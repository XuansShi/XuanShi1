//ν��-��Ԫν��
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

class  MyCompare//ʹ�÷º���ʵ�ֽ���
{
public:
	bool operator()(const int v1,const int v2)const
	{
		return v1 > v2;

	}




};

void PtintVector(const vector<int>& v)
{
	for (vector<int>::const_iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

}

void test01()
{
	vector<int>v;

	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	PtintVector(v);
	
	
	cout << "����������������������������󣺡�������������������" << endl;
	//ʹ�ú�������ı��㷨����ʹsort�������ɽ���
	  //sort�����ذ汾�У��ṩ��ͬ�����䡢�ṩν��

	MyCompare mycompare1;
	sort(v.begin(), v.end(),mycompare1);
	PtintVector(v);






}


int main()
{
	test01();

	system("pause");
	return 0;
}








