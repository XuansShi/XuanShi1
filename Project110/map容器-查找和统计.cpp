//map容器-查找和统计

#include<iostream>
#include<algorithm>
#include<map>
#include<string>

using namespace std;

//函数原型：
//1   find(key);                  //查找key是否存在,若存在，返回该键的元素的迭代器；若不存在，返回set.end();
//2   count(key);                //统计key的元素个数
void test01()
{
	map<int, int> m;
	m.insert(pair<int, int>(1, 10));
	m.insert(make_pair(2, 20));
	m.insert(map<int, int>::value_type(3, 30));
	m[4] = 40;

//1   find(key);    //查找key是否存在,若存在，返回该键的元素的迭代器；若不存在，返回set.end();
	map<int, int>::iterator pos = m.find(3);
	if (pos != m.end())
	{
		//如果返回的迭代器不是末尾迭代器，说明找到了
		cout << "存在元素key= " <<(*pos).first<<"  value = "<<(*pos).second << endl;

	}
	else
	{
		cout << "不存在" << endl;
	}

//2   count(key);          //统计key的元素个数
	int key = 1;
	cout << "key = " << key << " 的元素有 " << m.count(key) <<" 个" << endl;
	//由于map不允许插入重复key元素（value值以key第一次插入的为准），所以count的结果是0或1




}


int main()
{
	test01();




	system("pause");
	return 0;
}