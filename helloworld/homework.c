//2051891 �Ź� ���ζ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int y, m, d;
	int status = 0;//����״̬��ȡ0������ȡ1�·ݲ���ȷ��ȡ2�ղ���ȷ
	int num = 0;//�����ļ���
	int leap = 0;//�Ƿ����꣬��ȡ1����ȡ0
	printf("���������(2000-2030)���·�(1-12) : ");
	scanf("%d%d%d", &y, &m, &d);
	num += d;
	leap = ((y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)) ? 1 : 0);
	if (m <= 0 || m > 12)
	{
		status = 1;

	}
	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
	{
		if (d > 31 || d < 1)
		{
			status = 2;
		}
	}
	else if (m == 2)
	{
		if (d > 28 + leap || d < 1)
		{
			status = 2;
		}
	}
	else
	{
		if (d > 30 || d < 1)
		{
			status = 2;
		}
	}
	if (status == 0)
	{
		
	}
	else if (status == 1)
	{
		printf("�������-�·ݲ���ȷ\n");
	}
	else if (status == 2)
	{
		printf("�������-�����µĹ�ϵ�Ƿ�\n");
	}
	return 0;
}
