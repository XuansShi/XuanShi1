////文件操作-文本文件-写文件
//#include <iostream>
//#include <fstream>
//using namespace std;
//
//void test01() 
//{
//	//1.包含头文件
//
//	//2.创建流对象
//
//	ofstream ofs;
//
//	//3.指定打开方式
//
//	ofs.open("text1.txt", ios::out);//第一个参数是文件路径，你可以写名字 也可以写具体路径，第二个则是打开方式
//	                     //这里是写入，所以会生成一个叫text.txt的文件
//						 // 同时也不会在屏幕上打印输出，而是写在文件里面
//						 // 如果你不写生成在哪个目录，那就会生成在项目文件夹里面
//	//4、写内容
//	ofs << "姓名：张三" << endl;
//	ofs << "性别：男" << endl;
//	ofs << "年龄：18" << endl;
//
//
//	//5.关闭文件
//	ofs.close();
//
//
//}
//
//
//int main()
//{
//
//	test01();
//
//	system("pause");
//	return 0;
//}