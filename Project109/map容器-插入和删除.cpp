//map����-�����ɾ��

#include<map>
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

//����ԭ�ͣ�
//1.	insert(elem);           //�������в���Ԫ�ء�
//2.	clear();                    //�������Ԫ�ء�
//3.	erase(pos);              //ɾ��pos��������ָ��Ԫ�أ�������һ��Ԫ�صĵ�������
//4.	erase(beg, end);    //ɾ������[beg,end)������Ԫ�� ��������һ��Ԫ�صĵ�������
//5.	erase(key);            //ɾ��������ֵΪkey��Ԫ�ء�


void PrintMap(const map<int, int>& mp)
{
	if (mp.empty())
	{
		cout << "����Ϊ��" << endl;
	}
	{
		for (map<int, int>::const_iterator it = mp.begin(); it != mp.end(); it++)
		{

			cout << "key = " << (*it).first << "  value = " << it->second << endl;//��Ϊ�����Ƕ��飬�����㲻��ֻ����*it��������õ�����߼�ͷ�ķ����õ���һ���͵ڶ�������
		}
		cout << endl;
	}

}


void test01()
{

	map<int, int> m1;
	//1.	����Ԫ��
	cout << "1.	����Ԫ�� " << endl;
	//��һ��mp.insert(elem);   
	m1.insert(pair<int, int>(1, 10));
	m1.insert(pair<int, int>(2, 20));
	m1.insert(pair<int, int>(3, 30));
	m1.insert(pair<int, int>(4, 40));
	
	//������make_pair����
	m1.insert(make_pair(5, 50));//ע���������ʹ��make_pair����������� �Դ����ڲ���
	
	//������value_typeֵ���ͷ���(������ʹ��)
	m1.insert(map<int,int>::value_type(6, 60));
	
	//���ġ�����������(������ʹ�ã���������˾ͻ�������һ������һ��Ĭ��ֵΪ0����)
	m1[7] = 70;
	PrintMap(m1);
	  //�÷�����;����������key���ʵ�value ����������һ���ģ�



	//3.	erase(pos);              //ɾ��pos��������ָ��Ԫ�أ�������һ��Ԫ�صĵ�������
	cout << "3.	erase(pos);" << endl;
	map<int, int>::iterator mp = m1.begin();
	mp++;
	m1.erase(mp);
	PrintMap(m1);




	//5.	erase(key);            //ɾ��������ֵΪkey��Ԫ�ء�
	cout << "5.	erase(key);" << endl;
	m1.erase(40);
	PrintMap(m1);




	//4.	erase(beg, end);    //ɾ������[beg,end)������Ԫ�� ��������һ��Ԫ�صĵ�������
	cout << "4.	erase(beg, end);" << endl;
	 mp = m1.begin();
	mp++;//���﷢�֣����õ�����ָ��ɾ������λ��ʱ����������һ���Եģ���һ��Ҫ���¸����ֵ����Ҳ������Ϊ��ַȫ�ı��ˣ���
	m1.erase(mp, m1.end());
	//m1.erase(m1.begin(), m1.end());
	PrintMap(m1);


	//2.	clear();                    //�������Ԫ�ء�
	cout << "2.	clear();" << endl;
	m1.clear();
	PrintMap(m1);



}



int main()
{
	test01();




	system("pause");
	return 0;
}
