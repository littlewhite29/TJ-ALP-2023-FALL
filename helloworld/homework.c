//2051891 信管 黄治东
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
			printf("星期日");
			break;
		case 1:
			printf("星期一");
			break;
		case 2:
			printf("星期二");
			break;
		case 3:
			printf("星期三");
			break;
		case 4:
			printf("星期四");
			break;
		case 5:
			printf("星期五");
			break;
		case 6:
			printf("星期六");
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
		printf("请输入年[1900-2100]、月、日：\n");
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
			printf("输入错误，请重新输入\n");
			scanf("%*[^\n]");
			continue;
		}
		else if (y < 1900 || y>2100)
		{
			printf("年份不正确，请重新输入\n");
		}
		else if (m < 1 || m>12)
		{
			printf("月份不正确，请重新输入\n");
		}
		else if (d<1 || d>num)
		{
			printf("日不正确，请重新输入\n");
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
