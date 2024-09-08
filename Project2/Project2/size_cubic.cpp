#include <iostream>
using namespace std;
#include <string>

//案例1-立方体类

//1.创建立方体类
//2.设计属性
//3.设计行为 获取立方体面积和体积
//4.分别利用全局函数和成员函数 判断两个立方体是否相等
class Cube
{
public:

//行为
	//设置长宽高
	//长
	void setL(int l)
	{
		m_L = l;
	}
	//宽
	void setW(int w)
	{
		m_W = w;
	}
	//高
	void setH(int h)
	{
		m_H = h;
	}
 //获取长宽高
	//长
	int getL()
	{

		return m_L;
	}
	//宽
	int getW()
	{

		return m_W;
	}

	//高
	int getH()
	{

		return m_H;
	}
  //获取立方体面积
	int calculateS()
	{
		return 2 * m_L * m_W + 2 * m_L * m_H + 2 * m_H * m_W;

	}
  //获取立方体体积
	int calculateV()
	{
		return  m_L * m_W * m_H;
	}

  //利用成员函数判断两个立方体是否相等
	bool siSameByClass(Cube &c)//重点： 比较两个立方体只需要传一个：因为可以用一个已知的去调用这个函数，然后再传一个做对比就行
	{
		if (getL() == c.getL() && getH() == c.getH() && getW() == c.getW())
		{  //↑自身的长可以直接写getL()，又因为在类内，也可以写m_L
			return true;

		}
		return false;

	}



//属性 一般设置私有
private:
	//长宽高
	int  m_L;
	int m_W;
	int m_H;






};

//利用全局函数判断两个立方体是否相等
bool isSame(Cube& c1, Cube& c2)//因为只需要判断真假，所以使用bool；使用引用进行传递，减少处理步骤(不需要再拷贝过来了)
{
	if (c1.getL() == c2.getL() && c1.getH() == c2.getH() && c1.getW() == c2.getW())
	{
		return true;

	}
	return false;

}



int main()
{
//创建立方体对象c1
	Cube c1;
	c1.setL(10);
	c1.setH(10);
	c1.setW(10);

	cout << "c1的面积为：" << c1.calculateS() << endl;
	cout << "c1的体积为：" << c1.calculateV() << endl;

	//创建立方体对象c2
	Cube c2;
	c2.setL(10);
	c2.setH(10);
	c2.setW(10);


	//利用全局函数判断
	bool ret  = isSame(c1, c2);

	if (ret)
	{
		cout << "c1与c2全等" << endl;

	}
	else
	{
		cout << "c1与c2不全等" << endl;

	}


	//利用成员函数判断
	ret = c1.siSameByClass(c2);
	if (ret)
	{
		cout << "成员函数判断结果：c1与c2全等" << endl;

	}
	else
	{
		cout << "成员函数判断结果：c1与c2不全等" << endl;

	}

	system("pause");

	return 0;
}
