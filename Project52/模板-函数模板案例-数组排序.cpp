#include <iostream>
using namespace std;

//实现通用 对数组进行排序的函数
//规则 从大到小
//算法 选择
//测试 char数组 int数组

//交换函数模板
template<class T>
void mySwap(T&a,T&b)
{
	T temp = a;
	a = b;
	b = temp;


}






//排序算法模板
template<class T>
void mySort(T arr[],int len)//习：对数组进行操作时一般会传一个数组长度进去
{
	for (int i = 0; i < len; i++)
	{
		int max = i;//认定最大值下标
		for (int j = i + 1; j < len; j++)//从i+1位开始找
		{

			if (arr[max] < arr[j])//认定的最大值 比 遍历出的数值 小，说明遍历出的（下标j=i+1的数据）才是最大值
			{
				max = j;//更新最大值的下标


			}

		}
		if (max != i)//如果max≠i，则交换下标对应的数组元素
		{
			mySwap(arr[max], arr[i]);



		}

	}


}

//打印数值元素模板
template <class T>
void myPrint(T arr[], int len)
{

	for (int i = 0; i < len; i++)
	{
	cout << arr[i] <<" ";//每打印一个空一格
	}
	cout << endl;//都打印完了再做换行也可以


}



void test01()
{
	//测试char数组
	char charArr[] = "badcfe";
	int num1 = sizeof(charArr) / sizeof(char);

	cout << "交换前" << endl;
	myPrint(charArr, num1);

	mySort(charArr, num1);

	cout << "交换后" << endl;
	myPrint(charArr, num1);
	//测试int数组
	int intArr[] = { 1,10,4,5,7,9 };
	int num2 = sizeof(intArr) / sizeof(int);

	cout << "交换前" << endl;
	myPrint(intArr, num2);

	mySort(intArr, num2);

	cout << "交换后" << endl;
	myPrint(intArr, num2);

}


int main()
{
	test01();







	system("pause");
	return 0;
}