/* 信管 2051891 黄治东 */
#include <iostream>
#include <iomanip>
#include "cmd_console_tools.h"
#include "hanoi.h"
#include <conio.h>
#include <Windows.h>
#define Delay_millseconds 150
using namespace std;




/* ----------------------------------------------------------------------------------

	 本文件功能：
	1、存放被 hanoi_main.cpp 中根据菜单返回值调用的各菜单项对应的执行函数

	 本文件要求：
	1、不允许定义外部全局变量（const及#define不在限制范围内）
	2、允许定义静态全局变量（具体需要的数量不要超过文档显示，全局变量的使用准则是：少用、慎用、能不用尽量不用）
	3、静态局部变量的数量不限制，但使用准则也是：少用、慎用、能不用尽量不用
	4、按需加入系统头文件、自定义头文件、命名空间等

   ----------------------------------------------------------------------------------- */


   /***************************************************************************
	 函数名称：
	 功    能：
	 输入参数：
	 返 回 值：
	 说    明：
   ***************************************************************************/
   //使用全局变量记录栈顶指针
int top[3] = { 0,0,0 };
//使用全局数组模拟栈
int stack[3][10];
//使用全局变量记录步骤数
int step = 0;
//延时
int delay = 0;
//显示内部数组
void print_hanoi(int type)
{
	if (type == 1)
	{
		return;
	}
	//cct_gotoxy(18, 25);
	//int temp;
	for (int i = 0; i < 3; i++)
	{
		char name = 'A' + i;
		cout << setw(2) << name << ":";
		for (int j = 0; j < 10; j++)
		{
			if (j < top[i])
			{
				cout << setw(2) << stack[i][j];
			}
			else
			{
				cout << setw(2) << "";
			}
		}
	}
	cout << endl;
	if (type == 4 || type == 8)
	{
		delay_control(type);
	}
}
//打印文字版的步骤
void print_step(int n, char src, char dst, int type)
{
	if (type == 4 || type == 8 || type == 9)
	{
		int base_y = -8;
		if (type == 8 || type == 9)
		{
			base_y = 10;
		}
		cct_gotoxy(0, 25 + base_y);
	}
	if (type != 1)
	{
		cout << "第" << setw(4) << step << " 步" << "(" << setw(2) << n << "#: " << src << "-->" << dst << ")";
	}
	else
	{
		cout << n << "# " << src << "---->" << dst << endl;
	}
}
//打印柱子
void print_pillar()
{
	cct_setcolor(COLOR_HYELLOW, COLOR_WHITE);
	for (int i = 0; i < 3; i++)
	{
		cct_gotoxy(1 + 30 * i, 15);
		//打印底边
		for (int j = 0; j < 23; j++)
		{
			cout << ' ';
			Sleep(10);
		}
		//打印柱子
		for (int j = 0; j < 12; j++)
		{
			cct_gotoxy(12 + 30 * i, 14 - j);
			cout << ' ';
			Sleep(10);
		}
	}
	//恢复状态
	cct_setcolor(COLOR_BLACK, COLOR_WHITE);
}
//移动圆盘
void move_plate(char src, char dst, int type)
{
	int plate;
	int src_value;
	int dst_value;
	if (type < 7)
	{
		return;
	}
	else
	{
		src_value = src - 'A';
		dst_value = dst - 'A';
		//因为已经移动了盘子之后才开始本函数，从目标柱找移动的盘子
		plate = stack[dst_value][top[dst_value] - 1];
		//从源柱往上移动
		for (int y = 13 - top[src_value]; y >= 1; y--)
		{
			//清空上一步的盘子
			cct_showch(12 - plate + 30 * src_value, y + 1, ' ', COLOR_BLACK, COLOR_WHITE, 2 * plate + 1);
			//打印柱子
			if (y > 1)
			{
				cct_showch(12 + 30 * src_value, y + 1, ' ', COLOR_HYELLOW, COLOR_WHITE, 1);
			}
			//打印盘子的当前位置
			cct_showch(12 - plate + 30 * src_value, y, ' ', plate, COLOR_WHITE, 2 * plate + 1);
			Sleep(20);
		}
		//平移
		int count = dst_value > src_value ? 1 : -1;
		for (int i = 12 + 30 * src_value; i != 12 + 30 * dst_value; i += count)
		{
			//清空上一步的盘子
			cct_showch(i - plate, 1, ' ', COLOR_BLACK, COLOR_WHITE, 2 * plate + 1);
			//打印盘子的当前位置
			cct_showch(i - plate + count, 1, ' ', plate, COLOR_WHITE, 2 * plate + 1);
			Sleep(20);
		}
		//从上往目标柱底移动
		for (int y = 1; y < 15 - top[dst_value]; y++)
		{
			//清空上一步的盘子
			cct_showch(12 - plate + 30 * dst_value, y, ' ', COLOR_BLACK, COLOR_WHITE, 2 * plate + 1);
			//打印柱子
			if (y > 2)
			{
				cct_showch(12 + 30 * dst_value, y, ' ', COLOR_HYELLOW, COLOR_WHITE, 1);
			}
			//打印盘子的当前位置
			cct_showch(12 - plate + 30 * dst_value, y + 1, ' ', plate, COLOR_WHITE, 2 * plate + 1);
			Sleep(20);
		}
	}
	//恢复状态
	cct_setcolor(COLOR_BLACK, COLOR_WHITE);
}
//控制延时
void delay_control(int type)
{
	if (type != 4 && type != 8)
	{
		return;
	}
	int temp;
	if (delay == 0)
	{
		while ((temp = _getch()) != 13)
		{
			;
		}
	}
	else
	{
		Sleep(Delay_millseconds * (5 - delay));
	}

}
/*用于转移盘子的函数,文字打印圆盘时顺便移动栈顶*/
void transfer_hanoi(char src, char dst, int type)
{
	//y轴基准坐标
	int base_y = -8;
	if (type == 8 || type == 9)
	{
		base_y = 10;
	}
	//存储转移的转盘
	int temp = 0;
	int source = src - 'A';
	int destination = dst - 'A';
	temp = stack[source][--top[source]];
	stack[destination][top[destination]++] = temp;
	if (type == 4 || type == 8 || type == 9)
	{
		cct_gotoxy((src - 'A') * 10 + 9, 19 + base_y - top[source]);
		cout << "  ";
		cct_gotoxy((dst - 'A') * 10 + 9, 20 + base_y - top[destination]);
		cout << temp;
	}
}
/*初始化函数*/
void init_hanoi(char src, char dst, int n, int type)
{
	int source = src - 'A';
	for (int i = 0; i < n; i++)
	{
		stack[source][i] = n - i;
	}
	top[source] = n;

	if (type > 3)
	{
		cct_cls();
	}

	if (type == 4 || type == 8 || type == 9)
	{
		if (type != 9)
		{
			cout << "从 " << src << " 移动到 " << dst << "，共 " << n << " 层，延时设置为 " << delay << endl;
		}
		else
		{
			cout << "从 " << src << " 移动到 " << dst << "，共 " << n << " 层";
		}
		//打印初始栈
		int base_y = -8;
		// 这里需要一个获取当前光标位置的函数(?)
		// 根据种类不同设置文字打印的基本位置
		if (type == 8 || type == 9)
		{
			base_y = 10;
			print_pillar();
			for (int i = 0; i < n; i++)
			{
				cct_showch(12 - stack[src - 'A'][i] + 30 * (src - 'A'), 14 - i, ' ', stack[src - 'A'][i], COLOR_WHITE, 2 * stack[src - 'A'][i] + 1);
				Sleep(10);
			}
			//恢复状态
			cct_setcolor(COLOR_BLACK, COLOR_WHITE);
		}
		cct_gotoxy(0, 25 + base_y);
		cout << "初始: ";
		print_hanoi(type);
		cct_gotoxy(7, 20 + base_y);
		cout << setfill('=') << setw(25) << "" << setfill(' ');
		cct_gotoxy(0, 21 + base_y);
		for (int i = 0; i < 3; i++)
		{
			cout << setw(10) << (char)('A' + i);
		}
		for (int i = 0; i < n; i++)
		{
			cct_gotoxy((src - 'A') * 10 + 9, 19 - i + base_y);
			cout << n - i;
		}
		delay_control(type);
	}
}
//结束清空函数
void end_hanoi()
{
	for (int i = 0; i < 3; i++)
	{
		top[i] = 0;
		for (int j = 0; j < 10; j++)
		{
			stack[i][j] = 0;
		}
		step = 0;
	}
}
//主函数
void hanoi(int n, char src, char tmp, char dst, int type)
{
	if (n == 0)
		return;
	hanoi(n - 1, src, dst, tmp, type);//若不为0将问题分治为n-1个盘从当前柱移动到中间柱
	step++;//然后将剩余一个盘移动到结束柱
	transfer_hanoi(src, dst, type);	//处理进出栈
	print_step(n, src, dst, type);	//打印文字
	print_hanoi(type);	//打印栈
	move_plate(src, dst, type);	//图形化移动盘子
	hanoi(n - 1, tmp, src, dst, type);	//最后再将n-1个盘从中间柱移动到结束柱
}
//游戏函数
void hanoi_game(int n, char destination)
{
	cct_gotoxy(0, 36);
	clear_buffer();
	cout << "请输入移动的柱号(命令形式：AC=A顶端的盘子移动到C，Q=退出) ";
	char src, dst;
	while (true)
	{

		cct_gotoxy(58, 36);
		cout << "                                                ";
		cct_gotoxy(58, 36);
		//char temp;
		src = _getch();
		cout << src;
		dst = _getch();
		cout << dst;
		/*if (temp=getchar()!= '\n')
		{
			clear_buffer();
			continue;
		}*/
		//判断输入合法性
		if (src > 'Z')
		{
			src -= 'a' - 'A';
		}
		if (src == 'Q')
		{
			cct_gotoxy(0, 37);
			cout << "游戏中止!";
			return;
		}
		if (src < 'A' || src>'C')
		{
			continue;
		}

		if (dst > 'Z')
		{
			dst -= 'a' - 'A';
		}
		if (dst < 'A' || dst>'C')
		{
			continue;
		}
		else if (src == dst)
		{
			continue;
		}
		//判断操作合法性
		int src_value = src - 'A';
		int dst_value = dst - 'A';
		if (top[src_value] == 0)
		{
			cct_gotoxy(0, 37);
			cout << "源柱为空！";
			Sleep(500);
			cct_gotoxy(1, 37);
			cout << "                                   ";
			continue;
		}
		else if (top[dst_value] != 0 && stack[src_value][top[src_value] - 1] > stack[dst_value][top[dst_value] - 1])
		{
			cct_gotoxy(0, 37);
			cout << "大盘压小盘，非法移动！";
			Sleep(500);
			cct_gotoxy(0, 37);
			cout << "                                   ";
			continue;
		}

		step++;
		//处理进出栈
		transfer_hanoi(src, dst, 9);
		//打印文字
		print_step(n, src, dst, 9);
		//打印栈
		print_hanoi(9);
		//图形化移动盘子
		move_plate(src, dst, 9);
		if (top[destination - 'A'] == n)
		{
			cct_gotoxy(1, 37);
			cout << "游戏结束！！！！\n";
			return;
		}
	}
}
//接收参数函数
void hanoi_parameter(int type)
{
	int n;//层数
	char src;//起始柱
	char dst;//目标柱
	char tmp;//中间柱
	int temp;//清除缓冲区的工具变量
	while (true)
	{
		cout << "请输入汉诺塔的层数(1-10)\n";
		cin >> n;
		if (n >= 1 && n <= 10)
		{
			break;
		}
		//无论输入是否正确都清空缓冲区
		cin.clear();
		temp = clear_buffer();

	}
	//无论输入是否正确都清空缓冲区
	temp = clear_buffer();
	while (true)
	{
		cout << "请输入起始柱(A-C)\n";
		if ((src = getchar()) >= 'A' && src <= 'C')
		{
			break;
		}
		else if (src >= 'a' && src <= 'c')
		{
			src -= 32;
			break;
		}

		//无论输入是否正确都清空缓冲区
		temp = clear_buffer();
	}
	//无论输入是否正确都清空缓冲区
	temp = clear_buffer();
	while (true)
	{
		cout << "请输入目标柱(A-C)\n";
		if ((dst = getchar()) == src || (dst == src + 32 && (dst -= 32)))
		{
			cout << "目标柱(" << dst << ")不能与起始柱(" << src << ")相同\n";
		}
		else if (dst >= 'A' && dst <= 'C')
		{
			tmp = 'A' + 'B' + 'C' - dst - src;
			break;
		}
		else if ((dst = dst - 32) >= 'A' && dst <= 'C')
		{
			tmp = 'A' + 'B' + 'C' - dst - src;
			break;
		}

		//无论输入是否正确都清空缓冲区
		temp = clear_buffer();

	}
	if (type == 4 || type == 8)
	{
		while (true)
		{
			cout << "请输入移动速度(0-5: 0-按回车单步演示 1-延时最长 5-延时最短)\n";
			cin >> delay;
			if (delay >= 0 && delay <= 5)
			{
				break;
			}
			//无论输入是否正确都清空缓冲区
			cin.clear();
			temp = clear_buffer();
		}
	}
	//初始化栈
	init_hanoi(src, dst, n, type);

	if (type == 6)
	{
		print_pillar();
		int src_value = src - 'A';
		for (int i = 0; i < n; i++)
		{
			cct_showch(12 - stack[src_value][i] + 30 * src_value, 14 - i, ' ', stack[src_value][i], COLOR_WHITE, 2 * stack[src_value][i] + 1);
			Sleep(10);
		}
		//恢复状态
		cct_setcolor(COLOR_BLACK, COLOR_WHITE);
	}
	else if (type == 7)
	{
		cout << "从 " << src << " 移动到 " << dst << "，共 " << n << " 层";
		print_pillar();
		transfer_hanoi(src, dst, type);
		int src_value = src - 'A';
		for (int i = 0; i < n; i++)
		{
			cct_showch(12 - stack[src_value][i] + 30 * src_value, 14 - i, ' ', stack[src_value][i], COLOR_WHITE, 2 * stack[src_value][i] + 1);
			Sleep(10);
		}
		move_plate(src, dst, type);
		cct_gotoxy(1, 37);
	}
	else if (type == 9)
	{
		hanoi_game(n, dst);
	}
	else
	{
		//开始转移
		hanoi(n, src, tmp, dst, type);
	}

	//cct_gotoxy(18, 31);
}
//清空缓冲区
int clear_buffer()
{
	static int temp;
	while ((temp = getchar()) != '\n')
	{
		;
	}
	return temp;
}