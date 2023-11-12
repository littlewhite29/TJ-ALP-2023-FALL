////2051891 信管 黄治东
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	int y, m, d;
//	int status = 0;//输入状态，取0正常，取1月份不正确，取2日不正确
//	int num = 0;//天数的计算
//	int leap = 0;//是否闰年，是取1，否取0
//	int normal_month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	int leap_month[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
//	printf("请输入年，月，日\n");
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
//		printf("%d-%d-%d是%d年的第%d天\n", y, m, d, y, num);
//	}
//	else if (status == 1)
//	{
//		printf("输入错误-月份不正确\n");
//	}
//	else if (status == 2)
//	{
//		printf("输入错误-日与月的关系非法\n");
//	}
//	return 0;
//}
