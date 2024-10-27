//文件操作-文本文件-读文件
#include <iostream>
#include <fstream>
#include <string>
using namespace std;





void test01()
{
	//1、包含头文件

	//2、创建流对象(输入流)
     ifstream ifs;

	//3、打开文件并且判断是否打开成功
	 ifs.open("text1.txt", ios::in);//为读文件而打开文件

	 if (!ifs.is_open())//is_open函数是判断是否打开成功的函数，返回bool类型的数据。所以这里可以加一个if
		 //↑习惯上这里取反，判断是否打开失败
	 {
		 cout << "文件打开失败" << endl;
	
	 }
	 else
	 {
		 cout << "文件打开成功" << endl;
		
	 }
	//4、读数据
	
	 //第一种：使用 右移操作符 和 数组
	 
	   //char buf[1024] = { 0 };  //初始化数组
	   //while (ifs>>buf)//使用右移运算符把ifs的数据放到数组buf中；读到假时结束while
	   //{
		  // cout << buf << endl;

	   //}

	 //第二种 局部getline函数 + 数组
	   //char buf[1024] = { 0 };
	   //while (ifs.getline(buf,sizeof(buf)))//局部getline函数 获取一行，它需要两个参数,其一是读取的地址，其二是读取多少个字节数
	   //{
		  // cout << buf << endl;

	   //}


	 //第三种 全局getline函数 + C++的字符串
	 //string buf;
	 //while (getline(ifs,buf ))//全局getline需要两个参数，其一是输入流对象名,其二是字符串名
	 //{
		// cout << buf << endl;

	 //}

	 //第四种 get函数 + 字符型
	   //不推荐，该方法一次只能读取文件里的一个字符
	 char c;
	 while( (c = ifs.get()) !=EOF )//注意这句表达式要用括号括起来，再用!=判断;   ENF是"end of file"是文件尾部标志
		 {
		 cout << c ;

		 }


	//5、关闭文件
	 ifs.close();

}


int main()
{
	test01();
	

	system("pause");
	return 0;
}