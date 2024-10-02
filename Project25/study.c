#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>



//关机程序：
  //1.电脑运行起来后，1分钟内关机
  //2.如果输入：爱莉希雅天下第一，就取消关机

int main()
{

	char input[20] = { 0 };
	system("shutdown -s -t 10");
again:
	printf("请注意：你的电脑将在10s内关机\n");
	printf("如果你输入： 爱莉希雅天下第一 \n");
	printf("那我就放过你\n");
	printf("请输入：\n");
	scanf("%s", &input);
	if (strcmp(input ,"爱莉希雅天下第一") == 0)//习：两个字符串比较只能用strcmp函数
	{
		printf("爱门！");
		system("shutdown -a");


	}
	else
	{

		printf("年轻人，我劝你耗子尾汁\n");
		printf("再给你一次机会");
		goto again;

	}


	return 0;
}