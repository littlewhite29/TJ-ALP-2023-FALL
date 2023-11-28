///* 2051891 黄治东 信管 */
//#include <iostream>
//#include <iomanip>
//#include <cstdio>
//#include <conio.h>
//#include <windows.h>
//#include "5-b7.h"
//#define Delay_millseconds 150
//using namespace std;
//
//
////使用全局变量记录栈顶指针
////int top[3] = { 0,0,0 };
//int top_a = 0, top_b = 0, top_c = 0;
////使用全局数组模拟栈
////int stack[3][10];
//int a[10], b[10], c[10];
////使用全局变量记录步骤数
//int step = 0;
//
////延时
//static int delay = 0;
////是否显示内部数组
//static int display_inner_array = 0;
//
////显示内部数组
//void print_hanoi()
//{
//	//cct_gotoxy(18, 25);
//	//int temp;
//	char name = 'A';
//	cout << setw(2) << name++ << ":";
//	for (int j = 0; j < 10; j++)
//	{
//		if (j < top_a)
//		{
//			cout << setw(2) << a[j];
//		}
//		else
//		{
//			cout << setw(2) << "";
//		}
//	}
//	cout << setw(2) << name++ << ":";
//	for (int j = 0; j < 10; j++)
//	{
//		if (j < top_b)
//		{
//			cout << setw(2) << b[j];
//		}
//		else
//		{
//			cout << setw(2) << "";
//		}
//	}
//	cout << setw(2) << name++ << ":";
//	for (int j = 0; j < 10; j++)
//	{
//		if (j < top_c)
//		{
//			cout << setw(2) << c[j];
//		}
//		else
//		{
//			cout << setw(2) << "";
//		}
//	}
//	cout << endl;
//
//}
////控制延时
//void delay_control()
//{
//	int temp;
//	if (delay == 0)
//	{
//		while ((temp = _getch()) != 13)
//		{
//			;
//		}
//	}
//	else
//	{
//		Sleep(Delay_millseconds * (5 - delay));
//	}
//
//}
//
///*用于转移盘子的函数*/
////void transfer_hanoi(char src, char dst)
////{
////	int temp;
////	if (delay == 0)
////	{
////		while ((temp = _getch()) != 13)
////		{
////			;
////		}
////	}
////	else
////	{
////		Sleep(Delay_millseconds * delay);
////	}
////	//存储转移的转盘
////	int tpl = 0;
////	//存储指针
////	int top_in=0,top_out=0;
////	switch (src)
////	{
////		case 'A':
////			tpl= a[--top_a];
////			a[top_a] = 0;
////			tpl = top_a;
////			break;
////		case 'B':
////			tpl = b[--top_b];
////			b[top_b] = 0;
////			top_out = top_b;
////			break;
////		case 'C':
////			tpl = c[--top_c];
////			c[top_c] = 0;
////			top_out = top_c;
////			break;
////		default:
////			break;
////	}
////	switch (dst)
////	{
////		case 'A':
////			a[top_a++] = tpl;
////			top_in = top_a;
////			break;
////		case 'B':
////			b[top_b++] = tpl;
////			top_in = top_b;
////			break;
////		case 'C':
////			c[top_c++] = tpl;
////			top_in = top_c;
////			break;
////		default:
////			break;
////	}
////	cct_gotoxy((src - 'A') * 10 + 12, 19 - top_out);
////	cout << ' ';
////	cct_gotoxy((dst - 'A') * 10 + 12, 20 - top_in);
////	cout << tpl;
////}
///*初始化函数*/
//void init_hanoi(char src, int n)
//{
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
//}
//
//
//
//void hanoi(int n, char src, char tmp, char dst)
//{
//	//首先判断是否为1
//	if (n == 1)
//	{
//		//处理进出栈
//		//存储转移的转盘
//		int tpl = 0;
//		//存储指针
//		int top_in = 0, top_out = 0;
//		switch (src)
//		{
//			case 'A':
//				tpl = a[--top_a];
//				a[top_a] = 0;
//				top_out = top_a;
//				break;
//			case 'B':
//				tpl = b[--top_b];
//				b[top_b] = 0;
//				top_out = top_b;
//				break;
//			case 'C':
//				tpl = c[--top_c];
//				c[top_c] = 0;
//				top_out = top_c;
//				break;
//			default:
//				break;
//		}
//		switch (dst)
//		{
//			case 'A':
//				a[top_a++] = tpl;
//				top_in = top_a;
//				break;
//			case 'B':
//				b[top_b++] = tpl;
//				top_in = top_b;
//				break;
//			case 'C':
//				c[top_c++] = tpl;
//				top_in = top_c;
//				break;
//			default:
//				break;
//		}
//		//固定光标位置
//		step++;
//		cct_gotoxy(18, 25);
//		cout << "第" << setw(4) << step << "步";
//		cout << "(" << n << "#: " << src << "-->" << dst << ") ";
//		//打印栈
//		if (display_inner_array)
//		{
//			print_hanoi();
//			delay_control();
//		}
//		cct_gotoxy((src - 'A') * 10 + 12, 19 - top_out);
//		cout << ' ';
//		cct_gotoxy((dst - 'A') * 10 + 12, 20 - top_in);
//		cout << tpl;
//		delay_control();
//	}
//	else
//	{
//		//若不为1将问题分治为n-1个盘从当前柱移动到中间柱
//		hanoi(n - 1, src, dst, tmp);
//		//然后将剩余一个盘移动到结束
//		//处理进出栈
//		//存储转移的转盘
//		int tpl = 0;
//		//存储指针
//		int top_in = 0, top_out = 0;
//		switch (src)
//		{
//			case 'A':
//				tpl = a[--top_a];
//				a[top_a] = 0;
//				top_out = top_a;
//				break;
//			case 'B':
//				tpl = b[--top_b];
//				b[top_b] = 0;
//				top_out = top_b;
//				break;
//			case 'C':
//				tpl = c[--top_c];
//				c[top_c] = 0;
//				top_out = top_c;
//				break;
//			default:
//				break;
//		}
//		switch (dst)
//		{
//			case 'A':
//				a[top_a++] = tpl;
//				top_in = top_a;
//				break;
//			case 'B':
//				b[top_b++] = tpl;
//				top_in = top_b;
//				break;
//			case 'C':
//				c[top_c++] = tpl;
//				top_in = top_c;
//				break;
//			default:
//				break;
//		}
//
//		//固定光标位置
//		step++;
//		cct_gotoxy(18, 25);
//		cout << "第" << setw(4) << step << "步";
//		cout << "(" << n << "#: " << src << "-->" << dst << ") ";
//		//打印栈
//		if (display_inner_array)
//		{
//			print_hanoi();
//			delay_control();
//		}
//
//		cct_gotoxy((src - 'A') * 10 + 12, 19 - top_out);
//		cout << ' ';
//		cct_gotoxy((dst - 'A') * 10 + 12, 20 - top_in);
//		cout << tpl;
//
//		delay_control();
//		//最后再将n-1个盘从中间柱移动到结束柱
//		hanoi(n - 1, tmp, src, dst);
//	}
//}
//
//int clear_buffer()
//{
//	static int temp;
//	while ((temp = getchar()) != '\n')
//	{
//		;
//	}
//	return temp;
//}
//
//
//
///***************************************************************************
//  函数名称：
//  功    能：
//  输入参数：
//  返 回 值：
//  说    明：
//***************************************************************************/
//int main()
//{
//	int n;//层数
//	char src;//起始柱
//	char dst;//目标柱
//	char tmp;//中间柱
//	int temp;//清除缓冲区的工具变量
//	while (true)
//	{
//		cout << "请输入汉诺塔的层数(1-10)\n";
//		cin >> n;
//		if (n >= 1 && n <= 10)
//		{
//			break;
//		}
//		//无论输入是否正确都清空缓冲区
//		cin.clear();
//		temp = clear_buffer();
//
//	}
//	//无论输入是否正确都清空缓冲区
//	temp = clear_buffer();
//	while (true)
//	{
//		cout << "请输入起始柱(A-C)\n";
//		if ((src = getchar()) >= 'A' && src <= 'C')
//		{
//			break;
//		}
//		else if (src >= 'a' && src <= 'c')
//		{
//			src -= 32;
//			break;
//		}
//
//		//无论输入是否正确都清空缓冲区
//		temp = clear_buffer();
//	}
//	//无论输入是否正确都清空缓冲区
//	temp = clear_buffer();
//	while (true)
//	{
//		cout << "请输入目标柱(A-C)\n";
//		if ((dst = getchar()) == src || (dst == src + 32 && (dst -= 32)))
//		{
//			cout << "目标柱(" << dst << ")不能与起始柱(" << src << ")相同\n";
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
//		temp = clear_buffer();
//
//	}
//	while (true)
//	{
//		cout << "请输入移动速度(0-5: 0-按回车单步演示 1-延时最长 5-延时最短)\n";
//		cin >> delay;
//		if (delay >= 0 && n <= 5)
//		{
//			break;
//		}
//		//无论输入是否正确都清空缓冲区
//		cin.clear();
//		temp = clear_buffer();
//	}
//	while (true)
//	{
//		cout << "请输入是否显示内部数组值(0-不显示 1-显示)\n";
//		cin >> display_inner_array;
//		if (display_inner_array == 0 || display_inner_array == 1)
//		{
//			break;
//		}
//		//无论输入是否正确都清空缓冲区
//		cin.clear();
//		temp = clear_buffer();
//	}
//	//初始化栈
//	init_hanoi(src, n);
//	//清屏,打印初始值
//	cct_cls();
//	cout << "从 " << src << " 移动到 " << dst << "，共 " << n << " 层，延时设置为 " << delay << "，" << (display_inner_array ? "" : "不") << "显示内部数组值";
//
//
//	//打印初始栈
//	cct_gotoxy(18, 25);
//	cout << "初始:" << setw(15) << "";
//	if (display_inner_array)
//	{
//		print_hanoi();
//	}
//	//延时
//	delay_control();
//	cct_gotoxy(10, 20);
//	cout << setfill('=') << setw(25) << "" << setfill(' ');
//	cct_gotoxy(3, 21);
//	//字母A坐标12，21，B坐标22，21，C坐标32，21
//	for (int i = 0; i < 3; i++)
//	{
//		cout << setw(10) << (char)('A' + i);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cct_gotoxy((src - 'A') * 10 + 12, 19 - i);
//		cout << n - i;
//	}
//	delay_control();
//	//开始转移
//	hanoi(n, src, tmp, dst);
//
//	cct_gotoxy(18, 31);
//	system("pause"); //最后用这句表示暂停（注意：只适合于特定程序，无特别声明的程序加此句则得分为0）
//	return 0;
//}
