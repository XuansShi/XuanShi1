#include<iostream>
using namespace std;
//P116 ��Ͷ���-��������-��ָ����ʳ�Ա����
//��ָ����ó�Ա����
class Person
{
public:
	void showClassName()
	{

		cout << "this is Person class" << endl;


	}

	void showPersonAge()
	{
		

		if (this == NULL)
		{

			return;
		}
		//�������if�Ϳ��Խ���ɿ�ָ�����������
		 //���壺�������Ŀ�ָ���ֱ�ӷ��ؽ������������������cout

		
		cout << "age = " << m_Age << endl;
	
	}


	int m_Age;
};

void test01()
{
	Person* p = NULL;//Person���͵�ָ��ָ��NULL�� 

	p->showClassName();//ʹ�ÿ�ָ����ó�Ա����
	p->showPersonAge();

}
//���������л����
  //���� ֻ���� p->showClassName();  �������
  //�������� p->showPersonAge(); ����� 
    //������ȡ����Ȩ�޴���
	
//������ 
  //��ʵ����ǰ��Ĭ�ϼ��˸� this->
    //cout << "age = " << m_Age << endl;
      //�൱�� cout << "age = " << this->m_Age << endl;
  //����ʱ���˸���ָ�룬�൱����������Ǹ��յ�û��ʵ��Ķ�����Ҳ����û���κζ���
  //��һ���յ�ֵ���ܷ���һ�����ԡ�Ҳ�����޷����� ��ȷ�ж��������

  //����ԭ���Ǵ����ָ��Ϊ��NULL




 
int main()
{
	test01();



	system("pause");
	return 0;
}