//string����-�ַ������Һ��滻

#include <iostream>
#include <string>
using namespace std;

//��Ϊ��������̫���ˣ�ֻ��������

// һ������
//1.	int find(const string & str, int pos = 0) const;              //����str��һ�γ���λ��,��pos��ʼ����

//2.	int find(const char* s, int pos = 0) const;                      //����s��һ�γ���λ��,��pos��ʼ����

//3.	int find(const char* s, int pos, int n) const;                //��posλ�ò���s��ǰn���ַ���һ��λ��

//4.	int find(const char c, int pos = 0) const;                        //�����ַ�c��һ�γ���λ��
//
//5.	int rfind(const string & str, int pos = npos) const;      //����str���һ��λ��,��pos��ʼ����

//6.	int rfind(const char* s, int pos = npos) const;              //����s���һ�γ���λ��,��pos��ʼ����

//7.	int rfind(const char* s, int pos, int n) const;              //��pos����s��ǰn���ַ����һ��λ��

//8.	int rfind(const char c, int pos = 0) const;                        //�����ַ�c���һ�γ���λ��

void test01()
{
	//find


	string str1 = "abcdefgde";

	int pos1 =  str1.find("de");//find�ķ���ֵ��int���ͣ����ص�һ���ҵ���λ��
	cout << "pos = " << pos1 << endl;//��ӡ�Ľ����3��ָ���Ǵ�0��ʼ������3��λ�ã�Ҳ���ǡ�d����һ�γ��ֵĵط���
	
	int pos2 = str1.find("df");
	cout << "pos = " << pos2 << endl;//�Ҳ�����������-1

	//����һ��������:
	if (pos2 == -1)
	{
		cout << "û�ҵ�" << endl;

	}
	else
	{
		cout << "�ҵ��ˣ��±��� pos = " << pos2 << endl;
	}

	//rfind��find������
	  //rfind�Ǵ���������ң����˳�����������0��
	  //find�Ǵ�������

	int pos3 = str1.rfind("de");
	cout << "pos3 = " << pos3 << endl;
	//��������Ľ����7


 }





// �����滻
//1 string & replace(int pos, int n, const string & str);        //�滻��pos��ʼn���ַ�Ϊ�ַ���str

//2 string & replace(int pos, int n, const char* s);                  //�滻��pos��ʼ��n���ַ�Ϊ�ַ���s


void test02()
{
	string str1 = "abcdefg";
	cout << "�滻ǰ str1 = " << str1 << endl;
	str1.replace(1, 3, "1234");//�滻��1��λ��3��λ���ַ�
	cout << "�滻�� str1 = " << str1 << endl;
	//��������a1234efg
	  //˵���ѡ�bcd��3���ַ��滻���ˡ�1234��4���ַ�


}





int main()
{
	test01();
	test02();

	system("pause");
	return 0;
}