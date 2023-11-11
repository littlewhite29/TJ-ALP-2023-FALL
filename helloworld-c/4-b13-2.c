///* 2051891 黄治东 信管 */
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
///* ----具体要求----
//   1、不允许添加其它头文件
//   2、允许定义一个全局变量、不允许定义静态局部变量
//   3、不允许添加其它函数
//   4、main函数处理输入，允许循环
//   --------------------------------------------------------------------- */
//
//
//   /***************************************************************************
//	 函数名称：
//	 功    能：打印n层汉诺塔的移动顺序
//	 输入参数：int n：层数
//			   char src：起始柱
//			   char tmp：中间柱
//			   char dst：目标柱
//	 返 回 值：
//	 说    明：1、函数名、形参、返回类型均不准动
//			   2、本函数不允许出现任何形式的循环
//   ***************************************************************************/
//   //使用全局变量记录栈顶指针
//int top_a = 0, top_b = 0, top_c = 0;
////使用全局数组模拟栈
//int a[10], b[10], c[10];
////使用全局变量记录步骤数
//int step = 0;
//void hanoi(int n, char src, char tmp, char dst)
//{
//	//存储转移的转盘
//	int temp = 0;
//	//首先判断是否为1
//	if (n == 1)
//	{
//		step++;
//		printf("第%4d 步", step);
//		printf("(%2d): %c-->%c", n, src, dst);
//		//处理进出栈
//		switch (src)
//		{
//			case 'A':
//				temp = a[--top_a];
//				a[top_a] = 0;
//				break;
//			case 'B':
//				temp = b[--top_b];
//				b[top_b] = 0;
//				break;
//			case 'C':
//				temp = c[--top_c];
//				c[top_c] = 0;
//				break;
//			default:
//				break;
//		}
//		switch (dst)
//		{
//			case 'A':
//				a[top_a++] = temp;
//				break;
//			case 'B':
//				b[top_b++] = temp;
//				break;
//			case 'C':
//				c[top_c++] = temp;
//				break;
//			default:
//				break;
//		}
//		//打印栈
//		printf(" A:");
//		for (int i = 0; i < 10; i++)
//		{
//			if (i < top_a)
//			{
//				printf("%2d", a[i]);
//			}
//			else
//			{
//				printf("  ");
//			}
//		}
//		printf(" B:");
//		for (int j = 0; j < 10; j++)
//		{
//			if (j < top_b)
//			{
//				printf("%2d", b[j]);
//			}
//			else
//			{
//				printf("  ");
//			}
//		}
//		printf(" C:");
//		for (int k = 0; k < 10; k++)
//		{
//			if (k < top_c)
//			{
//				printf("%2d", c[k]);
//			}
//			else
//			{
//				printf("  ");
//			}
//		}
//		printf("\n");
//	}
//	else
//	{
//		//若不为1将问题分治为n-1个盘从当前柱移动到中间柱
//		hanoi(n - 1, src, dst, tmp);
//		//然后将剩余一个盘移动到结束柱
//		step++;
//		printf("第%4d 步", step);
//		printf("(%2d): %c-->%c", n, src, dst);
//		//处理进出栈
//		switch (src)
//		{
//			case 'A':
//				temp = a[--top_a];
//				a[top_a] = 0;
//				break;
//			case 'B':
//				temp = b[--top_b];
//				b[top_b] = 0;
//				break;
//			case 'C':
//				temp = c[--top_c];
//				c[top_c] = 0;
//				break;
//			default:
//				break;
//		}
//		switch (dst)
//		{
//			case 'A':
//				a[top_a++] = temp;
//				break;
//			case 'B':
//				b[top_b++] = temp;
//				break;
//			case 'C':
//				c[top_c++] = temp;
//				break;
//			default:
//				break;
//		}
//		//打印栈
//		printf(" A:");
//		for (int i = 0; i < 10; i++)
//		{
//			if (i < top_a)
//			{
//				printf("%2d", a[i]);
//			}
//			else
//			{
//				printf("  ");
//			}
//		}
//		printf(" B:");
//		for (int j = 0; j < 10; j++)
//		{
//			if (j < top_b)
//			{
//				printf("%2d", b[j]);
//			}
//			else
//			{
//				printf("  ");
//			}
//		}
//		printf(" C:");
//		for (int k = 0; k < 10; k++)
//		{
//			if (k < top_c)
//			{
//				printf("%2d", c[k]);
//			}
//			else
//			{
//				printf("  ");
//			}
//		}
//		printf("\n");
//		//最后再将n-1个盘从中间柱移动到结束柱
//		hanoi(n - 1, tmp, src, dst);
//	}
//}
//
///***************************************************************************
//  函数名称：
//  功    能：
//  输入参数：
//  返 回 值：
//  说    明：1、完成输入、调用递归函数
//			2、处理输入错误时，允许使用循环
//			3、为了统一检查，不再允许添加其它函数（输入起始/目标柱的代码不要求统一函数处理，均直接放在main中）
//***************************************************************************/
//int main()
//{
//	int n;//层数
//	char src;//起始柱
//	char dst;//目标柱
//	char tmp;//中间柱
//	int temp;//清除缓冲区的工具变量
//	while (1)
//	{
//		printf("请输入汉诺塔的层数(1-10)\n");
//		temp = scanf("%d", &n);
//		if (n >= 1 && n <= 10)
//		{
//			break;
//		}
//		//无论输入是否正确都清空缓冲区
//		temp = scanf("%*[^\n]");
//		temp = scanf("%*c");
//	}
//	//无论输入是否正确都清空缓冲区
//	temp = scanf("%*[^\n]");
//	temp = scanf("%*c");
//	while (1)
//	{
//		printf("请输入起始柱(A-C)\n");
//		if ((src = getchar()) >= 'A' && src <= 'C')
//		{
//			break;
//		}
//		else if (src >= 'a' && src <= 'c')
//		{
//			src -= 32;
//			break;
//		}
//		printf("src=%c", src);
//		//无论输入是否正确都清空缓冲区
//		temp = scanf("%*[^\n]");
//		temp = scanf("%*c");
//	}
//	//无论输入是否正确都清空缓冲区
//	temp = scanf("%*[^\n]");
//	temp = scanf("%*c");
//	while (1)
//	{
//		printf("请输入目标柱(A-C)\n");
//		if ((dst = getchar()) == src || (dst == src + 32 && (dst -= 32)))
//		{
//			printf("目标柱(%c)不能与起始柱(%c)相同\n", dst, src);
//		}
//		else if (dst >= 'A' && dst <= 'C')
//		{
//			tmp = 'A' + 'B' + 'C' - dst - src;
//			break;
//		}
//		else if ((dst = dst - 32) >= 'A' && dst <= 'C')
//		{
//			tmp = 'A' + 'B' + 'C' - dst - src;
//			break;
//		}
//
//		//无论输入是否正确都清空缓冲区
//		temp = scanf("%*[^\n]");
//		temp = scanf("%*c");
//
//	}
//	//初始化栈
//	switch (src)
//	{
//		case 'A':
//			for (int i = 0; i < n; i++)
//			{
//				a[i] = n - i;
//			}
//			top_a = n;
//			break;
//		case 'B':
//			for (int i = 0; i < n; i++)
//			{
//				b[i] = n - i;
//			}
//			top_b = n;
//			break;
//		case 'C':
//			for (int i = 0; i < n; i++)
//			{
//				c[i] = n - i;
//			}
//			top_c = n;
//			break;
//		default:
//			break;
//	}
//	//打印初始栈
//	printf("初始:               ");
//	printf(" A:");
//	for (int i = 0; i < 10; i++)
//	{
//		if (i < top_a)
//		{
//			printf("%2d", a[i]);
//		}
//		else
//		{
//			printf("  ");
//		}
//	}
//	printf(" B:");
//	for (int j = 0; j < 10; j++)
//	{
//		if (j < top_b)
//		{
//			printf("%2d", b[j]);
//		}
//		else
//		{
//			printf("  ");
//		}
//	}
//	printf(" C:");
//	for (int k = 0; k < 10; k++)
//	{
//		if (k < top_c)
//		{
//			printf("%2d", c[k]);
//		}
//		else
//		{
//			printf("  ");
//		}
//	}
//	printf("\n");
//	//开始转移
//	hanoi(n, src, tmp, dst);
//
//}
