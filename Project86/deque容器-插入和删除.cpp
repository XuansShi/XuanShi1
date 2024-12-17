//deque����-�����ɾ��
#include <iostream>
#include<string>
#include<deque>

using namespace std;

//���˲��������
//1 push_back(elem);          //������β�����һ������
//2 push_front(elem);        //������ͷ������һ������
//3 pop_back();                   //ɾ���������һ������
//4 pop_front();                 //ɾ��������һ������


//ָ��λ�ò�����
//1 insert(pos, elem);         //��posλ�ò���һ��elemԪ�صĿ��������������ݵ�λ�á�

//2 insert(pos, n, elem);     //��posλ�ò���n��elem���ݣ��޷���ֵ��

//3 insert(pos, beg, end);    //��posλ�ò���[beg,end)��������ݣ��޷���ֵ��

//4 clear();                           //�����������������

//5 erase(beg, end);             //ɾ��[beg,end)��������ݣ�������һ�����ݵ�λ�á�

//6 erase(pos);                    //ɾ��posλ�õ����ݣ�������һ�����ݵ�λ�á�
void printDeque(const deque<int>&d)
{
	for (deque<int>::const_iterator it = d.begin();it != d.end();it++)
	{
		cout << *it << " ";

	}
	cout << endl;

}

void test01()
{
	deque<int>d1;

//1 push_back(elem);          //������β�����һ������
	d1.push_back(114514);
	d1.push_back(10);
	d1.push_back(20);
	printDeque(d1);

//2 push_front(elem);        //������ͷ������һ������
	d1.push_front(5);
	d1.push_front(1);
	printDeque(d1);

//3 pop_back();                   //ɾ���������һ������
	d1.pop_back();
	printDeque(d1);


//4 pop_front();                 //ɾ��������һ������
	d1.pop_front();
	printDeque(d1);











}


void test02()
{
deque<int>d2;
d2.push_back(10);
d2.push_back(20);
d2.push_front(100);
d2.push_front(200);
printDeque(d2);


//ָ��λ�ò�����
//1 insert(pos, elem);         //��posλ�ò���һ��elemԪ�صĿ��������������ݵ�λ�á�
d2.insert(d2.begin(), 1111);
printDeque(d2);
 


//2 insert(pos, n, elem);     //��posλ�ò���n��elem���ݣ��޷���ֵ��
d2.insert(d2.begin(),2,2222);
printDeque(d2);



//3 insert(pos, beg, end);    //��posλ�ò���[begin,end)��������ݣ��޷���ֵ��
deque<int>d3;
d3.insert(d3.begin(),d2.begin(), d2.end());
printDeque(d3);


//4 clear();                           //�����������������
d3.clear();
printDeque(d3);



//6 erase(pos);              //ɾ��posλ�õ����ݣ�������һ�����ݵ�λ�á�
 
 //�������ɾ��������ʼ�ͽ�β������λ�ã�
   //��������һ����������Ȼ������ƫ��
deque<int> ::iterator it = d2.begin();
it++;

d2.erase(it); 
printDeque(d2);


//5 erase(beg, end);             //ɾ��[beg,end)��������ݣ�������һ�����ݵ�λ�á�
d2.erase(d2.begin(), d2.end());
printDeque(d2);


}



int main()
{
	test01();
	test02();


	system("pause");
	return 0;
}