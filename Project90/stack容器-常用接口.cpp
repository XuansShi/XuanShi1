//stack����-���ýӿ�
#include <iostream>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;


//���캯����
//1 stack<T> stk;                  //stack����ģ����ʵ�֣� stack�����Ĭ�Ϲ�����ʽ
//2 stack(const stack & stk);            //�������캯��

//��ֵ������
//stack& operator=(const stack& stk);           //���صȺŲ�����

//���ݴ�ȡ��
//1 push(elem);      //��ջ�����Ԫ��
//2 pop();                //��ջ���Ƴ���һ��Ԫ��
//3 top();                 //����ջ��Ԫ��

//��С������
//1 empty();            //�ж϶�ջ�Ƿ�Ϊ��
//2 size();               //����ջ�Ĵ�С


void test01()
{
	//�ص㣺�����Ƚ���������ݽṹ
	stack<int>s;

	//��ջ
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40); 

	cout << "ջ�Ĵ�С��" << s.size() << endl;
	//ֻҪջ��Ϊ�գ��鿴ջ��������ִ�г�ջ����
	while (!s.empty())
	{
		//�鿴ջ��Ԫ��
		cout << "ջ��Ԫ��Ϊ��" << s.top() << endl;

		//��ջ
		s.pop();

	}
	cout << "��ջ��ջ�Ĵ�С��" << s.size() << endl;

}

int main()
{
	test01();




	system("pause");
	return 0;
}