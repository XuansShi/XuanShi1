#include <iostream>
using namespace std;


//�����������ݵĺ���

  //����ģ��
template<typename T>//����һ��ģ�壬���߱�������������н�����T��Ҫ����T��һ��ͨ�õ���������
void mySwap(T& a, T& b)//����ʹ����������T������ʹ�õ�ַ
{
	T temp = a;
	a = b;
	b = temp;
	//����������ģ��ʵ���˶����������͵Ľ�����������Ȼ��ÿһ���������Ͷ�Ҫдһ����

}



template<typename Y>
void mmy(Y& a, Y& b, Y& c)
{




}



void test01()
{
	int a = 10;
	int b = 20;
	//���ú���ģ�彻��
	  //�����ַ�ʽʹ�ú���ģ��
	    //1���Զ������Ƶ�
	mySwap(a, b);//���������Զ��Ƶ���T������int
	cout << "a  = "<<a << endl;
	cout << "b  = " << b << endl;
	   //2����ʾָ������
	mySwap<int>(a, b);//ֱ�Ӹ��߱�����T����������
	cout << "a  = " << a << endl;
	cout << "b  = " << b << endl;




}


int main()
{
	//



	system("pause");
	return 0;
}