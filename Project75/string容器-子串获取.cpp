//string����-�Ӵ���ȡ
#include <iostream>
#include <string>
using namespace std;

//����ԭ�ͣ�
//string substr(int pos = 0, int n = npos) const;  //������pos��ʼ��n���ַ���ɵ��ַ���


void test01()
{
	string str = "abcdef";

	string Substr = str.substr(1, 3);

	cout << "SubStr = " << Substr << endl;
}



//����ʵ�õĲ���
void test02()
{
	string email = "hello@sina.com";

	//���ʼ���ַ�� ��ȡ �û�����Ϣ

	int pos = email.find('@');
	string usrName = email.substr(0, pos);
	//��������ֱ�Ӳ���@��λ�ã�Ȼ����н�ȡ0~pos�Ĳ��֣��Ϳ��Եõ�@ǰ�Ķ�����
	cout << "�û���Ϊ��" << usrName << endl;

}



int main()
{
	test01();

	test02();

	system("pause");
	return 0;
}