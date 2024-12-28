//pair使用-pair对组的创建
#include<iostream>
//对组pair没有专属的STL头文件
#include<string>

using namespace std;

//两种创建方式：
//1  pair<type, type> p(value1, value2);

//2  pair<type, type> p = make_pair(value1, value2);



void test01()
{
	
//1  pair<type, type> p(value1, value2);
    cout << "1 pair<type, type> p(value1, value2);"<<endl;
	pair<string, int> p("Tom", 20);

	//使用点出.first  或者 .second 来获取对组中的数据
	cout << "姓名：" << p.first << "年龄" << p.second << endl;


	
//2  pair<type, type> p = make_pair(value1, value2);//make_pair制造对组方法
	cout << "2  pair<type, type> p = make_pair(value1, value2);" << endl;
	pair<string, int> p2 = make_pair("Jerry", 18);
	cout << "姓名：" << p2.first << "年龄" << p2.second << endl;

}


int main()
{
	test01();


	system("pause");
	return 0;
}





