//自己通用的数组类
#pragma once

#include <iostream>
using namespace std;

int i = 0;

template<class T>
class MyArray
{
public:

	//有参构造 参数 容量
	MyArray(int capacity)
	{
		cout << "MyArray的有参构造调用" << endl;
		this->m_Capacity = capacity; 
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];

	}

	//拷贝构造
	MyArray(const MyArray& arr)
	{
		cout << "MyArray的拷贝构造调用" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		//this->pAddress = arr.pAddress;浅拷贝会导致堆区数据重复释放
	   
		//深拷贝
		this->pAdress = new T[arr.m_Capacity];
		  //将arr中的数据都拷贝过来
		for (int i = 0; i < this->m_Size; i++)
		{
			this -> pAddress[i] = arr.pAddress[i];

		}
	}

	//operator=运算符重载防止浅拷贝问题
	MyArray& operator=(const MyArray& arr)     //习：=等号赋值要返回自身的引用才能连等
	{
		cout << "MyArray的operator=调用" << endl;
		//先判断原来堆区是否有数据，如果有先释放
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}
		//深拷贝
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.mSize;
		this->pAddress = new T[arr.m_Capacity];
		for (i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
		return *this;//返回自身才能使用连等


	}

	//尾插法
	void Push_Back(const T &val)
	{
		//判断容量是否等于大小
		if (this->m_Capacity == this->m_Size)
		{
			return;//塞满了就直接返回

		}
		this->pAddress[this->m_Size]= val;//往数组最后一个位置插入
		this->m_Size++;//更新数据大小 
	}

	//尾删法
	void Pop_Back()
	{
		//让用户无法访问最后一个元素即可（逻辑上的删除）
		if (this->m_Size == 0)
		{
			//如果数组里没有东西就直接return
			return;
		}

		//有东西就--，让用户访问不到这里
		this->m_Size--;


	}

	//通过下标方式访问数组中元素
	  //由于MyArray是自定义的数据类型，无法直接用常规的访问数组的方式访问
	    //所以需要运算符重载[]
	    //习：如果想将函数调用作为等号的左值，需要返回引用
	T&  operator[] (int index)//传入下标
	{
		return this->pAddress[index];


	}

	//返回数组容量 
	int getCapacity()
	{
		return this->m_Capacity;


	}
	//返回数组大小
	int getSize()
	{
		return this->m_Size;


	}

	//析构函数//用于释放堆区数据
	~MyArray()
	{

		if (this->pAddress != NULL)
		{
			cout << "MyArray的析构函数调用" << endl;
			delete[] this->pAddress;//习：释放数组需要加[]
			this->pAddress = NULL;//置空指针，防止野指针
			this->m_Capacity = 0;
			this->m_Size = 0;
		}

	}
private:
	T* pAddress;//指针指向堆区开辟的真实数组
	int m_Capacity;//数组容量
	int m_Size;//数组大小


};



