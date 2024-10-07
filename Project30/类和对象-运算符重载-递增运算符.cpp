#include<iostream>
using namespace std;

//重载递增运算符
class MyInteger
{
	friend ostream& operator<<(ostream& cout, MyInteger myint);
public:

	MyInteger()
	//构造函数
	{
		m_Num = 0;

	}

//重载前置++运算符
	MyInteger &operator++()//下面的myint是MyInteger类型，所以这里的返回值也必须相同
	{       //↑这里加上引用的原因：
		        //保证在多次++操作是对同一个数据进行操作，而不是++完后返回一个新的数据 
		         //这和是否报错无关
				 
				//先做++运算
		m_Num++;
		//再做返回
		return *this;//*解引用this指针，返回自身

	}


//重载后置++运算符   
  //习：这里要注意函数重定义的问题;返回值类型不能作为重定义的条件
	MyInteger operator++(int)//这个int是占位参数，可以用于区分前置和后置递增
	{         //注意这里就别写引用了        
		        //因为temp是局部对象，当前函数执行完后会被释放
				
		//先 记录当时结果
		MyInteger temp = *this;
		//其次 递增
		m_Num++;
		//最后将记录结果做返回
		return temp;
	
	}


private:

int m_Num;

};

//重载左移运算符<<
ostream& operator<<(ostream& cout, MyInteger myint)
{
	cout << myint.m_Num;
	return cout;


}



void test01()
{
	MyInteger myint;
	cout << ++myint << endl;
}

void test02()
{
	MyInteger myint;

}

int main()
{
	test01();
	test02();


	system("pause");
	return 0;
}