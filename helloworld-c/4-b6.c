/////* 2051891 黄治东 信管 */
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
///* ----具体要求----
//   1、不允许添加其它头文件
//   2、不允许定义全局变量、静态局部变量
//   3、不允许添加其它函数
//   4、整个程序不允许出现任何形式的循环
//   --------------------------------------------------------------------- */
//
//   /***************************************************************************
//	 函数名称：
//	 功    能：返回n阶legendre多项式的值
//	 输入参数：
//	 返 回 值：
//	 说    明：函数名、形参、返回类型均不准动
//   ***************************************************************************/
//double legendre(double x, int n)
//{
//	if (n == 0)
//	{
//		return 1;
//	}
//	else if (n == 1)
//	{
//		return x;
//	}
//	else
//	{
//		return ((2 * n - 1) * x * legendre(x, n - 1) - (n - 1) * legendre(x, n - 2)) / n;
//	}
//}
//
///***************************************************************************
//  函数名称：
//  功    能：
//  输入参数：
//  返 回 值：
//  说    明：完成输入、调用递归函数、输出
//***************************************************************************/
//int main()
//{
//	int n;
//	double x;
//	printf("计算legendre，请输入x和n的值\n");
//	int ret = scanf("%lf%d", &x, &n);
//	if (ret != 0)
//	{
//		printf("legendre[%d](%lf)=%lf\n", n, x, legendre(x, n));
//	}
//}

