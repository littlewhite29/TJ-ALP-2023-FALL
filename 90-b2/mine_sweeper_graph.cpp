/* 信管 2051891 黄治东 */

#include <iomanip>
#include <iostream>
#include "mine_sweeper.h"
#include "cmd_console_tools.h"
#include <conio.h>

using namespace std;

void display_graph_inner_map(inner_map map)
{
	cct_setfontsize("点阵字体", 16, 8);
	cct_setconsoleborder(map.col * 6 + 5, (map.row) * 3 + 8);
	cout << endl;
	cout << setiosflags(ios::left);
	cout << setw(4) << "";
	for (int i = 0; i < map.col; i++)
	{
		cout << ' ';
		cout << setw(5) << i;
	}
	cout << endl;
	cout << "  ";
	cct_setcolor(COLOR_HWHITE, COLOR_BLACK);
	cout << "╔";
	for (int i = 0; i < map.col; i++)
	{
		cout << "══";
		if (i != map.col - 1)
		{
			cout << "╦";
		}
		else
		{
			cout << "╗";
		}
	}
	cout << endl;
	for (int x = 0; x < map.row; x++)
	{
		cct_setcolor();
		cout << setw(2) << ' ';
		for (int y = 0; y < map.col; y++)
		{
			cct_setcolor(COLOR_HWHITE, COLOR_BLACK);
			cout << "║";
			cct_setcolor(COLOR_WHITE, COLOR_HBLACK);
			cout << setw(4) << "";
		}
		cct_setcolor(COLOR_HWHITE, COLOR_BLACK);
		cout << "║";
		cout << endl;
		cct_setcolor();
		cout << setw(2) << (char)('A' + x);
		for (int y = 0; y < map.col; y++)
		{
			cct_setcolor(COLOR_HWHITE, COLOR_BLACK);
			cout << "║";
			cct_setcolor(COLOR_WHITE, COLOR_HBLACK);
			if (map.map[x][y] > '0' && map.map[x][y] < '9')
			{
				cct_setcolor(COLOR_WHITE, (map.map[x][y] - '0'));
				cout << ' ';
				cout << setw(3) << map.map[x][y];
			}
			else if (map.map[x][y] == '*')
			{
				cct_setcolor(COLOR_WHITE, COLOR_BLACK);
				cout << ' ';
				cout << setw(3) << map.map[x][y];
			}
			else
			{
				cout << setw(4) << "";
			}
		}
		cct_setcolor(COLOR_HWHITE, COLOR_BLACK);
		cout << "║";
		cout << endl;
		cct_setcolor();
		cout << setw(2) << "";
		for (int y = 0; y < map.col; y++)
		{
			cct_setcolor(COLOR_HWHITE, COLOR_BLACK);
			if (y != 0)
			{
				if (x != map.row - 1)
				{
					cout << "╬";
				}
				else
				{
					cout << "╩";
				}
			}
			else if (x != map.row - 1)
			{
				cout << "╠";
			}
			else
			{
				cout << "╚";
			}
			cout << "══";
		}
		if (x != map.row - 1)
		{
			cout << "╣";
		}
		else
		{
			cout << "╝";
		}
		cout << endl;
	}
	cct_setcolor();
	cout << resetiosflags(ios::left);
}
void display_graph_play_map(inner_map map)
{
	cct_setfontsize("点阵字体", 16, 8);
	cct_setconsoleborder(map.col * 6 + 5, (map.row) * 3 + 8);
	cout << endl;
	cout << setiosflags(ios::left);
	cout << setw(4) << "";
	for (int i = 0; i < map.col; i++)
	{
		cout << ' ';
		cout << setw(5) << i;
	}
	cout << endl;
	cout << "  ";
	cct_setcolor(COLOR_HWHITE, COLOR_BLACK);
	cout << "╔";
	for (int i = 0; i < map.col; i++)
	{
		cout << "══";
		if (i != map.col - 1)
		{
			cout << "╦";
		}
		else
		{
			cout << "╗";
		}
	}
	cout << endl;
	for (int x = 0; x < map.row; x++)
	{
		cct_setcolor();
		cout << setw(2) << ' ';
		for (int y = 0; y < map.col; y++)
		{
			cct_setcolor(COLOR_HWHITE, COLOR_BLACK);
			cout << "║";
			if (map.play_map[x][y] == 'X')
			{
				cct_setcolor(COLOR_YELLOW, COLOR_BLACK);
				cout << setw(4) << ' ';
			}
			else  if (map.play_map[x][y] == '*' || map.play_map[x][y] == '!')
			{
				cct_setcolor(COLOR_RED, COLOR_BLACK);
				cout <<setw(4)<< ' ';
			}
			else
			{
				cct_setcolor(COLOR_WHITE, COLOR_HBLACK);
				cout << setw(4) << "";
			}
		}
		cct_setcolor(COLOR_HWHITE, COLOR_BLACK);
		cout << "║";
		cout << endl;
		cct_setcolor();
		cout << setw(2) << (char)('A' + x);
		for (int y = 0; y < map.col; y++)
		{
			cct_setcolor(COLOR_HWHITE, COLOR_BLACK);
			cout << "║";
			cct_setcolor(COLOR_WHITE, COLOR_HBLACK);
			if (map.play_map[x][y] > '0' && map.play_map[x][y] < '9')
			{
				cct_setcolor(COLOR_WHITE, (map.play_map[x][y] - '0'));
				cout << ' ';
				cout << setw(3) << map.play_map[x][y];
			}
			else if (map.play_map[x][y] == '*'||map.play_map[x][y]=='!')
			{
				cct_setcolor(COLOR_RED, COLOR_BLACK);
				cout << ' ';
				cout << setw(3) << map.play_map[x][y];
			}
			else if (map.play_map[x][y]=='X')
			{
				cct_setcolor(COLOR_YELLOW, COLOR_BLACK);
				cout <<setw(4) <<' ';
			}
			else
			{
				cout << setw(4) << "";
			}
		}
		cct_setcolor(COLOR_HWHITE, COLOR_BLACK);
		cout << "║";
		cout << endl;
		cct_setcolor();
		cout << setw(2) << "";
		for (int y = 0; y < map.col; y++)
		{
			cct_setcolor(COLOR_HWHITE, COLOR_BLACK);
			if (y != 0)
			{
				if (x != map.row - 1)
				{
					cout << "╬";
				}
				else
				{
					cout << "╩";
				}
			}
			else if (x != map.row - 1)
			{
				cout << "╠";
			}
			else
			{
				cout << "╚";
			}
			cout << "══";
		}
		if (x != map.row - 1)
		{
			cout << "╣";
		}
		else
		{
			cout << "╝";
		}
		cout << endl;
	}
	cct_setcolor();
	cout << resetiosflags(ios::left);
}

void mouse_action_control(inner_map *map, int* row, int* col)
{
	if (1) {
		int X = 0, Y = 0;
		int ret, maction;
		int keycode1, keycode2;
		int loop = 1;
		bool legal_place = false;

		cct_enable_mouse();
		cct_setcursor(CURSOR_INVISIBLE);	//关闭光标
		while (loop) {
			ret = cct_read_keyboard_and_mouse(X, Y, maction, keycode1, keycode2);
			if (ret == CCT_MOUSE_EVENT) {
				cct_gotoxy(0, 0);
				cout << "[当前鼠标位置] X:" << setw(2) << X << " Y:" << setw(2) << Y;
				//判断位置逻辑
				if (X >= 4 && Y >= 3)
				{
					int row, col;
					col = X - 4, row = Y - 3;
					row = row % 3, col = col % 6;
					if (row < 2 && col < 4 && (Y - 3) / 3 < (*map).row && (X-3) / 6 < (*map).col)
					{
						legal_place = true;
					}
					else
					{
						legal_place = false;
					}
				}
				else
				{
					legal_place = false;
				}
				if (legal_place)
				{
					cout << setw(5) << (char)(((Y - 3) / 3) + 'A') << "行" << ((X - 3) / 6) << "列";
				}
				else
				{
					cout << setw(10) << "位置非法";
				}
				cout << " 操作:";
				switch (maction) {
					case MOUSE_ONLY_MOVED:
						cout << "移动          " << endl;
						//showch(X, Y, '*');不打印任何内容
						break;
					case MOUSE_LEFT_BUTTON_CLICK:			//按下左键
						cout << "按下左键      " << endl;
						*col = (X - 4)/6, *row = (Y - 3) / 3;
						loop = 0;
						break;
					case MOUSE_RIGHT_BUTTON_CLICK:			//按下右键
						cout << "按下右键      " << endl;
						if ((*map).type == 9)
						{
							*col = (X - 4) / 6, * row = (Y - 3) / 3;
							if ((*map).play_map[*row][*col] == 'X')
							{
								(*map).play_map[*row][*col] = '!';
							}
							else if ((*map).play_map[*row][*col] == '!')
							{
								(*map).play_map[*row][*col] = 'X';
							}
							display_graph_play_map(*map);
						}
						break;
					default:
						cout << "其它操作" << endl;
						break;
				}
			}
			else if (ret == CCT_KEYBOARD_EVENT) {
				switch (keycode1) {
					case 27:	//ESC键
						*row = -1, *col = -1;
						loop = 0;
						break;
					case 32:	//SPACE键
						if((*map).type==9)
						{
							QueryPerformanceCounter(&(*map).end);
							cct_gotoxy(0, 4 + (*map).col * 3);
							cout << "已运行时间:" << setiosflags(ios::fixed) << setprecision(3) << double((*map).end.QuadPart - (*map).begin.QuadPart) / (*map).tick.QuadPart << "秒" << endl;
							cout << resetiosflags(ios::fixed);
						}
						break;
					default:	//其他键直接打印ASCII值
						break;
				}//end of swicth(keycode1)
			}//end of else if(ret == CCT_KEYBOARD_EVENT）
		}

		cct_disable_mouse();	//禁用鼠标
		cct_setcursor(CURSOR_VISIBLE_NORMAL);	//打开光标
		cct_gotoxy(0, 4 + (*map).col * 3);
	}
}
inner_map graph_init_mine_sweeper(inner_map map)
{
	cct_cls();
	display_graph_play_map(map);
	int row, col;
	mouse_action_control(&map, &row, &col);
	map = generate_inner_map(map, row, col);;
	reveal_surrounding_place(&map, row, col);
	display_graph_play_map(map);
	cct_gotoxy(0, 4 + map.col * 3);
	return map;
}
void graph_mine_sweeper(inner_map map)
{
	QueryPerformanceFrequency(&map.tick);	//获得计数器频率
	QueryPerformanceCounter(&map.begin);	//获得初始硬件计数器计数
	map = graph_init_mine_sweeper(map);
	int row, col;
	while (1)
	{
		mouse_action_control(&map, &row, &col);
		if (row == -1 || col == -1)
		{
			cct_gotoxy(0, 4 + map.col * 3);
			cout << "游戏结束";
			break;
		}
		if (map.play_map[row][col] == '!')
		{
			display_graph_play_map(map);
			continue;
		}
		if (map.map[row][col] != '*')
		{
			reveal_surrounding_place(&map, row, col);
			cout << endl;
			display_graph_play_map(map);
		}
		else
		{
			map.play_map[row][col] = map.map[row][col];
			display_graph_play_map(map);
			cct_gotoxy(0, 4 + map.col * 3);
			cout << "踩雷!! 游戏失败\n";
			return;
		}
		if (check_victory(map))
		{
			cct_gotoxy(0, 4 + map.col * 3);
			cout << "恭喜胜利,游戏结束\n";
			break;
		}
	}
}