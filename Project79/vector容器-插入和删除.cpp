//vector����-�����ɾ��

#include <iostream>
#include <string>
#include <vector>
using namespace std;

//����ԭ�ͣ�
//1 push_back(ele);                         //β������Ԫ��ele
//2 pop_back();                            //ɾ�����һ��Ԫ��
//3 insert(const_iterator pos, ele);             //������ָ��λ��pos����Ԫ��ele
//4 insert(const_iterator pos, int count, ele);     //������ָ��λ��pos����count��Ԫ��ele
//5 erase(const_iterator pos);                 //ɾ��������ָ���Ԫ��
//6 erase(const_iterator start, const_iterator end);//ɾ����������start��end֮���Ԫ��
//7 clear();                                 //ɾ������������Ԫ��


void printVector(vector<int>&v)//������ӡ����
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";

	}
	cout << endl;

}

void test01()
{
//β��
	//1 push_back(ele);       //β������Ԫ��ele
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	printVector(v1);




//βɾ
	//2 pop_back();                            //ɾ�����һ��Ԫ��
	v1.pop_back();//βɾ���һ��Ԫ��




//����
    //3 insert(const_iterator pos, ele);             //������ָ��λ��pos����Ԫ��ele
	v1.insert(v1.begin(),100);//ʹ����ʼ��������v1��ͷ������һ��100//��һ�������ǵ�����
	printVector(v1);



	//4 insert(const_iterator pos, int count, ele);     //������ָ��λ��pos����count��Ԫ��ele
	v1.insert(v1.begin(), 2,1000);//��v1����ʼλ�ò�������1000
	printVector(v1);




//ɾ��
    //5 erase(const_iterator pos);                 //ɾ��������ָ���Ԫ��
	v1.erase(v1.begin());//ɾ����һ����������ʼ��������λ�ã�
	printVector(v1);



	//6 erase(const_iterator start, const_iterator end);//ɾ����������start��end֮���Ԫ��
	v1.erase(v1. begin(), v1.end());//��ͷ��βȫɾ��
	printVector(v1);


    //7 clear();                                 //ɾ������������Ԫ��
	cout << "�ٲ��100��Ȼ������տ���" << endl;
	v1.push_back(100);
	printVector(v1);
	v1.clear();//��v1.erase(v1.begin(), v1.end());ͬ��Ч��
	printVector(v1);


}


int main()
{
	test01();


	system("pause"); 
	return 0;
}