//ν��-һԪν��
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

class GreaterFive//����һ���º�������Ԫ�ش���5�ͷ���
{
public:
	bool operator()(int val)
	{
		return val > 5;//���ִ���5�ͷ���
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

	//ʹ��find_if�㷨������������û�д���5������
	vector<int>::const_iterator it =  find_if(v.begin(), v.end(), GreaterFive());//find_if��ǰ�������������䣬�����������Ǻ������������õ���������������
//find_if�ĵײ���룺
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
  //����,�ҵ��˻᷵���׸����������ĵ��������Ҳ����򷵻ؽ���������

	if (it == v.end())
	{
		cout << "û�ҵ�" << endl;
	}
	else
	{
		cout << "�ҵ��˴���5�������ǣ�" << *it << endl;
	}





}


int main()
{
	test01();

	system("pause");
	return 0;
}