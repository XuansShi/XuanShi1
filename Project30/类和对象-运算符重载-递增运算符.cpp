#include<iostream>
using namespace std;

//���ص��������
class MyInteger
{
	friend ostream& operator<<(ostream& cout, MyInteger myint);
public:

	MyInteger()
	//���캯��
	{
		m_Num = 0;

	}

//����ǰ��++�����
	MyInteger &operator++()//�����myint��MyInteger���ͣ���������ķ���ֵҲ������ͬ
	{       //������������õ�ԭ��
		        //��֤�ڶ��++�����Ƕ�ͬһ�����ݽ��в�����������++��󷵻�һ���µ����� 
		         //����Ƿ񱨴��޹�
				 
				//����++����
		m_Num++;
		//��������
		return *this;//*������thisָ�룬��������

	}


//���غ���++�����   
  //ϰ������Ҫע�⺯���ض��������;����ֵ���Ͳ�����Ϊ�ض��������
	MyInteger operator++(int)//���int��ռλ������������������ǰ�úͺ��õ���
	{         //ע������ͱ�д������        
		        //��Ϊtemp�Ǿֲ����󣬵�ǰ����ִ�����ᱻ�ͷ�
				
		//�� ��¼��ʱ���
		MyInteger temp = *this;
		//��� ����
		m_Num++;
		//��󽫼�¼���������
		return temp;
	
	}


private:

int m_Num;

};

//�������������<<
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