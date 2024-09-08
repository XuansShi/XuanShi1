#include "point.h"
//点类

//这里就只需要留下函数的实现就行了
//复制黏贴过来后，把函数的实现以外的部分删掉，然后会发现这些函数都在报错
// 这是因为这些函数都是成员函数，但你把他们放在全局里了、
// 所以需要加上一个作用域   Point::
	//设置x
void Point::setX(int x)
{
	m_X = x;
}

//获取x
int Point::getX()
{
	return m_X;


}


//设置y
void Point::setY(int y)
{
	m_Y = y;


}

//获取x
int Point:: getY()
{
	return m_Y;


}


