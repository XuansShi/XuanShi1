#include <iostream>
using namespace std;
//��Ͷ���-���������-�Ӻ����������
  //1����Ա�������ؼӺ�


  //2��ȫ�ֺ������ؼӺ�


 //3 ���������Ҳ���Է�����������

class Person
{
public:
    //1����Ա�������ؼӺ�
    //person operator+(person& p)
    //{
    //    person temp;
    //    temp.m_a = this->m_a + p.m_a;//this->m_a ���� p1 �� m_a ��Ա������ֵ���� p.m_a ���� p2 �� m_a ��Ա������ֵ��������ӵĽ����ֵ����ʱ���� temp �� m_a ��Ա������
    //    temp.m_b = this->m_b + p.m_b;
    //    return temp;
    //}
    int m_A;

    int m_B;



};






//2��ȫ�ֺ������ؼӺ�
Person operator+(Person& p1, Person& p2)
{
    Person temp;

    temp.m_A = p1.m_A + p2.m_A;
    temp.m_B = p1.m_B + p2.m_B;
    return temp;
}

//3 ���������Ҳ���Է�����������
Person operator+(Person& p1, int num)//һ��������Person���ͣ���һ��������
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

    //1 ��Ա�������صı��ʵ��ð汾
    //Person p3 = p1.operator+ (p2);   //�����û��д��������أ�������ᱨ��
    //�򻯰汾��
    //Person p3 = p1 + p2;

    //2 ȫ�ֺ������صı��ʵ��ð汾
    Person p3 = operator+(p1, p2);
    //ͬ�����Լ�Ϊ��
    //Person p3 = p1 + p2;

    //3 ���������Ҳ���Է�����������
    //Person p3 = p1 + 10;  ���� Person +int ����㲻д���أ���Ȼ����������ͼ��
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