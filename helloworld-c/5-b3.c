////2051891 �Ź� ���ζ�
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	int y, m, d;
//	int status = 0;//����״̬��ȡ0������ȡ1�·ݲ���ȷ��ȡ2�ղ���ȷ
//	int num = 0;//�����ļ���
//	int leap = 0;//�Ƿ����꣬��ȡ1����ȡ0
//	int normal_month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	int leap_month[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
//	printf("�������꣬�£���\n");
//	int ret = scanf("%d%d%d", &y, &m, &d);
//	num += d;
//	leap = ((y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)) ? 1 : 0);
//	if (m <= 0 || m > 12)
//	{
//		status = 1;
//
//	}
//	else if (leap == 0)
//	{
//		if (d > normal_month[(m - 1)] || d < 1)
//		{
//			status = 2;
//		}
//	}
//	else
//	{
//		if (d > leap_month[(m - 1)] || d < 1)
//		{
//			status = 2;
//		}
//	}
//
//	if (status == 0)
//	{
//		for (int i = 0; i < m - 1; i++)
//		{
//			if (leap == 0)
//			{
//				num += normal_month[i];
//			}
//			else
//			{
//				num += leap_month[i];
//			}
//		}
//		printf("%d-%d-%d��%d��ĵ�%d��\n", y, m, d, y, num);
//	}
//	else if (status == 1)
//	{
//		printf("�������-�·ݲ���ȷ\n");
//	}
//	else if (status == 2)
//	{
//		printf("�������-�����µĹ�ϵ�Ƿ�\n");
//	}
//	return 0;
//}
