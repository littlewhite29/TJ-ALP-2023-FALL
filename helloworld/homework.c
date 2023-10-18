//2051891 信管 黄治东
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int y, m, d;
	int status = 0;//输入状态，取0正常，取1不正常
	int num = 0;//月份天数
	int leap = 0;//是否闰年，是取1，否取0
	printf("请输入年份(2000-2030)和月份(1-12) : ");
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
	//判断输入正确性
	if (status == 1)
	{
		printf("输入非法，请重新输入\n");
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
	
	//输入正确，开始打印
	return 0;
}
