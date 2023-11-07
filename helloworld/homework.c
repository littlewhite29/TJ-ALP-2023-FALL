/* 信管 2051891 黄治东 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
/* ----具体要求----
   1、允许添加需要的头文件
   2、不允许定义全局变量、静态局部变量
   3、不允许添加其它函数
   ---------------------------------------------------------------------
*/

/***************************************************************************
  函数名称：
  功    能：求平方根的函数，返回为a的平方根
  输入参数：
  返 回 值：
  说    明：
 ***************************************************************************/
double my_sqrt(double a)
{
	double result = a;
	for (; fabs(result-(result + a / result) / 2) >= 1e-5; result = (result + a / result) / 2);
		return result;
}

/***************************************************************************
  函数名称：
  功    能：重复输入，直到取得double型非负数后返回
  输入参数：
  返 回 值：
  说    明：不准修改函数名、返回类型、形参
 ***************************************************************************/
double input()
{
	while (1)
	{
		printf("请输入a值\n");
		//int temp;
		double n;
		int ret = scanf("%lf", &n);
		return n;
		/*if (ret == 0)
		{
			while ((temp = getchar()) != '\n')
			{
				;
			}
			continue;
		}
		else 
		if (n >= 0)
		{
			return n;
		}*/
	}
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：只允许修改...部分
 ***************************************************************************/
int main()
{
	/* 键盘输入要求平方根的数 */
	double a = input();
	/* 调用求平方根的函数 */
	double d = my_sqrt(a);

	/* 此处输出平方根（语句不全，将后面补齐）*/
	printf("%.3lf的平方根=%.5lf\n", a, d);

	return 0;
}
