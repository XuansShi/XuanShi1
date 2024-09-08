#include <iostream>
using namespace std;
#include <string>

//����1-��������

//1.������������
//2.�������
//3.�����Ϊ ��ȡ��������������
//4.�ֱ�����ȫ�ֺ����ͳ�Ա���� �ж������������Ƿ����
class Cube
{
public:

//��Ϊ
	//���ó����
	//��
	void setL(int l)
	{
		m_L = l;
	}
	//��
	void setW(int w)
	{
		m_W = w;
	}
	//��
	void setH(int h)
	{
		m_H = h;
	}
 //��ȡ�����
	//��
	int getL()
	{

		return m_L;
	}
	//��
	int getW()
	{

		return m_W;
	}

	//��
	int getH()
	{

		return m_H;
	}
  //��ȡ���������
	int calculateS()
	{
		return 2 * m_L * m_W + 2 * m_L * m_H + 2 * m_H * m_W;

	}
  //��ȡ���������
	int calculateV()
	{
		return  m_L * m_W * m_H;
	}

  //���ó�Ա�����ж������������Ƿ����
	bool siSameByClass(Cube &c)//�ص㣺 �Ƚ�����������ֻ��Ҫ��һ������Ϊ������һ����֪��ȥ�������������Ȼ���ٴ�һ�����ԱȾ���
	{
		if (getL() == c.getL() && getH() == c.getH() && getW() == c.getW())
		{  //������ĳ�����ֱ��дgetL()������Ϊ�����ڣ�Ҳ����дm_L
			return true;

		}
		return false;

	}



//���� һ������˽��
private:
	//�����
	int  m_L;
	int m_W;
	int m_H;






};

//����ȫ�ֺ����ж������������Ƿ����
bool isSame(Cube& c1, Cube& c2)//��Ϊֻ��Ҫ�ж���٣�����ʹ��bool��ʹ�����ý��д��ݣ����ٴ�����(����Ҫ�ٿ���������)
{
	if (c1.getL() == c2.getL() && c1.getH() == c2.getH() && c1.getW() == c2.getW())
	{
		return true;

	}
	return false;

}



int main()
{
//�������������c1
	Cube c1;
	c1.setL(10);
	c1.setH(10);
	c1.setW(10);

	cout << "c1�����Ϊ��" << c1.calculateS() << endl;
	cout << "c1�����Ϊ��" << c1.calculateV() << endl;

	//�������������c2
	Cube c2;
	c2.setL(10);
	c2.setH(10);
	c2.setW(10);


	//����ȫ�ֺ����ж�
	bool ret  = isSame(c1, c2);

	if (ret)
	{
		cout << "c1��c2ȫ��" << endl;

	}
	else
	{
		cout << "c1��c2��ȫ��" << endl;

	}


	//���ó�Ա�����ж�
	ret = c1.siSameByClass(c2);
	if (ret)
	{
		cout << "��Ա�����жϽ����c1��c2ȫ��" << endl;

	}
	else
	{
		cout << "��Ա�����жϽ����c1��c2��ȫ��" << endl;

	}

	system("pause");

	return 0;
}
