//map容器-插入和删除

#include<map>
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

//函数原型：
//1.	insert(elem);           //在容器中插入元素。
//2.	clear();                    //清除所有元素。
//3.	erase(pos);              //删除pos迭代器所指的元素，返回下一个元素的迭代器。
//4.	erase(beg, end);    //删除区间[beg,end)的所有元素 ，返回下一个元素的迭代器。
//5.	erase(key);            //删除容器中值为key的元素。


void PrintMap(const map<int, int>& mp)
{
	if (mp.empty())
	{
		cout << "容器为空" << endl;
	}
	{
		for (map<int, int>::const_iterator it = mp.begin(); it != mp.end(); it++)
		{

			cout << "key = " << (*it).first << "  value = " << it->second << endl;//因为这里是对组，所以你不能只是用*it，你可以用点出或者箭头的方法得到第一个和第二个数据
		}
		cout << endl;
	}

}


void test01()
{

	map<int, int> m1;
	//1.	插入元素
	cout << "1.	插入元素 " << endl;
	//法一、mp.insert(elem);   
	m1.insert(pair<int, int>(1, 10));
	m1.insert(pair<int, int>(2, 20));
	m1.insert(pair<int, int>(3, 30));
	m1.insert(pair<int, int>(4, 40));
	
	//法二、make_pair方法
	m1.insert(make_pair(5, 50));//注：对组可以使用make_pair方法构造对组 以此用于插入
	
	//法三、value_type值类型方法(不建议使用)
	m1.insert(map<int,int>::value_type(6, 60));
	
	//法四、重载中括号(不建议使用，如果你插错了就会像数组一个创建一个默认值为0的数)
	m1[7] = 70;
	PrintMap(m1);
	  //该方法用途：可以利用key访问到value （和数组是一样的）



	//3.	erase(pos);              //删除pos迭代器所指的元素，返回下一个元素的迭代器。
	cout << "3.	erase(pos);" << endl;
	map<int, int>::iterator mp = m1.begin();
	mp++;
	m1.erase(mp);
	PrintMap(m1);




	//5.	erase(key);            //删除容器中值为key的元素。
	cout << "5.	erase(key);" << endl;
	m1.erase(40);
	PrintMap(m1);




	//4.	erase(beg, end);    //删除区间[beg,end)的所有元素 ，返回下一个元素的迭代器。
	cout << "4.	erase(beg, end);" << endl;
	 mp = m1.begin();
	mp++;//这里发现：利用迭代器指定删除具体位置时，迭代器是一次性的，下一次要重新赋予初值（？也许是因为地址全改变了？）
	m1.erase(mp, m1.end());
	//m1.erase(m1.begin(), m1.end());
	PrintMap(m1);


	//2.	clear();                    //清除所有元素。
	cout << "2.	clear();" << endl;
	m1.clear();
	PrintMap(m1);



}



int main()
{
	test01();




	system("pause");
	return 0;
}
