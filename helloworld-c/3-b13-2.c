////2051891 �Ź� ���ζ�
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//#include<stdbool.h>
//
//int main()
//{
//	int y, m, d;
//	int status;//����״̬��ȡ0������ȡ1������
//	int num = 0;//�·�����
//	int leap = 0;//�Ƿ����꣬��ȡ1����ȡ0
//	int ret;
//	while (true)
//	{
//		status = 0;
//		printf("���������(2000-2030)���·�(1-12) : ");
//		ret = scanf("%d%d", &y, &m);
//		leap = ((y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)) ? 1 : 0);
//		if (y < 2000 || y>2030)
//		{
//			status = 1;
//		}
//		if (m <= 0 || m > 12)
//		{
//			status = 1;
//		}
//		//�ж�������ȷ��
//		if (status == 1 || ret == 0)
//		{
//			printf("����Ƿ�������������\n");
//			scanf("%*[^\n]");
//		}
//		else
//		{
//			break;
//		}
//	}
//	while (true)
//	{
//		status = 0;
//		printf("������%d��%d��1�յ�����(0-6��ʾ������-������) : \n", y, m);
//		ret = scanf("%d", &d);
//		if (d < 0 || d>6)
//		{
//			status = 1;
//		}
//		//�ж�������ȷ��
//		if (status == 1 || ret == 0)
//		{
//			//printf("%d,%d\n",status, ret);
//			printf("����Ƿ�������������\n");
//			//rewind(stdin);
//			scanf("%*[^\n]");
//		}
//		else
//		{
//			break;
//		}
//	}
//	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
//	{
//		num = 31;
//	}
//	else if (m == 2)
//	{
//		num = 28 + leap;
//	}
//	else
//	{
//		num = 30;
//	}
//	//������ȷ����ʼ��ӡ
//	printf("%d��%d�µ�����Ϊ:\n", y, m);
//	printf("������  ����һ  ���ڶ�  ������  ������  ������  ������\n");
//	for (int i = 0; i < d; i++)
//	{
//		//�˸��ո�
//		printf("        ");
//	}
//	int current = 0;
//	while (true)
//	{
//		for (; d < 7; d++)
//		{
//			current++;
//			//��λ���������ּ����ĸ��ո�
//			printf("%4d    ", current);
//			if (current == num)
//				break;
//		}
//		d = 0;
//		if (current == num)
//		{
//			printf("\n");
//			break;
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//}
