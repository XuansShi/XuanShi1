#include <iostream>
#include <string>
using namespace std;

//������Ԫ

class Building//Building��
{
	friend class GoodGay;;
public:

	Building();//���캯�� ����ѧϰһ�������⹹�캯��

	string m_SittingRoom;//���� ����

private:
	string m_BedRoom;//˽�� ����


};

//����ѧϰһ�������⹹�캯����д��Ա��������

Building::Building()//ϰ������������
{
	//����Ա���������ֵ
	m_SittingRoom = "����";

	m_BedRoom = "����";

};







class GoodGay//�û�����
{
public:
	Building * building;//Building���͵�buildingָ��

	GoodGay();//���캯��  ����Ҳѧϰһ�������⹹��ķ���


	void visit();//�����ιۺ��� ����Building��Ĺ�����˽������
	
	//ע��������ʱ��Ҫд�����壬��Ȼ�Ῠס����ʹ���޷����庯��
};

GoodGay:: GoodGay()//ѧϰһ�������⹹�캯���ķ���
{
	//����������Ķ���
	building = new Building;//��new�ڶ�������һ������
	//����д�˸���Building * building;��Building���͵�buildingָ��,����ָ��new���Ķ���building
	
	//ϰ��new��ʲô�������;ͷ���ʲô��������


}

//�ιۺ���
void GoodGay::visit()//ϰ�����������д�ڷ���ֵ���ͺ󣬺�����ǰ
{
	cout << "�û��������ڷ���" << building->m_SittingRoom << endl;

	cout << "�û��������ڷ���" << building->m_BedRoom << endl;//����㲻��ȡ��ʩ������ͻᱨ��
	//�����������õ��˱��ڵ�����
	  //��ֻ��Ҫ����һ�������������Ѻ��������ŵ�class�ڲ�����ǰ��)��дһ��GoodGay��Ԫ����Building�����ǰ��ͺ�
}


//���Ժ�����
void test01()
{
	GoodGay gg;//ʵ������һ������gg

	gg.visit();//��gg����GoodGay�������visit����


}

int main()
{
	test01();
	//�Ƚ�һ������test01�ᷢ��ʲô��
	  //1 ��ʵ�����õ�����gg
	  //2 ��������ggʱ���ȵ���GoodGay�Ĺ��캯��
	  //3 ��GoodGay���캯�����������һ������building
      //4 ��������buildingʱ��Ҳ�����Building�Ĺ��캯����Ȼ�����Ա������ֵ
	  //5 Ȼ�����gg���visit������������û������ڷ��ʿ�����


	system("pause");
	return 0;
}