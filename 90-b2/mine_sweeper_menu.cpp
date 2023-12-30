/* 信管 2051891 黄治东 */
#include <iostream>
#include <iomanip>
#include "cmd_console_tools.h"
#include "mine_sweeper.h"
#include <conio.h>

using namespace std;
int mine_sweeper_menu()
{
	while (true)
	{
		cct_cls();
		cct_setconsoleborder(100, 30);
		cct_setfontsize("新宋体", 24);
		cout << "------------------------------------\n";
		cout << "1.选择难度并显示内部数组\n";
		cout << "2.输入初始位置并显示被打开的初始区域\n";
		cout << "3.内部数组基础版\n";
		cout << "4.内部数组完整版（标记、运行时间）\n";
		cout << "5.画出伪图形化框架并显示内部数据\n";
		cout << "6.检测鼠标位置和合法性（左键单击退出）\n";
		cout << "7.鼠标选择初始位置并显示被打开的初始区域\n";
		cout << "8.伪图形界面基础版\n";
		cout << "9.伪图形界面完整版\n";
		cout << "0.退出游戏\n";
		cout << "------------------------------------\n";
		cout << "[请选择:] ";
		while (true)
		{
			char type = _getch();
			if (type >= '0' && type <= '9')
			{
				cout << type;
				if (type == '0')
				{
					for (int i = 0; i < 24; i++)
					{
						cout << endl;
					}
					return 0;
				}
				else
				{
					return((int)(type - '0'));
				}
			}
		}
	}
}