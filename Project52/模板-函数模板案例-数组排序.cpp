#include <iostream>
using namespace std;

//ʵ��ͨ�� �������������ĺ���
//���� �Ӵ�С
//�㷨 ѡ��
//���� char���� int����

//��������ģ��
template<class T>
void mySwap(T&a,T&b)
{
	T temp = a;
	a = b;
	b = temp;


}






//�����㷨ģ��
template<class T>
void mySort(T arr[],int len)//ϰ����������в���ʱһ��ᴫһ�����鳤�Ƚ�ȥ
{
	for (int i = 0; i < len; i++)
	{
		int max = i;//�϶����ֵ�±�
		for (int j = i + 1; j < len; j++)//��i+1λ��ʼ��
		{

			if (arr[max] < arr[j])//�϶������ֵ �� ����������ֵ С��˵���������ģ��±�j=i+1�����ݣ��������ֵ
			{
				max = j;//�������ֵ���±�


			}

		}
		if (max != i)//���max��i���򽻻��±��Ӧ������Ԫ��
		{
			mySwap(arr[max], arr[i]);



		}

	}


}

//��ӡ��ֵԪ��ģ��
template <class T>
void myPrint(T arr[], int len)
{

	for (int i = 0; i < len; i++)
	{
	cout << arr[i] <<" ";//ÿ��ӡһ����һ��
	}
	cout << endl;//����ӡ������������Ҳ����


}



void test01()
{
	//����char����
	char charArr[] = "badcfe";
	int num1 = sizeof(charArr) / sizeof(char);

	cout << "����ǰ" << endl;
	myPrint(charArr, num1);

	mySort(charArr, num1);

	cout << "������" << endl;
	myPrint(charArr, num1);
	//����int����
	int intArr[] = { 1,10,4,5,7,9 };
	int num2 = sizeof(intArr) / sizeof(int);

	cout << "����ǰ" << endl;
	myPrint(intArr, num2);

	mySort(intArr, num2);

	cout << "������" << endl;
	myPrint(intArr, num2);

}


int main()
{
	test01();







	system("pause");
	return 0;
}