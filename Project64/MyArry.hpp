//�Լ�ͨ�õ�������
#pragma once

#include <iostream>
using namespace std;

int i = 0;

template<class T>
class MyArray
{
public:

	//�вι��� ���� ����
	MyArray(int capacity)
	{
		cout << "MyArray���вι������" << endl;
		this->m_Capacity = capacity; 
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];

	}

	//��������
	MyArray(const MyArray& arr)
	{
		cout << "MyArray�Ŀ����������" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		//this->pAddress = arr.pAddress;ǳ�����ᵼ�¶��������ظ��ͷ�
	   
		//���
		this->pAdress = new T[arr.m_Capacity];
		  //��arr�е����ݶ���������
		for (int i = 0; i < this->m_Size; i++)
		{
			this -> pAddress[i] = arr.pAddress[i];

		}
	}

	//operator=��������ط�ֹǳ��������
	MyArray& operator=(const MyArray& arr)     //ϰ��=�ȺŸ�ֵҪ������������ò�������
	{
		cout << "MyArray��operator=����" << endl;
		//���ж�ԭ�������Ƿ������ݣ���������ͷ�
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}
		//���
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.mSize;
		this->pAddress = new T[arr.m_Capacity];
		for (i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
		return *this;//�����������ʹ������


	}

	//β�巨
	void Push_Back(const T &val)
	{
		//�ж������Ƿ���ڴ�С
		if (this->m_Capacity == this->m_Size)
		{
			return;//�����˾�ֱ�ӷ���

		}
		this->pAddress[this->m_Size]= val;//���������һ��λ�ò���
		this->m_Size++;//�������ݴ�С 
	}

	//βɾ��
	void Pop_Back()
	{
		//���û��޷��������һ��Ԫ�ؼ��ɣ��߼��ϵ�ɾ����
		if (this->m_Size == 0)
		{
			//���������û�ж�����ֱ��return
			return;
		}

		//�ж�����--�����û����ʲ�������
		this->m_Size--;


	}

	//ͨ���±귽ʽ����������Ԫ��
	  //����MyArray���Զ�����������ͣ��޷�ֱ���ó���ķ�������ķ�ʽ����
	    //������Ҫ���������[]
	    //ϰ������뽫����������Ϊ�Ⱥŵ���ֵ����Ҫ��������
	T&  operator[] (int index)//�����±�
	{
		return this->pAddress[index];


	}

	//������������ 
	int getCapacity()
	{
		return this->m_Capacity;


	}
	//���������С
	int getSize()
	{
		return this->m_Size;


	}

	//��������//�����ͷŶ�������
	~MyArray()
	{

		if (this->pAddress != NULL)
		{
			cout << "MyArray��������������" << endl;
			delete[] this->pAddress;//ϰ���ͷ�������Ҫ��[]
			this->pAddress = NULL;//�ÿ�ָ�룬��ֹҰָ��
			this->m_Capacity = 0;
			this->m_Size = 0;
		}

	}
private:
	T* pAddress;//ָ��ָ��������ٵ���ʵ����
	int m_Capacity;//��������
	int m_Size;//�����С


};



