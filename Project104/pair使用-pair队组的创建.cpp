//pairʹ��-pair����Ĵ���
#include<iostream>
//����pairû��ר����STLͷ�ļ�
#include<string>

using namespace std;

//���ִ�����ʽ��
//1  pair<type, type> p(value1, value2);

//2  pair<type, type> p = make_pair(value1, value2);



void test01()
{
	
//1  pair<type, type> p(value1, value2);
    cout << "1 pair<type, type> p(value1, value2);"<<endl;
	pair<string, int> p("Tom", 20);

	//ʹ�õ��.first  ���� .second ����ȡ�����е�����
	cout << "������" << p.first << "����" << p.second << endl;


	
//2  pair<type, type> p = make_pair(value1, value2);//make_pair������鷽��
	cout << "2  pair<type, type> p = make_pair(value1, value2);" << endl;
	pair<string, int> p2 = make_pair("Jerry", 18);
	cout << "������" << p2.first << "����" << p2.second << endl;

}


int main()
{
	test01();


	system("pause");
	return 0;
}





