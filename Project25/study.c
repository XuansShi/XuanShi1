#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>



//�ػ�����
  //1.��������������1�����ڹػ�
  //2.������룺����ϣ�����µ�һ����ȡ���ػ�

int main()
{

	char input[20] = { 0 };
	system("shutdown -s -t 10");
again:
	printf("��ע�⣺��ĵ��Խ���10s�ڹػ�\n");
	printf("��������룺 ����ϣ�����µ�һ \n");
	printf("���ҾͷŹ���\n");
	printf("�����룺\n");
	scanf("%s", &input);
	if (strcmp(input ,"����ϣ�����µ�һ") == 0)//ϰ�������ַ����Ƚ�ֻ����strcmp����
	{
		printf("���ţ�");
		system("shutdown -a");


	}
	else
	{

		printf("�����ˣ���Ȱ�����β֭\n");
		printf("�ٸ���һ�λ���");
		goto again;

	}


	return 0;
}