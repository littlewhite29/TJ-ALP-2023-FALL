//2051891 �Ź� ���ζ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int y, m, d;
	int status = 0;//����״̬��ȡ0������ȡ1������
	int num = 0;//�·�����
	int leap = 0;//�Ƿ����꣬��ȡ1����ȡ0
	printf("���������(2000-2030)���·�(1-12) : ");
	scanf("%d%d", &y, &m);
	leap = ((y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)) ? 1 : 0);
	if (y < 2000 || y>2030)
	{
		status = 1;
	}
	if (m <= 0 || m > 12)
	{
		status = 1;
	}
	//�ж�������ȷ��
	if (status == 1)
	{
		printf("����Ƿ�������������\n");
	}

	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
	{
		num = 31;
	}
	else if (m == 2)
	{
		num = 28 + leap;
	}
	else
	{
		num = 30;
	}
	
	//������ȷ����ʼ��ӡ
	return 0;
}
