//谓词-一元谓词
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

class GreaterFive//创建一个仿函数，当元素大于5就返回
{
public:
	bool operator()(int val)
	{
		return val > 5;//数字大于5就返回
	}



};





void PtintVector(const vector<int>& v)
{
	for (vector<int>::const_iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

}

void test01()
{
	vector<int>v;

	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	//使用find_if算法查找容器中有没有大于5的数字
	vector<int>::const_iterator it =  find_if(v.begin(), v.end(), GreaterFive());//find_if的前两个参数是区间，第三个参数是函数对象（这里用的是匿名函数对象）
//find_if的底层代码：
	//_EXPORT_STD template <class _InIt, class _Pr>
	//	_NODISCARD _CONSTEXPR20 _InIt find_if(_InIt _First, const _InIt _Last, _Pr _Pred) { // find first satisfying _Pred
	//	_STD _Adl_verify_range(_First, _Last);
	//	auto _UFirst = _STD _Get_unwrapped(_First);
	//	const auto _ULast = _STD _Get_unwrapped(_Last);
	//	for (; _UFirst != _ULast; ++_UFirst) {
	//		if (_Pred(*_UFirst)) {
	//			break;
	//		}
	//	}

	//	_STD _Seek_wrapped(_First, _UFirst);
	//	return _First;
  //所以,找到了会返回首个符合条件的迭代器，找不到则返回结束迭代器

	if (it == v.end())
	{
		cout << "没找到" << endl;
	}
	else
	{
		cout << "找到了大于5的数字是：" << *it << endl;
	}





}


int main()
{
	test01();

	system("pause");
	return 0;
}