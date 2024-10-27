////文件操作-二进制文件-写文件
//#include <iostream>
//#include <fstream>
//using namespace std;
//
//class Person//这里演示一下使用类和对象的知识
//{
//public:
//	char m_Name[64];//姓名//二进制文件使用C++的字符串可能会出bug，所以这里就直接用c语言的char数组
//	int m_Age;//年龄
//
//
//};
//
//
//void test01()
//{
//	//1、包含头文件
//
//	//2、创建输出流对象
//	ofstream ofs("person.txt", ios::out | ios::binary);
//	  //↑其实你也可以在创建流对象的时候就设置好文件地址、打开方式
//	   //因为该对象存在一个可以让你这么做的构造函数
//
//	//3、打开文件
//	//ofs.open("person.txt", ios::out | ios::binary);//使用按位或操作符同时使用两种打开方式
//
//
//	//4、写文件
//	Person p = { "张三",18 };//实例化Person类的对象，同时赋值
//
//
//	ofs.write((const char *)&p,sizeof(Person));//两个变量，其一是该数据的地址，其二是该数据的长度
//	//注意这里的p是Person类型，但该函数返回值的原型是const char* 类型，而所以需要强转
//
//	//5、关闭文件
//	ofs.close();
//}
//int main()
//{
//	test01();
//
//
//	system("pause");
//	return 0;
//}