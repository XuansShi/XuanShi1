//ģ��-��ģ����̳�
#include <iostream>
using namespace std;

template<class T>
class Base
{
	T m;

};

//class Son :public Base  //����ȱ��Base�Ĳ����б�

class Son1 :public Base<int>//����Ҫ֪��������T�����ͣ����ܼ̳и�����
{



};


void test01()
{
	Son1 s1;

}

//��������ָ��������T���ͣ�����Ҳ��Ҫ����ģ��
template<class T1,class T2>
class Son2 :public Base<T2>
{
public:
	Son2()
	{
		cout << "T1������Ϊ��" << typeid(T1).name() << endl;
		cout << "T2������Ϊ��" << typeid(T2).name() << endl;
	}

	T1 obj;


};


void test02()
{
	Son2<int, char> s2;//int������T1��char������T2
	                     //Ȼ��T2�ִ����˸���Base��ʹ��TΪchar


}

int main()
{

	test02();




	system("pause");
	return 0;
}