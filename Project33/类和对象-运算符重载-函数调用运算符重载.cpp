#include <iostream>
#include <string>
using namespace std;
//��Ͷ���-���������-�����������������

//��ӡ�����
class MyPrint
{
public:
	//���غ������÷�()
	void operator()(string test)
	{

		cout << test << endl;
	}


};


void MyPrint02(string test);//����Ҫ����һ�£�����test01�Ҳ���MyPrint02


void test01()
{
	MyPrint myprint;

	myprint("HELLOWORLD");//����������������һ������ĺ�������˳�Ϊ �º���

	MyPrint02("Bronya");

}

//�º����ǳ���û�й̶���д��
  // ������ø��ַ���ֵ���ͣ�Ҳ���Դ������Ĳ���
  
//�ӷ���
class MyAdd
{
public:
	int operator()(int num1,int num2)
	{
		return num1 + num2;

	}


};

void test02()
{
	MyAdd myadd;
    int ret = myadd(100,200);//����д�൱��100�����������num1,200�����������num2
    cout << "ret = " << ret << endl;
	
	//������������
	cout <<MyAdd()(100,300) << endl;
	     //������ġ�MyAdd()�� ��Ҳ���� ����ֵ+С���� ����ʽ���ᴴ���һ����������������С���ž���ʹ��������
}


//�������дһ�������ʽ�ĺ�����
void MyPrint02(string test)
{
	cout << test << endl;


}


int main()
{
	test01();
	test02();

	system("pause");
	return 0;
}