//STL案例-评委打分

#include <iostream>
#include <string>
#include <deque>
#include <vector>
#include <algorithm>
#include <ctime>
using namespace std;

//案例描述：
//有5名选手：选手ABCDE，10个评委分别对每一名选手打分，去除最高分，去除评委中最低分，取平均分。



class Person
{ 
public:
	Person(string name, int score)
	{
		this->m_Name = name;
		this->m_Score = score;

	}

	//选手的属性：姓名 和 平均分
	string m_Name;
	int m_Score;


};

void createPerson(vector<Person>&v)//如果你不用引用的方式传入，那你是无法使用形参修改实参的
{
	//名称赋值小技巧：
	  //你可以先把待赋予的值准备好，然后再进行拼接
	string nameSeed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string name = " 选手";
		name += nameSeed[i];//习：string字符串拼接、字符串存取

		int score = 0;

		Person p(name, score);//实例化

		//将创建的person对象 放入到容器中
		v.push_back(p);
	}



}



void MyPrintScore(const vector<Person>&p)
{
	for (vector<Person> ::const_iterator it = p.begin(); it != p.end(); it++)
	{
		cout <<"姓名："<< (*it).m_Name << "  ";//注意it是Person类型，所以你应该使用点出
		cout << "平均分：" << (*it).m_Score << endl;;
	}
	cout << endl;

}

void setScore(vector<Person>&v)
{

	cout << "显示具体得分：" << endl;
	for (vector<Person> ::iterator it = v.begin(); it != v.end(); it++)
	{
   //将评委的分数放入deque容器中
		deque<int> d;
		for (int i = 0; i < 10; i++)
		{
			//这个分数你可以自己手动输入，也可以直接传入随机数，这里为了方便演示直接使用随机数了
			int score = rand()%41+60;//习：随机数取模41，只会得到0到40的数，然后加上60就会得到60~100
			d.push_back(score);

		}
		

		
		cout << "选手： " << it->m_Name << "   具体打分： " << endl;
		for (deque<int> ::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			cout << *dit << " ";
		}
		cout << endl;
		//去除最高分和最低分
		  //有sort算法做排序就变得非常简便了
		sort(d.begin(), d.end());

		//去除最高和最低分，可以用deque的头删和尾删
		d.pop_back();
		d.pop_front();

		//取平均分
		int sum = 0;
		for (deque<int> ::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			sum += *dit;//累加分数
		}
		int avg = sum / d.size();//直接除容器d的大小

		//将平均分赋值给m_Score
		it->m_Score = avg;




	}
	



}

int main()
{
	//随机数种子
	srand((unsigned int)time(NULL));


	//1、创建5名选手
	vector<Person> v;
	createPerson(v);

	//测试：
	//MyPrint(v);
	
	//2、给5名选手打分
	setScore(v);

	//3、显示最后得分
	cout  << endl;
	cout << "显示最后得分：" << endl;
	MyPrintScore(v);


	 

	system("pause");
	return 0;
}

