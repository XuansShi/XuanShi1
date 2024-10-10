#include <iostream>
#include <string>
using namespace std;
//类和对象-运算符重载-函数调用运算符重载

//打印输出类
class MyPrint
{
public:
	//重载函数调用符()
	void operator()(string test)
	{

		cout << test << endl;
	}


};


void MyPrint02(string test);//这里要声明一下，否则test01找不到MyPrint02


void test01()
{
	MyPrint myprint;

	myprint("HELLOWORLD");//这样调用起来很像一个常规的函数，因此称为 仿函数

	MyPrint02("Bronya");

}

//仿函数非常灵活，没有固定的写法
  // 你可以用各种返回值类型，也可以传随意多的参数
  
//加法类
class MyAdd
{
public:
	int operator()(int num1,int num2)
	{
		return num1 + num2;

	}


};

void test02()
{
	MyAdd myadd;
    int ret = myadd(100,200);//这样写相当于100传给了上面的num1,200传给了上面的num2
    cout << "ret = " << ret << endl;
	
	//匿名函数对象
	cout <<MyAdd()(100,300) << endl;
	     //↑这里的“MyAdd()” ，也就是 返回值+小括号 的形式，会创造出一个匿名对象。最后面的小括号就是使用重载了
}


//如果你再写一个常规格式的函数：
void MyPrint02(string test)
{
	cout << test << endl;


}


int main()
{
	test01();
	test02();

	system("pause");
	return 0;
}