//map����-����͸�ֵ
#include<map>
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

//���죺
//map<T1, T2> mp;                    //mapĬ�Ϲ��캯��: 
//map(const map& mp);             //�������캯��


//��ֵ��
//map& operator=(const map& mp);   //���صȺŲ�����

void PrintMap(const map<int, int>& mp)
{
	for (map<int, int>::const_iterator it = mp.begin(); it != mp.end(); it++)
	{

		cout << "key = " << (*it).first << "value = " << it->second << endl;//��Ϊ�����Ƕ��飬�����㲻��ֻ����*it��������õ�����߼�ͷ�ķ����õ���һ���͵ڶ�������
	}
	cout << endl;


}


void test01()
{
	//����map����
	map<int, int> m;

	
	//Ĭ�Ϲ��죺
	//ʹ��insert�����������ݣ�
	m.insert(pair<int, int>(1, 10));//��������Ӧ��ʹ�ö���(�˴��õ�������������)
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(4, 40));
	PrintMap(m);
	//map������ݻᰴ��key��������


	//�������죺
	map<int, int> m2(m);//��������ڶ����ͬʱ���п������죬���ֿܷ�д
	PrintMap(m2);

	//��ֵ
    //map& operator=(const map& mp);   //���صȺŲ�����
	map<int, int> m3;
	m3 = m2;
	PrintMap(m3);



}



int main()
{
	test01();




	system("pause");
	return 0;
}