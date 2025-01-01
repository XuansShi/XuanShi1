//STL案例2-员工分组
#include<iostream>
#include<map>
#include<vector>
#include<string>
#include<algorithm>
#include<ctime>

using namespace std;

#define 侧滑 0 
#define 美术 1
#define 研发 2

//案例描述
//* 公司今天招聘了10个员工（ABCDEFGHIJ），10名员工进入公司之后，需要指派员工在那个部门工作
//* 员工信息有: 姓名  工资组成；部门分为：策划、美术、研发
//* 随机给10名员工分配部门和工资
//* 通过multimap进行信息的插入  key(部门编号) value(员工)
//* 分部门显示员工信息


//1. 创建10名员工，放到vector中
//2. 遍历vector容器，取出每个员工，进行随机分组
//3. 分组后，将员工部门编号作为key，具体员工作为value，放入到multimap容器中
//4. 分部门显示员工信息


class Worker
{
public:
	string m_Name;
	int m_Salary;


};

void createWorker(vector<Worker>&v)//创建员工函数
{
	string namedSeed = "ABCDEFGHIJ";//提前准备名称种子用于赋值
	for (int i = 0; i < 10; i++)
	{
		Worker worker;//实例化
		worker.m_Name = "员工";
		worker.m_Name += namedSeed[i];
		
		worker.m_Salary = rand() % 10000 + 10000+1;// 10000<=工资<=20000 

		v.push_back(worker);//把插入vector容器

	}


}

void PrintWorker(const vector<Worker>&vWorker)
{
	for (vector<Worker>::const_iterator it = vWorker.begin(); it != vWorker.end(); it++)
	{

		cout << "姓名：" << it->m_Name << " 工资：" << it->m_Salary << endl;
	}
	cout << endl;

}


void setGroup(vector<Worker>&v,multimap<int,Worker>&m)
{
	for (vector<Worker>::const_iterator it = v.begin(); it != v.end(); it++)
	{
		//产生随机部门编号
		int deptID = rand() % 3;//产生随机数 0 或 1 或 2 

		m.insert(make_pair(deptID, *it));//it是迭代器（可以理解为地址)，那么*it就是具体的值


	}



}


void showWorker(multimap<int, Worker>& m)
{
	cout << "策划部门：" << endl;
	multimap<int,Worker>::iterator Fit = m.find(侧滑);//使用multimap容器内置的find函数，找到第一个策划员工的迭代器
	int count = m.count(侧滑);////使用multimap容器内置的count函数，确定key = 0的键值对的个数
	int index = 0;//索引，用于循环计数
	for (; Fit != m.end() && index < count; Fit++, index++)
	{
		cout << "key = " << Fit->first << "  姓名： " << Fit->second.m_Name << "  工资： " << Fit->second.m_Salary << endl;//这里的“Fit->second.m_Name”前面必须用箭头，后面必须用点出
		cout << endl;
	}


	cout << "美术部门：" << endl;
	 Fit = m.find(美术);
	count = m.count(美术);
	index = 0;
	for (; Fit != m.end() && index < count; Fit++, index++)
	{
		cout << "key = " << Fit->first << "  姓名： " << Fit->second.m_Name << "  工资： " << Fit->second.m_Salary << endl;
		cout << endl;
	}


	cout << "研发部门：" << endl;
	 Fit = m.find(研发);
	count = m.count(研发);
	index = 0;
	for (; Fit != m.end() && index < count; Fit++, index++)
	{
		cout << "key = " << Fit->first << "  姓名： " << Fit->second.m_Name << "  工资： " << Fit->second.m_Salary << endl;//这里的“Fit->second.m_Name”前面必须用箭头，后面必须用点出
		cout << endl;
	}


}



int main()
{

	srand((unsigned int)time(NULL));//时间戳生成真随机数

	//1、创建员工
	vector<Worker>vWorker;
	createWorker(vWorker);

	//PrintWorker(vWorker);


	//2、员工分组
	multimap<int, Worker>mWorker;
	setGroup(vWorker, mWorker);


	//3、分组显示员工
	showWorker(mWorker);

	system("pause");
	return 0;
}