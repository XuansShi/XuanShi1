//�ڽ���������-�����º���
#include<iostream>
#include<string>
#include<algorithm>
#include<functional>//�ڽ���������ͷ�ļ�

using namespace std;
//����ֻ��ʾ����


//�º���ԭ�ͣ�
//1.	template<class T> T plus < T>          //�ӷ��º���
//2.	template<class T> T minus < T>         //�����º���
//3.	template<class T> T multiplies < T>    //�˷��º���
//4.	template<class T> T divides < T>       //�����º���
//5.	template<class T> T modulus < T>       //ȡģ�º���
//6.	template<class T> T negate<T>          //ȡ���º���

void test01()
{
	//6.	template<class T> T negate<T>          //ȡ���º���
	negate<int>n;
	cout << n(50) << endl;;



}


void test02()
{
	//1.	template<class T> T plus < T>          //�ӷ��º���
	plus<int> p;
	cout << p(10,20) << endl;//�õ�10+20=30

}
//�÷������Լ�����ĺ��������÷���һ���ģ����Ǵ������ʵ�����õ��������ö������������ص�С����

int main()
{
	test01();
	test02();


	system("pause");
	return 0;
}