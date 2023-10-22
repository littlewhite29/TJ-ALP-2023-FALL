//2051891 �Ź� ���ζ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int zeller(int c, int y, int m, int d)
{
	int w = 0;
	w = y + y / 4 + c / 4 - 2 * c + (13 * (m + 1) / 5) + d - 1;
	for (; w < 0 || w>7;)
	{
		w = (w + 7) % 7;
	}
	return w;
}

void printWeekDay(int w)
{
	switch (w)
	{
		case 0:
			printf("������");
			break;
		case 1:
			printf("����һ");
			break;
		case 2:
			printf("���ڶ�");
			break;
		case 3:
			printf("������");
			break;
		case 4:
			printf("������");
			break;
		case 5:
			printf("������");
			break;
		case 6:
			printf("������");
			break;
		default:
			printf("error");
			break;
	}
	printf("\n");
}
int main()
{
	int y, m, d;
	int num, leap;
	while (1)
	{
		printf("��������[1900-2100]���¡��գ�\n");
		int ret = scanf("%d%d%d", &y, &m, &d);
		leap = ((y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)) ? 1 : 0);

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
		if (ret == 0)
		{
			printf("�����������������\n");
			scanf("%*[^\n]");
			continue;
		}
		else if (y < 1900 || y>2100)
		{
			printf("��ݲ���ȷ������������\n");
		}
		else if (m < 1 || m>12)
		{
			printf("�·ݲ���ȷ������������\n");
		}
		else if (d<1 || d>num)
		{
			printf("�ղ���ȷ������������\n");
		}
		else {
			if (m < 3)
			{
				m += 12;
				y -= 1;
			}
			break;
		}
	}
	printWeekDay(zeller(y / 100, y - y / 100 * 100, m, d));
	return 0;
}
