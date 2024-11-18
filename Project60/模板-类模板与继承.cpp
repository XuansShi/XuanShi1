//模板-类模板与继承
#include <iostream>
using namespace std;

template<class T>
class Base
{
	T m;

};

//class Son :public Base  //错误，缺少Base的参数列表

class Son1 :public Base<int>//必须要知道父类中T的类型，才能继承给子类
{



};


void test01()
{
	Son1 s1;

}

//如果想灵活指定父类中T类型，子类也需要变类模板
template<class T1,class T2>
class Son2 :public Base<T2>
{
public:
	Son2()
	{
		cout << "T1的类型为：" << typeid(T1).name() << endl;
		cout << "T2的类型为：" << typeid(T2).name() << endl;
	}

	T1 obj;


};


void test02()
{
	Son2<int, char> s2;//int传给了T1，char传给了T2
	                     //然后T2又传给了父类Base，使得T为char


}

int main()
{

	test02();




	system("pause");
	return 0;
}