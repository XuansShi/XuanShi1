#include <iostream>
using namespace std;
//类和对象-运算符重载-加号运算符重载
  //1、成员函数重载加号


  //2、全局函数重载加号


 //3 运算符重载也可以发生函数重载

class Person
{
public:
    //1、成员函数重载加号
    //person operator+(person& p)
    //{
    //    person temp;
    //    temp.m_a = this->m_a + p.m_a;//this->m_a 代表 p1 的 m_a 成员变量的值，而 p.m_a 代表 p2 的 m_a 成员变量的值。两者相加的结果赋值给临时对象 temp 的 m_a 成员变量。
    //    temp.m_b = this->m_b + p.m_b;
    //    return temp;
    //}
    int m_A;

    int m_B;



};






//2、全局函数重载加号
Person operator+(Person& p1, Person& p2)
{
    Person temp;

    temp.m_A = p1.m_A + p2.m_A;
    temp.m_B = p1.m_B + p2.m_B;
    return temp;
}

//3 运算符重载也可以发生函数重载
Person operator+(Person& p1, int num)//一个参数是Person类型，另一个是整形
{
    Person temp;

    temp.m_A = p1.m_A + num;
    temp.m_B = p1.m_B + num;
    return temp;
}




void test01()
{
    Person p1;
    p1.m_A = 10;
    p1.m_B = 20;

    Person p2;
    p2.m_A = 30;
    p2.m_B = 40;

    //1 成员函数重载的本质调用版本
    //Person p3 = p1.operator+ (p2);   //如果你没有写运算符重载，那这里会报错
    //简化版本↓
    //Person p3 = p1 + p2;

    //2 全局函数重载的本质调用版本
    Person p3 = operator+(p1, p2);
    //同样可以简化为↓
    //Person p3 = p1 + p2;

    //3 运算符重载也可以发生函数重载
    //Person p3 = p1 + 10;  这是 Person +int 如果你不写重载，显然这过不了类型检查
    Person p4 = p1 + 100;


    cout << "p3.m_A = " << p3.m_A << endl;
    cout << "p3.m_B = " << p3.m_B << endl;
    cout << "p4.m_A = " << p4.m_A << endl;
    cout << "p4.m_B = " << p4.m_B << endl;
}



int main()
{
    test01();




    system("pause");
    return 0;
}