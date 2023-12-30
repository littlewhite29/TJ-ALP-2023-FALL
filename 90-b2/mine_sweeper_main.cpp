/* �Ź� 2051891 ���ζ� */
#include <iostream>
#include <iomanip>
#include "cmd_console_tools.h"
#include "mine_sweeper.h"
#include <conio.h>
#include <Windows.h>

using namespace std;
int main()
{


	/* demo������ִ�д˾䣬��cmd��������Ϊ40��x120�У����������120�У�����9000�У���cmd�����Ҳ���д�ֱ�����ˣ�*/
	cct_setconsoleborder(120, 40, 120, 9000);
	int type;
	while (true)
	{

		type = mine_sweeper_menu();
		if (type == 0)
		{
			for (int i = 0; i < 24; i++)
			{
				cout << endl;
			}
			break;
		}
		else if (type == 1)
		{
			cct_cls();
			display_inner_map(generate_inner_map(type,choose_difficulty()));
			cout << "\n\n���س�������...";
			while (int temp = _getch() != '\r')
			{
				;
			}
		}
		else if (type == 2)
		{
			cct_cls();
			inner_map map;
			map = generate_inner_map(type, choose_difficulty());
			cct_cls();
			display_play_map(map);
			init_mine_sweeper(map);
			cout << "\n\n���س�������...";
			while (int temp = _getch() != '\r')
			{
				;
			}
		}
		else if (type == 3)
		{
			cct_cls();
			inner_map map;
			map = generate_inner_map(type, choose_difficulty());
			cct_cls();
			display_play_map(map);
			mine_sweeper(map);
			cout << "\n\n���س�������...";
			while (int temp = _getch() != '\r')
			{
				;
			}
		}
		else if (type == 4)
		{
			cct_cls();
			inner_map map;
			map = generate_inner_map(type, choose_difficulty());
			cct_cls();
			display_play_map(map);
			mine_sweeper(map);
			cout << "\n\n���س�������...";
			while (int temp = _getch() != '\r')
			{
				;
			}
		}
		else if (type == 5)
		{
			cct_cls();
			inner_map map = generate_inner_map(type, choose_difficulty());
			cct_cls();
			display_graph_inner_map(map);
			cout << "\n\n���س�������...";
			while (int temp = _getch() != '\r')
			{
				;
			}
			cct_setconsoleborder(120, 40, 120, 9000);
			cct_setfontsize("������", 24);
		}
		else if (type == 6)
		{
			cct_cls();
			inner_map map = generate_inner_map(type, choose_difficulty());
			cct_cls();
			display_graph_inner_map(map);
			int row, col;
			mouse_action_control(&map,&row,&col);
			cct_gotoxy(0, 4 + map.col * 3);
			cout << "\n\n���س�������...";
			while (int temp = _getch() != '\r')
			{
				;
			}
			cct_setconsoleborder(120, 40, 120, 9000);
			cct_setfontsize("������", 24);
		}
		else if (type == 7)
		{
			cct_cls();
			inner_map map = generate_inner_map(type, choose_difficulty());
			cct_cls();
			display_graph_play_map(map);
			int row, col;
			mouse_action_control(&map, &row, &col);
			map = generate_inner_map(map, row, col);;
			reveal_surrounding_place(&map, row, col);
			display_graph_play_map(map);
			cct_gotoxy(0, 4 + map.col * 3);
			cout << "\n���س�������...";
			while (int temp = _getch() != '\r')
			{
				;
			}
			cct_setconsoleborder(120, 40, 120, 9000);
			cct_setfontsize("������", 24);
		}
		else if (type == 8)
		{
			cct_cls();
			inner_map map = generate_inner_map(type, choose_difficulty());
			graph_mine_sweeper(map);
			cct_gotoxy(0, 4 + map.col * 3);
			cout << "\n���س�������...";
			while (int temp = _getch() != '\r')
			{
				;
			}
			cct_setconsoleborder(120, 40, 120, 9000);
			cct_setfontsize("������", 24);
		}
		else if (type == 9)
		{
			cct_cls();
			inner_map map = generate_inner_map(type, choose_difficulty());
			graph_mine_sweeper(map);
			cct_gotoxy(0, 4 + map.col * 3);
			cout << "\n���س�������...";
			while (int temp = _getch() != '\r')
			{
				;
			}
			cct_setconsoleborder(120, 40, 120, 9000);
			cct_setfontsize("������", 24);
		}

	}

	return 0;
}