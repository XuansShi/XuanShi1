#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include"globalFile.h"
#include"student.h"
#include"teacher.h"
#include"manager.h"
using namespace std;

//��ݻ���
class Identity
{
public:

	//�����˵����麯��
	virtual void operMenu() = 0;
	string m_Name; //�û���
	string m_Pwd;//����


};