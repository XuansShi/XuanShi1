
#include <iostream>
using namespace std;

int main() {
	//�����Ӱ���

	//1�����1-100

	
	for (int i = 1; i <= 100; i++)
	{
		
		//2���ҵ��������֣���ӡ������ 7�ı�������λʮλ��7

		if(i % 7 == 0  || i % 10 == 7|| i/10 ==7  )//������������֣���ӡ�������ӡ�
		{ 
			cout << "������" << endl;
		}
		else//��������������֣��Ŵ�ӡ����
		{
			cout << i << endl;
		}


	}


	system("pause");

	return 0;
}

