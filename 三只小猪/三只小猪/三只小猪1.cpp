
#include <iostream>
using namespace std;

int main() {
	//敲桌子案例

	//1、输出1-100

	
	for (int i = 1; i <= 100; i++)
	{
		
		//2、找到特殊数字，打印敲桌子 7的倍数、个位十位有7

		if(i % 7 == 0  || i % 10 == 7|| i/10 ==7  )//如果是特殊数字，打印“敲桌子”
		{ 
			cout << "敲桌子" << endl;
		}
		else//如果不是特殊数字，才打印数字
		{
			cout << i << endl;
		}


	}


	system("pause");

	return 0;
}

