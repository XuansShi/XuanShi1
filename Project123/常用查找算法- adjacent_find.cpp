//���ò����㷨- adjacent_find
#include <iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

/*

����ԭ�ͣ�
adjacent_find(iterator beg, iterator end);

  // ���������ظ�Ԫ��,��������Ԫ�صĵ�һ��λ�õĵ�����
  // beg ��ʼ������
  // end ����������

*/

//����������������
void test01()
{
	vector<int>v;
	v.push_back(0);
	v.push_back(1);
	v.push_back(0);
	v.push_back(2);//���������������ظ���Ԫ��
	v.push_back(2);//���������������ظ���Ԫ��
	v.push_back(4);
	v.push_back(3);
	v.push_back(6);
	v.push_back(5);



	vector<int>::iterator it1 = adjacent_find(v.begin(), v.end());//����һ��3����Ӧ�ĵ�����
	//�ҵ��˷��ض�Ӧ�ĵ�������û�ҵ�����ĩβ������

	if (it1 == v.end())
	{
		cout << "û�ҵ�" << endl;
	}
	else
	{
		cout << "�ҵ���" << *it1 << endl;
	}






}


int main()
{
	test01();




	system("pause");
	return 0;
}









