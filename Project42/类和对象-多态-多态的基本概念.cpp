//��Ͷ���-��̬-��̬�Ļ�������
#include <iostream>
using namespace std;

//������
class Animal
{
public:
	virtual void  speak()
	{

		cout << "������˵��" << endl;
	}

};

//è��
class Cat :public Animal
{
	void speak()
	{

		cout << "��������˵��" << endl;
	}


};

//����
class Dog :public Animal
{
	void speak()
	{

		cout << "����������˵��" << endl;
	}


};


//ִ��˵���ĺ���
void doSpeak(Animal& animal)
{
	animal.speak();


}




void test01()
{

	Cat cat;
	doSpeak(cat);//Animal & animal = cat ����Animal & animal����cat)

	//��C++��������֮�������ת��������Ҫ��ǿ��ת��

	//���﷢���������ǡ�������˵�������ǡ���̬��̬�ĺ�����ַ��󶨡� ��������׶ξ���ȷ����ַ 

	//�����Ҫʹ�� ��èè��˵����������Ҫʹ�ö�̬��̬�ˡ�Ҳ���ǲ��������������ַ��ǰ��(���������ڱ���׶ΰ�)����Ҫ�����н׶ΰ󶨣���ַ���)

	//ֻ��Ҫ�Ѷ�����ĳ�Ա�����ĳ��麯����Ҳ�����ڸ��෵��ֵ����ǰ����virtual�������virtual��д�ɲ�д��
	//���������ͻ���ݴ���ĵ�ַ��ѡ������ĸ�����

	//�ݴ�дһ��������˵���ĺ�����
	Dog dog;
	doSpeak(dog);


}
/*
��̬��̬����������
1��	�м̳й�ϵ
2��	������д������麯��
	//��д����������ֵ���͡��������������б���ȫ��ͬ
*/


//��̬��̬��ʹ�ã�
  //�����ָ���������ִ���������



int main()
{
	test01();



	system("pause");
	return 0;
}