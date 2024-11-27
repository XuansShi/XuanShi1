//STL初识- Vector容器嵌套容器
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;



void test01()
{

	//创建大容器
	vector<vector<int>> v;

	//创建小容器
	vector <int> v1;
	vector <int> v2;
	vector <int> v3;
	vector <int> v4;


	//向小容器中添加数据
	for (int i = 0; i < 4; i++)
	{
		v1.push_back(i + 1);
		v2.push_back(i + 2);
		v3.push_back(i + 3);
		v4.push_back(i + 4);


	}

	//将小容器插入大容器v
	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	v.push_back(v4);

	//通过大容器v把所有的数据都遍历一遍
	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++)
    //这里也要改成大容器↑	
	{
		
			//这里(*it)对应<>里的就是一个小容器，所以这里需要再给小容器进行遍历
		for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++)
//这里也对应改成解引用得到的东西，也就是(*it)↑
		{
			cout << *vit << " " ;


		  }
		cout << endl;
	
	}



}

int main()
{
	test01();




	system("pause");
	return 0;

}