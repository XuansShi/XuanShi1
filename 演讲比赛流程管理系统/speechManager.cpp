#pragma once //防止头文件重复包含
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <deque>
#include <algorithm>
#include <functional>
#include <iterator>
#include <fstream>
#include <sstream>
#include <ctime>
#include <numeric>
#include "speechManager.h"
#include "speaker.h"
using namespace std;

//构造函数
SpeechManager::SpeechManager()
{
	this->initSpeech();//初始化属性函数

	this->createSpeaker();//创建选手函数

	this->loadRecord();//加载往届记录

}

//析构函数
SpeechManager::~SpeechManager()
{



}

//展示菜单函数实现
void SpeechManager:: show_Menu() //习：返回值+作用域+函数名
{
	cout << "————————-欢迎参加演讲比赛————————--" << endl;
	cout << "————————输入1：开始演讲比赛————————" << endl;
	cout << "————————输入2：查看往届记录————————" << endl;
	cout << "————————输入3：清空比赛记录————————" << endl;
	cout << "————————输入0：退出比赛程序————————" << endl;
	cout << endl;


}

// choice = 0 退出系统函数
void SpeechManager::exitSystem()
{
	cout << "欢迎下次使用" << endl;
	system("pause");
	exit(0);//终止程序的执行
	//C++ 中的 exit 函数
	//	在 C++ 中，exit 函数用于终止程序的执行，并向操作系统返回一个状态码。
	//	它是标准库函数，定义在 <cstdlib> 头文件中。
	//	exit 函数原型：
	//	void exit(int status);
	//		status 通常用于指示程序的退出状态，0 表示成功，非 0 表示失败


}


//初始化属性 
void  SpeechManager::initSpeech()
{
	//容器都置空
	this->v1.clear();
	this->v2.clear();
	this->vVictory.clear();	
	this->m_Speaker.clear();
	this->m_Index = 1;
	this->fileIsEmpty = false;

	//将记录容器清空
	this->m_Record.clear();
}


//创建选手
void SpeechManager::createSpeaker()
{
string nameSeed = "ABCDEFGHIJKL";//预制名称种子
for (int i = 0; i < nameSeed.size(); i++)//习：使用size()函数统计字符串长度
{
	string name = "选手";
	name += nameSeed[i];//字符串拼接

	Speaker sp;

	sp.m_Name = name;//赋值选手姓名

	for(int j = 0 ; j<2; j++)
	{
		sp.m_Score[j] = 0;
	}

	//插入12名选手编号到v1容器中
	this->v1.push_back(i + 10001);

	//插入选手编号以及对应选手的键值对到map容器中
	this->m_Speaker.insert(make_pair(i+ 10001, sp));

}

}


// choice == 1 开始比赛-演讲比赛流程控制函数
void SpeechManager::startSpeech()
{
	//第一轮比赛

	//1.抽签
	this->speechDraw();
	//2.比赛
	this->speechContest();
	//3.显示晋级结果
	this->showScore();

	//第二轮比赛
	this->m_Index++;
	//1.抽签
	this->speechDraw();
	//2.比赛
	this->speechContest();
	//3.显示最终结果
	this->showScore();
	//4.保存分数
	this->saveRecord();

	//重置比赛数据
	this->initSpeech();//初始化属性
	this->createSpeaker();//创建选手
	this->loadRecord();//加载往届记录


	cout<<"本届比赛完毕" << endl;
	system("pause");



}



//抽签
void  SpeechManager::speechDraw()
{
	cout << "第" << this->m_Index << "轮比赛选手正在抽签" << endl;
	cout << "-------------------" << endl;
	cout << "抽签后演讲顺序如下：" << endl;
	if (this->m_Index == 1)
	{
		random_shuffle(v1.begin(), v1.end());//随机打乱容器v1中元素的顺序
		for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
		{
			cout << *it << " ";
		}
		cout << endl;

	}
	else
	{
		random_shuffle(v2.begin(), v2.end());//随机打乱容器v2中元素的顺序
		for (vector<int>::iterator it = v2.begin(); it != v2.end(); it++)
		{
			cout << *it << " ";
		}
		cout << endl;
	}

	cout << "-------------------" << endl;
	system("pause");

}


//比赛
void SpeechManager::speechContest()
{
	cout << "第" << this->m_Index << "轮比赛正式开始" << endl;

	//准备临时容器，存放小组成绩
	multimap<double, int, greater<double>> groupScore;//key是得分，value是具体选手编号，greater<double>是降序

	int num = 0;//记录人员个数，用于记录名次,6个一组

	vector<int> v_Src;//比赛选手容器

	//判断当前是第几轮，选手容器赋值
	if(this->m_Index == 1)
	{
		v_Src = v1;
	}
	else
	{
		v_Src = v2;
	}

	for (vector<int>::iterator it = v_Src.begin(); it != v_Src.end(); it++)
	{
		num++;

		//评委打分
		deque<double> d;
		for (int i = 0; i< 10; i++)
		{
			double score = (rand() % 401 + 600) / 10.f;//产生60~100之间的随机小数打分，.f表示小数
		
			d.push_back(score);//插入容器
		}
		cout << endl;

		sort(d.begin(), d.end(), greater<double>());//降序排序

		d.pop_front();//去除最高分
		d.pop_back();//去除最低分

		double sum = accumulate(d.begin(), d.end(), 0.0f);//accumulate算法求总分；起始累加值为0.0f（浮点数）
		double avg = sum /(double)d.size();//求平均分

		//每个人的平均分

		this->m_Speaker[*it].m_Score[this->m_Index - 1] = avg;//将平均分放入map容器中

		//6个人一组，用临时容器multimap<double, int, greater<double>> groupScore存放
		groupScore.insert(make_pair(avg,*it));

		if (num % 6 == 0)
		{
			cout<< "第" << num / 6 << "小组比赛名次如下：" << endl;//进来6个人就是第1组，进来12个人就是第2组

			for (multimap<double, int, greater<double>>::iterator it = groupScore.begin(); it != groupScore.end(); it++)
			{
				cout << "编号：" << it->second << "姓名：" << this->m_Speaker[it->second].m_Name << "得分：" << this->m_Speaker[it->second].m_Score[this->m_Index - 1] << endl;
			}

			int count = 0;

			//取前三名
			for (multimap<double, int, greater<double>>::iterator it = groupScore.begin(); it != groupScore.end() && count < 3; it++, count++)
			{
				if (this->m_Index == 1)
				{
					v2.push_back((*it).second);//第一轮比赛，把小组前三名放入v2容器(晋级决赛的6个人)
				}
				else
				{
					vVictory.push_back((*it).second);//第二轮比赛，把小组前三名放入vVictory容器(胜出的前三名)
				}
			}

			groupScore.clear();//小组容器清空

			cout << endl;
		}











	}
	cout<<"第" << this->m_Index << "轮比赛完毕" << endl;
	system("pause");

}

void SpeechManager::showScore()
{
	cout << "第" << this->m_Index << "轮晋级选手如下：" << endl;
	vector<int>v;
	if (this->m_Index == 1)
	{
		v = v2;
	}
	else
	{
		v = vVictory;
	}

	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout<<"选手编号"<<*it<<"姓名"<<m_Speaker[*it].m_Score[this->m_Index - 1]<<endl;
	}
	cout << endl;

	system("pause");
	system("cls");//清屏
	this->show_Menu();//调用菜单函数
}

//保存记录
void SpeechManager::saveRecord()
{
	ofstream ofs;
	ofs.open("speech.csv", ios::out | ios::app);//用输出的方式打开文件--写文件

	//将每个选手数据写入到文件中
	for (vector<int>::iterator it = vVictory.begin(); it != vVictory.end(); it++)
	{
	ofs<<*it<<","<<m_Speaker[*it].m_Score[1] << ",";
	}
	ofs << endl;

	//关闭文件
	ofs.close();

	cout << "记录已经保存" << endl;

	//更改文件不为空的状态
	this->fileIsEmpty = false;
}






void SpeechManager::loadRecord()
{
	ifstream ifs("speech.csv", ios::in);//输入流对象 读取文件
	if (!ifs.is_open())
	{
		this->fileIsEmpty = true;
		cout << "文件不存在" << endl;
		ifs.close();
		return;
	}

	char ch;
	ifs >> ch;

	if (ifs.eof())
	{
		cout << "文件为空" << endl;
		this->fileIsEmpty = true;
		ifs.close();
		return;
	}

	//文件不为空
	this->fileIsEmpty = false;
	ifs.putback(ch);//将上面读取的单个字符放回去
	string data;
	int index = 0;

	while (ifs >> data)
	{
		vector<string>v;//存放单个选手数据
		int pos = -1;//查找逗号位置
		int start = 0;//起始位置
		while (true)
		{
			pos = data.find(",", start);//从start位置开始查找逗号
			if (pos == -1)
			{
				break;//找不到逗号，退出循环
			}
			string tmp = data.substr(start, pos - start);//找到了，进行分割截取逗号前面的数据      ；  参数1 ：起始位置，参数2：截取长度
			v.push_back(tmp);//将截取的数据放入容器中	

			start = pos + 1;//更新start的位置，跳过逗号
		}
		this->m_Record.insert(make_pair(index, v));//将每个选手数据放入到map容器中
		index++;
	}
	ifs.close();
	for (map<int,vector<string>>::iterator it = m_Record.begin();it !=m_Record.end();it++ )
	{ 
		cout << it->first << "冠军编号" << it->second[0] << "得分" << it->second[1] << endl;
	}
}



void SpeechManager::showRecord()
{


	if (this->fileIsEmpty)
	{
		cout << "文件不存在或者记录为空" << endl;
	}
	else
	{
	for (int i = 0; i < this->m_Record.size(); i++)
	{
		cout<<"第"<<i+1<<"届"<<
			"冠军编号"<<this->m_Record[i][0]<<"得分"<<this->m_Record[i][1]<<" "
			"亚军编号"<<this->m_Record[i][2]<<"得分"<<this->m_Record[i][3]<<" "
			"季军编号"<<this->m_Record[i][4]<<"得分"<<this->m_Record[i][5]<<endl;
	}

	}

	system("pause");
	system("cls");
}

void SpeechManager::clearRecord()
{
	cout << "确认清空文件？" << endl;
	cout << " 1 是 " << endl;
	cout << " 2  否 " << endl;
	cin >> select;
	if (select == 1)
	{
		ofstream ofs("speech.csv", ios::trunc);
		ofs.close();

		this->initSpeech();//初始化属性函数

		this->createSpeaker();//创建选手函数

		this->loadRecord();//加载往届记录

		cout << "清空成功！" << endl;
	}

	system("pause");
	system("cls");

}
