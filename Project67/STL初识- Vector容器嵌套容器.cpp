//STL��ʶ- Vector����Ƕ������
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;



void test01()
{

	//����������
	vector<vector<int>> v;

	//����С����
	vector <int> v1;
	vector <int> v2;
	vector <int> v3;
	vector <int> v4;


	//��С�������������
	for (int i = 0; i < 4; i++)
	{
		v1.push_back(i + 1);
		v2.push_back(i + 2);
		v3.push_back(i + 3);
		v4.push_back(i + 4);


	}

	//��С�������������v
	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	v.push_back(v4);

	//ͨ��������v�����е����ݶ�����һ��
	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++)
    //����ҲҪ�ĳɴ�������	
	{
		
			//����(*it)��Ӧ<>��ľ���һ��С����������������Ҫ�ٸ�С�������б���
		for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++)
//����Ҳ��Ӧ�ĳɽ����õõ��Ķ�����Ҳ����(*it)��
		{
			cout << *vit << " " ;


		  }
		cout << endl;
	
	}



}

int main()
{
	test01();




	system("pause");
	return 0;

}