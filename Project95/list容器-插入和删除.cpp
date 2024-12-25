// list����-�����ɾ��

#include<iostream>
#include<string>
#include<list>
#include<algorithm>

using namespace std;


//����ԭ�ͣ�
//1 push_back(elem);//������β������һ��Ԫ��

//2 pop_back();//ɾ�����������һ��Ԫ��

//3 push_front(elem);//��������ͷ����һ��Ԫ��

//4 pop_front();//��������ͷ�Ƴ���һ��Ԫ��

//5 insert(pos, elem);//��posλ�ò�elemԪ�صĿ��������������ݵ�λ�á�

//6 insert(pos, n, elem);//��posλ�ò���n��elem���ݣ��޷���ֵ��

//7 insert(pos, beg, end);//��posλ�ò���[beg,end)��������ݣ��޷���ֵ��

//8 clear();//�Ƴ���������������

//9 erase(beg, end);//ɾ��[beg,end)��������ݣ�������һ�����ݵ�λ�á�

//10 erase(pos);//ɾ��posλ�õ����ݣ�������һ�����ݵ�λ�á�

//11 remove(elem);//�Ƴ�������������elemֵƥ���Ԫ�ء�



void PrintList(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";

	}
	cout << endl;


}


void test01()
{
	list<int>L1;


//1 push_back(elem);//������β������һ��Ԫ��
	L1.push_back(1);
	L1.push_back(2);
	L1.push_back(3);
	L1.push_back(4);
//3 push_front(elem);//��������ͷ����һ��Ԫ��
	L1.push_front(5);
	L1.push_front(6);
	L1.push_front(7);
	L1.push_front(8);

	PrintList(L1);

//2 pop_back();//ɾ�����������һ��Ԫ��
	cout << "pop_back();" << endl;
	L1.pop_back();
	PrintList(L1);

//4 pop_front();//��������ͷ�Ƴ���һ��Ԫ��
	cout << "pop_front();" << endl;
	L1.pop_front();
	PrintList(L1);


//5 insert(pos, elem);//��posλ�ò�elemԪ�صĿ��������������ݵ�λ�á�
	cout<<"insert(pos, elem);" << endl;
	L1.insert(L1.begin(),114);//���������ͷ��
	PrintList(L1);

	//ʹ�õ��������ܲ�������ָ��λ�ã�
	cout << "  ʹ��insert + ������ ����ָ����λ��" << endl;
	list<int>::iterator it = L1.begin();//�ȶ���һ��������
	L1.insert(++it, 4441);//Ȼ���õ�����ƫ�Ƶ�����Ҫ��λ�á�Ŀǰ��֪ǰ�úͺ���++/--������Ч
	PrintList(L1); 

//10 erase(pos);//ɾ��posλ�õ����ݣ�������һ�����ݵ�λ�á�
	cout<<"erase(pos);" << endl;
	it = L1.begin();//��Ҫ�ǲ�֪��������ƫ�Ƶ������˾�ֱ�Ӹ����������ֵ
	L1.erase(it);
	PrintList(L1);


//11 remove(elem);//�Ƴ�������������elemֵƥ���Ԫ�ء�
	cout << "remove(elem)" << endl;
	cout << "����10��114514" << endl;
	L1.insert(L1.begin(),10,114514);
	PrintList(L1);
	cout << "�Ƴ�����114514" << endl;
	L1.remove(114514);
	PrintList(L1);

//8 clear();//�Ƴ���������������
	cout << "clear()" << endl;
	L1.clear();
}


int main()
{
	test01();




	system("pause");
	return 0;
}