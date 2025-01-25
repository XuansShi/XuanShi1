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


int main()
{
	srand((unsigned int)time(NULL));//随机数种子

	SpeechManager sm;//创建管理类对象

	////测试12名选手创建
	//for (map<int, Speaker>::iterator it = sm.m_Speaker.begin(); it != sm.m_Speaker.end(); it++)
	//{
	//	cout<<"选手编号："<<it->first<<"选手姓名："<<it->second.m_Name<<"选手分数："<<it->second.m_Score[0]<<endl;
	//}
	
	int choice = 0;
	system("cls");//清屏
	while (true)
	{
		sm.show_Menu();

		cout << "请输入您的选择" << endl;
		cin >> choice;//接受用户的选择

		switch (choice)
		{
		case 1 ://开始比赛
			sm.startSpeech();
			break;

		case 2://查看记录
		sm.showRecord();
			break;
		
		case 3://清空记录
			sm.clearRecord();
			break;

		case 0://退出系统
			sm.exitSystem();
			break;

		default:
			system("cls");//清屏
			break;
		}



	}








	system("pause");
	return 0;
}