#include <iostream>
using namespace std;


//�����������ݵĺ���

  //����ģ��
 template<class T>//����һ��ģ�壬���߱�������������н�����T��Ҫ����T��һ��ͨ�õ���������
 //typename�����滻Ϊclass
 void mySwap(T& a, T& b)//����ʹ����������T������ʹ�õ�ַ
 {
	 T temp = a;
	 a = b;
	 b = temp;
	 //����������ģ��ʵ���˶����������͵Ľ�����������Ȼ��ÿһ���������Ͷ�Ҫдһ����
 }



//1���Զ������Ƶ�-�����Ƶ���һ�µ���������T�ſ�ʹ��
 void test01()
 {
	 int a = 10;
	 int b = 20;
	 char c = 30;
	 mySwap(a, b);//���û����
	 cout << "a  = " << a << endl;
	 cout << "b  = " << b << endl;

	 //mySwap(a,c);  ����
 }



 //2����ʾָ������-ģ�����Ҫȷ����T���������Ͳſ�ʹ��
 template<class T>
 void func()
 {
	 cout << "func����" << endl;


 }



void test02()
{
	//func();�����㲻�ṩ�����������Ƶ��������ģ�������ֻ��ָ������
	func<int>();






}


int main()
{
	//��������
	test01();
	test02();



	system("pause");
	return 0;
}