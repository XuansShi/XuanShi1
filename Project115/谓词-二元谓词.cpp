//谓词-二元谓词
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

class  MyCompare//使用仿函数实现降序
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
	
	
	cout << "——————————重新排序后：——————————" << endl;
	//使用函数对象改变算法规则，使sort的排序变成降序
	  //sort的重载版本有：提供不同的区间、提供谓词

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








