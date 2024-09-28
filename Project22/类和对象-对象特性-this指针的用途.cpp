#include <iostream>
using namespace std;
//学习this指针的意义：
//1、解决名称冲突（当形参和成员变量同名时，可用this指针来区分）

//2、可用  *this  以返回对象本身


class Person
{
public:
	Person(int age)//形参age
	{
		this->age = age;
        //this指针指向的是被调用的成员函数所属的对象
		  //这里 所属的对象 是下面的 p0
	}
	int age;//成员变量age
	//好的编码习惯：int m_Age;  用m member以及下划线区分表示这是成员



	Person& PersonAddAge(Person& p)//这里的&p是因为这里用了地址传递才这么写
	{
		this->age += p.age;
		//把&p的年龄加到自身上

     return *this;
	}
	//this指向p2的指针，而*this指向的就是p2这个对象本体
	


};

//1、解决名称冲突（当形参和成员变量同名时，可用this指针来区分）
  //如果你让形参和成员变量同名，则下面的函数会输出一段乱码
  //解决方法 
    // 一、改一下名称：在所有成员变量前加上m_ 
  
    // 二、用this指针:
      //把Person的构造函数的 age=age 改成 this->age = age;
void test01()
{
	Person p0(18);
	cout << "p1的年龄：" << p0.age << endl;

}




//2、可用  *this  以返回对象本身
void test02()
{
	Person p1(10);
	Person p2(10);
	p2.PersonAddAge(p1);

	cout << "p2的年龄为：" << p2.age<<endl;



//如果你想多次调用 test02() 给p2多加几次：
	//比如说你用p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
	//那么就可以用到this指针了
	 //需要在class里面的构造函数PersonAddAge里面，用this指针写返回值
	 //同时函数的返回值类型改成引用 Person&

	//修改后的函数见 test03();


 //思考：
	//如果把 Person& 改成 Person （也就是把指针改成值），最终 test03() 得到的结果是什么？
	  //结果为20
	  //p2+10后，返回的不是p2本体了。
	  //从拷贝构造函数的角度，是从自身拷贝构造了一个新的数据，(是创建了一个新的数据)
	    //相当于返回了p2'，然后返回了p2'',然后返回了p2'''，每次返回的都是新对象
	 
}
void test03()
{
	Person p3(10);
	Person p4(10);
	p4.PersonAddAge(p3).PersonAddAge(p3).PersonAddAge(p3);
	//此处体现了 “链式编程思想”
	  //可以无限往后叠加
	  //其实下面的cout也是同样的思想
	cout << "p4的年龄为：" << p4.age << endl;
	


}



int main()
{
	test01();

	test02();

	test03();



	system("pause");
	return 0;
}