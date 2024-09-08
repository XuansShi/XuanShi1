#pragma once //防止头文件重复包含
#include <iostream>
#include "point.h"//本文件中需要用到point.h文件中的东西，所以这里需要写一下它的头文件
using namespace std;


//圆类
class Circle
{
public:
	//设置半径
	void setR(int r)
		;






	//获取半径
	int getR()
		;




	//设置圆心
	void setCenter(Point center)
		;






	//获取圆心
	Point getCenter()
		;



};


