//string����-�ַ���ƴ��
  //������
    //һ��ʹ��string�ڲ������������
    //����ʹ�ó�Ա����append


//����ԭ�ͣ�
//1 string& operator+=(const char* str);                   //����+=������
//2 string& operator+=(const char c);                         //����+=������
//3 string& operator+=(const string& str);                //����+=������
//4 string& append(const char *s);                                //���ַ���s���ӵ���ǰ�ַ�����β
//5 string& append(const char *s, int n);                 //���ַ���s��ǰn���ַ����ӵ���ǰ�ַ�����β
//6 string& append(const string &s);                           //ͬoperator+=(const string& str)
//7 string& append(const string &s, int pos, int n);//�ַ���s�д�pos��ʼ��n���ַ����ӵ��ַ�����β



#include <iostream>
#include <string>
using namespace std;

void test01()
{
	//1 string& operator+=(const char* str);                   //����+=������
	cout << "1" << endl;
	string str1 = "����";
	str1 += " ���� ";
	cout << "str1 = " << str1 << endl;

	

	//2 string& operator+=(const char c);                         //����+=������
	cout << "2" << endl;
	str1 += ' - ';
	cout << "str1 = " << str1 << endl;



	//3 string& operator+=(const string& str);                //����+=������
	cout << "3" << endl;
	string str2 = " ����";
	str1 += str2;
	cout << "str1 = " << str1 << endl;


	//4 string& append(const char *s);                                //���ַ���s���ӵ���ǰ�ַ�����β
	cout << "4" << endl;
	string str3 = "����ϣ��";
	str3.append(" ���� ");
	cout << "str3 = " << str3 << endl;



	//5 string& append(const char *s, int n);                 //���ַ���s��ǰn���ַ����ӵ���ǰ�ַ�����β
	cout << "5" << endl;
	str3.append("��Ͼ֮��", 4);//ע������ʵ����ռ�����ַ������Խ�ȡ����Ͼ����Ҫ�4��
	cout << "str3 = " << str3 << endl;


	//6 string& append(const string &s);                           //ͬoperator+=(const string& str)
	cout << "6" << endl;
	string str4 = "��֮����";
	str3.append(str4);
	cout << "str3 = " << str3 << endl;


	//7 string& append(const string &s, int pos, int n);//�ַ���s�д�pos��ʼ��n���ַ����ӵ��ַ�����β
	cout << "7" << endl;
	str3.append(str4, 0, 2);//��str4��0��λ�����ˡ��֣���ȡ2���ַ�//��һ�������ǽ�ȡ�ĸ��ַ������ڶ��������Ǵ��ĸ�λ�ý�ȡ�������������ǽ�ȡ���ٸ�
	cout << "str3 = " << str3 << endl;

}
//ע������ʵ����ռ�����ַ�



int main()
{
		
	test01();


	system("pause");
	return 0;
}