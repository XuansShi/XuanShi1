#include <iostream>
using namespace std;
//ѧϰthisָ������壺
//1��������Ƴ�ͻ�����βκͳ�Ա����ͬ��ʱ������thisָ�������֣�

//2������  *this  �Է��ض�����


class Person
{
public:
	Person(int age)//�β�age
	{
		this->age = age;
        //thisָ��ָ����Ǳ����õĳ�Ա���������Ķ���
		  //���� �����Ķ��� ������� p0
	}
	int age;//��Ա����age
	//�õı���ϰ�ߣ�int m_Age;  ��m member�Լ��»������ֱ�ʾ���ǳ�Ա



	Person& PersonAddAge(Person& p)//�����&p����Ϊ�������˵�ַ���ݲ���ôд
	{
		this->age += p.age;
		//��&p������ӵ�������

     return *this;
	}
	//thisָ��p2��ָ�룬��*thisָ��ľ���p2���������
	


};

//1��������Ƴ�ͻ�����βκͳ�Ա����ͬ��ʱ������thisָ�������֣�
  //��������βκͳ�Ա����ͬ����������ĺ��������һ������
  //������� 
    // һ����һ�����ƣ������г�Ա����ǰ����m_ 
  
    // ������thisָ��:
      //��Person�Ĺ��캯���� age=age �ĳ� this->age = age;
void test01()
{
	Person p0(18);
	cout << "p1�����䣺" << p0.age << endl;

}




//2������  *this  �Է��ض�����
void test02()
{
	Person p1(10);
	Person p2(10);
	p2.PersonAddAge(p1);

	cout << "p2������Ϊ��" << p2.age<<endl;



//��������ε��� test02() ��p2��Ӽ��Σ�
	//����˵����p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
	//��ô�Ϳ����õ�thisָ����
	 //��Ҫ��class����Ĺ��캯��PersonAddAge���棬��thisָ��д����ֵ
	 //ͬʱ�����ķ���ֵ���͸ĳ����� Person&

	//�޸ĺ�ĺ����� test03();


 //˼����
	//����� Person& �ĳ� Person ��Ҳ���ǰ�ָ��ĳ�ֵ�������� test03() �õ��Ľ����ʲô��
	  //���Ϊ20
	  //p2+10�󣬷��صĲ���p2�����ˡ�
	  //�ӿ������캯���ĽǶȣ��Ǵ�������������һ���µ����ݣ�(�Ǵ�����һ���µ�����)
	    //�൱�ڷ�����p2'��Ȼ�󷵻���p2'',Ȼ�󷵻���p2'''��ÿ�η��صĶ����¶���
	 
}
void test03()
{
	Person p3(10);
	Person p4(10);
	p4.PersonAddAge(p3).PersonAddAge(p3).PersonAddAge(p3);
	//�˴������� ����ʽ���˼�롱
	  //���������������
	  //��ʵ�����coutҲ��ͬ����˼��
	cout << "p4������Ϊ��" << p4.age << endl;
	


}



int main()
{
	test01();

	test02();

	test03();



	system("pause");
	return 0;
}