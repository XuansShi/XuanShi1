//deque����-���캯��

#include <iostream>
#include<deque>
#include <string>

using namespace std;

//����ԭ�ͣ�
//1 deque<T> deqT;                   //Ĭ�Ϲ�����ʽ
//2 deque(beg, end);                  //���캯����[beg, end)�����е�Ԫ�ؿ���������
//3 deque(n, elem);                    //���캯����n��elem����������
//4 deque(const deque & deq);          //�������캯��

void printDeque(const deque<int>&d)//��߰�ȫ�ԣ�����ʹ��const���޸ģ���ôͬʱ����ĵ�����Ҫ�ĳ�const_iterator
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

}


void test01()
{
//1 deque<T> deqT;                   //Ĭ�Ϲ�����ʽ
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);


	}
	printDeque(d1);



//2 deque(beg, end);                  //���캯����[beg, end)�����е�Ԫ�ؿ���������
	deque<int> d2(d1.begin(),d1.end());
	printDeque(d2);


//3 deque(n, elem);                    //���캯����n��elem����������
	deque<int> d3(3,1111);
	printDeque(d3);


//4 deque(const deque & deq);          //�������캯��
	deque<int> d4(d1);
	printDeque(d4);

}



int main()
{
	test01();



	system("pause");
	return 0;
}