//��Ͷ���-�̳�-�̳��еĶ���ģ��

#include <iostream>
using namespace std;


class Base
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;



};


class Son :public Base
{
public:
	int m_D;

};

void test01()
{
	//
	cout << "sizeof Son =" <<sizeof(Son) <<endl;
	//����ļ������� 4x4=16
	  //˵�������۸����еĳ�Ա��ʲôȨ�ޣ����඼���Լ̳и������еĳ�Ա
	  //����˽�г�Ա���Ա������������ˣ����Է��ʲ�������ȷʵ�̳�������
}


int main()
{


	system("pasue");
	return 0;
}
//�ܽ᣺�Ӹ���̳������ķǾ�̬��Ա���ԣ��Լ�������е� �����������
//����ʹ�õ����ϵ�VS Developer Command Prompt���߲鿴����ģ��