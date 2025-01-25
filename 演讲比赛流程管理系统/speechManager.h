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
#include "speaker.h"
using namespace std;

//设计演讲管理类
class SpeechManager
{
public:
	//成员属性
	
	  //保存第一轮比赛选手编号容器
	vector<int> v1;

	//第一轮晋级选手编号容器
	vector<int> v2;

	//胜出前三名选手编号容器
	vector<int> vVictory;

	//存放编号以及对应具体选手容器
	map<int, Speaker> m_Speaker;

	//比赛轮数
	int m_Index;

	//文件为空标志
	bool fileIsEmpty;

	//初始化属性 
	void initSpeech();




	//构造函数
	SpeechManager();
	 
	//析构函数
	~SpeechManager();

	//展示菜单
	void show_Menu();

	//choice = 0 退出系统函数
	void exitSystem();

	//创建12名选手
	void createSpeaker();

	//开始比赛-演讲比赛流程控制函数
	void startSpeech();

	//抽签
	void speechDraw();

	//比赛
	void speechContest();

	//显示比赛结果
	void showScore();

	//保存记录
	void saveRecord();

	//读取记录
	void loadRecord();


	//往届记录
	map<int, vector<string>> m_Record;

	//显示往届得分
	void showRecord();

	//清空记录
	void clearRecord();

};
