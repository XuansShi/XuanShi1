//set容器-set和multiset区别
#include<iostream>
#include<set>
#include<string>
#include<algorithm>

using namespace std;

//区别：
//set不可以插入重复数据，而multiset可以
//set插入数据的同时会返回插入结果，表示插入是否成功
//multiset不会检测数据，因此可以插入重复数据





void PrintSet(const set<int>& s)
{
	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";

	}
	cout << endl;
}

void PrintMultiset(const multiset<int>& ms)
{
	for (multiset<int>::const_iterator it = ms.begin(); it != ms.end(); it++)
	{
		cout << *it << " ";

	}
	cout << endl;
}



void test01()
{

	cout << "set容器：" << endl;

	set<int>s1;
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);
	PrintSet(s1);

	//这里是set的insert的定义：
	/*template <bool _Multi2 = _Multi, enable_if_t<!_Multi2, int> = 0>
	pair<iterator, bool> insert(value_type && _Val) {
		const auto _Result = _Emplace(_STD move(_Val));
		return { iterator(_Result.first, _Get_scary()), _Result.second };
	}*/
	  
	  //insert返回值的类型是一个 pair<iterator, bool>队组
	    //队组就是成对出现的数据（此处第一个数据是迭代器；第二个是bool，代表是否插入成功）

	pair<set<int>::iterator, bool> ret ;
	ret = s1.insert(10);
	if (ret.second)//使用点出得到队组的第二个数据
	{
		cout << "插入成功" << endl;
	}
	else
	{
		cout << "插入失败，可能已经存在该元素" << endl;
	}


	cout << "multiset容器：" << endl;
	multiset<int> ms1;
	ms1.insert(10);
	ms1.insert(10);
	ms1.insert(10);
	ms1.insert(10);

	//这里是multiset的insert的定义：
	/*template <bool _Multi2 = _Multi, enable_if_t<_Multi2, int> = 0>
	iterator insert(value_type && _Val) {
		return iterator(_Emplace(_STD move(_Val)).first, _Get_scary());
	}*/

	  //可以看到insert返回值的数据类型是迭代器，所以不会判断是否插入重复

	PrintMultiset(ms1);

}


int main()
{
	test01();


	system("pause");
	return 0;
}
