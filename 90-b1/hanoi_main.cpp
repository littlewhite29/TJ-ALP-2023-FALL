/* 信管 2051891 黄治东 */
#include <iostream>
#include <iomanip>
#include "cmd_console_tools.h"
#include "hanoi.h"
#include <conio.h>
#include <Windows.h>

using namespace std;
/* ----------------------------------------------------------------------------------

	 本文件功能：
	1、放main函数
	2、初始化屏幕
	3、调用菜单函数（hanoi_menu.cpp中）并返回选项
	4、根据选项调用菜单各项对应的执行函数（hanoi_multiple_solutions.cpp中）

	 本文件要求：
	1、不允许定义全局变量（含外部全局和静态全局，const及#define不在限制范围内）
	2、静态局部变量的数量不限制，但使用准则也是：少用、慎用、能不用尽量不用
	3、按需加入系统头文件、自定义头文件、命名空间等

   ----------------------------------------------------------------------------------- */

   /***************************************************************************
	 函数名称：
	 功    能：
	 输入参数：
	 返 回 值：
	 说    明：
   ***************************************************************************/
int main()
{


	/* demo中首先执行此句，将cmd窗口设置为40行x120列（缓冲区宽度120列，行数9000行，即cmd窗口右侧带有垂直滚动杆）*/
	cct_setconsoleborder(120, 40, 120, 9000);
	int type;
	while(true)
	{

		type=hanoi_menu();
		if (type == 0)
		{
			for (int i = 0; i < 24; i++)
			{
				cout << endl;
			}
			break;
		}
		else if (type == 5)
		{
			cct_cls();
			print_pillar();
			cct_gotoxy(1, 37);
			cout << "按回车键继续";
			while (true)
			{
				char type = _getch();
				if (type == '\r')
				{
					break;
				}
			}
			//clear_buffer();
		}
		else
		{
			cout << "\n\n\n";
			hanoi_parameter(type);
			if (type == 8||type==9)
			{
				cct_gotoxy(1, 37);
			}
			cout << "\n按回车键继续";
			end_hanoi();
			while (true)
			{
				char type = _getch();
				if (type == '\r')
				{
					break;
				}
			}
		}
	}

	return 0;
}