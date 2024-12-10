//vector容器-插入和删除

#include <iostream>
#include <string>
#include <vector>
using namespace std;

//函数原型：
//1 push_back(ele);                         //尾部插入元素ele
//2 pop_back();                            //删除最后一个元素
//3 insert(const_iterator pos, ele);             //迭代器指向位置pos插入元素ele
//4 insert(const_iterator pos, int count, ele);     //迭代器指向位置pos插入count个元素ele
//5 erase(const_iterator pos);                 //删除迭代器指向的元素
//6 erase(const_iterator start, const_iterator end);//删除迭代器从start到end之间的元素
//7 clear();                                 //删除容器中所有元素


void printVector(vector<int>&v)//遍历打印函数
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";

	}
	cout << endl;

}

void test01()
{
//尾插
	//1 push_back(ele);       //尾部插入元素ele
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	printVector(v1);




//尾删
	//2 pop_back();                            //删除最后一个元素
	v1.pop_back();//尾删最后一个元素




//插入
    //3 insert(const_iterator pos, ele);             //迭代器指向位置pos插入元素ele
	v1.insert(v1.begin(),100);//使用起始迭代器给v1的头部插入一个100//第一个参数是迭代器
	printVector(v1);



	//4 insert(const_iterator pos, int count, ele);     //迭代器指向位置pos插入count个元素ele
	v1.insert(v1.begin(), 2,1000);//给v1的起始位置插入两个1000
	printVector(v1);




//删除
    //5 erase(const_iterator pos);                 //删除迭代器指向的元素
	v1.erase(v1.begin());//删掉第一个参数（起始迭代器的位置）
	printVector(v1);



	//6 erase(const_iterator start, const_iterator end);//删除迭代器从start到end之间的元素
	v1.erase(v1. begin(), v1.end());//从头到尾全删了
	printVector(v1);


    //7 clear();                                 //删除容器中所有元素
	cout << "再插个100，然后再清空看看" << endl;
	v1.push_back(100);
	printVector(v1);
	v1.clear();//与v1.erase(v1.begin(), v1.end());同等效果
	printVector(v1);


}


int main()
{
	test01();


	system("pause"); 
	return 0;
}