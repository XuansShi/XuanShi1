//map����-���Һ�ͳ��

#include<iostream>
#include<algorithm>
#include<map>
#include<string>

using namespace std;

//����ԭ�ͣ�
//1   find(key);                  //����key�Ƿ����,�����ڣ����ظü���Ԫ�صĵ��������������ڣ�����set.end();
//2   count(key);                //ͳ��key��Ԫ�ظ���
void test01()
{
	map<int, int> m;
	m.insert(pair<int, int>(1, 10));
	m.insert(make_pair(2, 20));
	m.insert(map<int, int>::value_type(3, 30));
	m[4] = 40;

//1   find(key);    //����key�Ƿ����,�����ڣ����ظü���Ԫ�صĵ��������������ڣ�����set.end();
	map<int, int>::iterator pos = m.find(3);
	if (pos != m.end())
	{
		//������صĵ���������ĩβ��������˵���ҵ���
		cout << "����Ԫ��key= " <<(*pos).first<<"  value = "<<(*pos).second << endl;

	}
	else
	{
		cout << "������" << endl;
	}

//2   count(key);          //ͳ��key��Ԫ�ظ���
	int key = 1;
	cout << "key = " << key << " ��Ԫ���� " << m.count(key) <<" ��" << endl;
	//����map����������ظ�keyԪ�أ�valueֵ��key��һ�β����Ϊ׼��������count�Ľ����0��1




}


int main()
{
	test01();




	system("pause");
	return 0;
}