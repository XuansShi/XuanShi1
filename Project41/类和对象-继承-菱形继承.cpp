#include <iostream>
using namespace std;

class ����
{
public:
	int m_Age;

};

class ���ŷ���:virtual public ����{};

class ��ͼ:virtual public ����{};

class ����:public ���ŷ���,public ��ͼ{};

void test01()
{
	���� st;

	//st.m_Age = 18;//������������ж������ˣ��˴���������ȷ��
	st.���ŷ���::m_Age = 18;
	st.��ͼ::m_Age = 28;
	cout << "st.���ŷ���::m_Age = "<< st.���ŷ���::m_Age << endl;
	cout << "st.��ͼ::m_Age = " << st.��ͼ::m_Age << endl;
   //���������μ̳У���������ӵ��ͬ�����ݣ�����Ҫ��������������

	//��Ȼ������һ�����������������ݣ��������Դ���˷�
  //������̳У��ɽ��������
	//��̳��﷨:class ����: virtual �̳з�ʽ ����{};
  //��ʱ class�����Ϊ������ࡱ  
  
  //��ʱ����дһ��cout<<"st.m_Age = "<<st.m_Age<<endl;���Ͳ����ٱ�����
	cout << "st.m_Age = " << st.m_Age << endl;
}



int main()
{
	test01();


	system("pause");
	return 0;
}