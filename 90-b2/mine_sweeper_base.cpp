/*2051891 ���ζ� �Ź�*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <conio.h>
#include "cmd_console_tools.h"
#include "mine_sweeper.h"

using namespace std;
int choose_difficulty()
{
	cout << "��ѡ���Ѷ�:\n";
	cout << "  1.����( 9*9  - 10����)\n";
	cout << "  2.�м�(16*16 - 40����)\n";
	cout << "  3.�߼�(16*30 - 99����)\n";
	cout << "������[1..3]: ";
	while (true)
	{
		char difficulty = _getch();
		if (difficulty >= '1' && difficulty <= '3')
		{
			cout << difficulty << endl;
			return((int)(difficulty - '0'));
		}
	}
}

struct inner_map generate_inner_map(int type,int difficulty)
{
	inner_map map;
	int count = 0;
	map.type = type;
	map.difficulty = difficulty;
	if (difficulty == PRIMARY)
	{
		map.row = 9;
		map.col = 9;
		map.mine_number = 10;
	}
	else if (difficulty == MEDIUM)
	{
		map.row = 16;
		map.col = 16;
		map.mine_number = 40;
	}
	else if (difficulty == SENIOR)
	{
		map.row = 16;
		map.col = 30;
		map.mine_number = 99;
	}
	srand((unsigned int)time(NULL));
	while (count < map.mine_number)
	{
		int x = rand() % map.row;
		int y = rand() % map.col;
		if (map.map[x][y] != '*')
		{
			count++;
		}
		map.map[x][y] = '*';
	}
	for (int x = 0; x < map.row; x++)
	{
		for (int y = 0; y < map.col; y++)
		{
			map.play_map[x][y] = 'X';
			if (map.map[x][y] == '*')
			{
				for (int i = 0; i < 3; i++)
				{
					for (int j = 0; j < 3; j++)
					{

						if (x + i - 1 >= 0 && x + i - 1 < map.row && y + j - 1 >= 0 && y + j - 1 < map.col)
						{
							if (map.map[x + i - 1][y + j - 1] != '*')
							{
								map.map[x + i - 1][y + j - 1]++;
							}
						}
						else
						{
							continue;
						}
					}
				}
			}
		}
	}
	for (int x = 0; x < map.row; x++)
	{
		for (int y = 0; y < map.col; y++)
		{
			if (map.map[x][y] != '*')
			{
				map.map[x][y] += '0';
			}
		}
	}
	return map;
}
struct inner_map generate_inner_map(inner_map map,int row,int col)
{
	int count = 0;
	//���map
	for (int x = 0; x < map.row; x++)
	{
		for (int y = 0; y < map.col; y++)
		{
			map.play_map[x][y] = 'X';
			map.map[x][y] = '\0';
		}
	}
	srand((unsigned int)time(NULL));
	while (count < map.mine_number)
	{
		int x = rand() % map.row;
		int y = rand() % map.col;
		if (abs(row-x)<=1 && abs(col-y)<=1)
		{
			continue;
		}
		if (map.map[x][y] != '*')
		{
			count++;
		}
		map.map[x][y] = '*';
	}
	for (int x = 0; x < map.row; x++)
	{
		for (int y = 0; y < map.col; y++)
		{
			map.play_map[x][y] = 'X';
			if (map.map[x][y] == '*')
			{
				for (int i = 0; i < 3; i++)
				{
					for (int j = 0; j < 3; j++)
					{

						if (x + i - 1 >= 0 && x + i - 1 < map.row && y + j - 1 >= 0 && y + j - 1 < map.col)
						{
							if (map.map[x + i - 1][y + j - 1] != '*')
							{
								map.map[x + i - 1][y + j - 1]++;
							}
						}
						else
						{
							continue;
						}
					}
				}
			}
		}
	}
	for (int x = 0; x < map.row; x++)
	{
		for (int y = 0; y < map.col; y++)
		{
			if (map.map[x][y] != '*')
			{
				map.map[x][y] += '0';
			}
		}
	}
	return map;

}
void display_inner_map(inner_map map)
{
	cct_cls();
	cout << "�ڲ�����:\n";
	cout << setiosflags(ios::left);
	cout << "  |";
	for (int i = 0; i < 9; i++)
	{

		cout << setw(2) << i+1;
	}
	if (map.difficulty != PRIMARY)
	{
		for (int i = 0; i < map.col - 9; i++)
		{
			cout << setw(2) << (char)(i + 'a');
		}
	}
	cout << endl;
	cout << "--+";
	for (int i = 0; i < map.col * 2; i++)
	{
		cout << '-';
	}
	cout << endl;
	for (int x = 0; x < map.row; x++)
	{
		cout << setw(2) << (char)('A' + x) << '|';
		for (int y = 0; y < map.col; y++)
		{

			cout << setw(2) << map.map[x][y];
		}
		cout << endl;
	}
	cout << resetiosflags(ios::left);
}

void display_play_map(inner_map map)
{
	cout << "�ڲ�����:\n";
	cout << setiosflags(ios::left);
	cout << "  |";
	for (int i = 0; i < 9; i++)
	{

		cout << setw(2) << i + 1;
	}
	if (map.difficulty != PRIMARY)
	{
		for (int i = 0; i < map.col - 9; i++)
		{
			cout << setw(2) << (char)(i + 'a');
		}
	}
	cout << endl;
	cout << "--+";
	for (int i = 0; i < map.col * 2; i++)
	{
		cout << '-';
	}
	cout << endl;
	for (int x = 0; x < map.row; x++)
	{
		cout << setw(2) << (char)('A' + x) << '|';
		for (int y = 0; y < map.col; y++)
		{
			if (map.play_map[x][y] != 'X'&&map.play_map[x][y]!='!')
			{
				cct_setcolor(COLOR_HYELLOW, (map.play_map[x][y]-'0'));
			}
			else if (map.play_map[x][y] == '!')
			{
				cct_setcolor(COLOR_HRED, 7);
			}
			cout << setw(2) << map.play_map[x][y];
			cct_setcolor();
		}
		cout << endl;
	}
	cout << resetiosflags(ios::left);
}



inner_map init_mine_sweeper(inner_map map)
{
	int row, col;
	mine_clearance(&map,&row,&col);
	if (row == -1 || col == -1)
	{
		cout << "��Ϸ����";
		return map;
	}
	map=generate_inner_map(map, row, col);
	//map.play_map[row][col] = map.map[row][col];
	if (map.map[row][col] != '*')
	{
		reveal_surrounding_place(&map, row, col);
		cout << endl;
		display_play_map(map);
	}
	return map;
}

void mine_sweeper(inner_map map)
{
	QueryPerformanceFrequency(&map.tick);	//��ü�����Ƶ��
	QueryPerformanceCounter(&map.begin);	//��ó�ʼӲ������������
	map=init_mine_sweeper(map);
	int row, col;
	while(1)
	{
		mine_clearance(&map, &row, &col);
		if (row == -1 || col == -1)
		{
			cout << "��Ϸ����";
			break;
		}
		if (map.play_map[row][col] == '!')
		{
			display_play_map(map);
			continue;
		}
		if (map.map[row][col] != '*')
		{
			reveal_surrounding_place(&map, row, col);
			cout << endl;
			display_play_map(map);
		}
		else
		{
			cout << "����!! ��Ϸʧ��\n";
			return;
		}
		if (check_victory(map))
		{
			cout << "��ϲʤ��,��Ϸ����\n";
			break;
		}
	}
}

void reveal_surrounding_place(inner_map *map, int row, int col)
{
	if ((*map).play_map[row][col] != 'X')
	{
		//cout << map.play_map[row][col];
		return;
	}
	(*map).play_map[row][col] = (*map).map[row][col];
	if ((*map).play_map[row][col] != '0')
	{
		//cout << map.play_map[row][col];
		return;
	}
	//display_play_map(map);
	if (row - 1 >= 0)
	{
		reveal_surrounding_place(map, row - 1, col);
	}
	if (col - 1 >= 0)
	{
		reveal_surrounding_place(map, row, col-1);
	}
	if (row + 1 <= (*map).row)
	{
		reveal_surrounding_place(map, row + 1, col);
	}
	if (col + 1 <= (*map).col)
	{
		reveal_surrounding_place(map, row, col + 1);
	}
}

void mine_clearance(inner_map *map,int *row,int *col)
{
	if ((*map).type > 3)
	{
		cout << "��������˵��: & - ��Ϸ������ʱ��(���ַ�����,����Ҫ������)\n";
		cout << "              ! - ��Ǹ�����Ϊ��(��:!E3)\n";
		cout << "              # - ȡ�����(��:#E3)\n";
	}
	cout << "�������λ�õ���������(���к��У��ϸ����ִ�Сд����:G1/Af����Q/q�˳�): ";
	int temp;
	char sign=0;
	while (1)
	{
		temp = _getch();
		if (temp >= 'A' && temp <= ('A' + (*map).row))
		{
			cout << (char)temp;
			*row = temp - 'A';
			break;
		}
		else if (temp == 'q' || temp == 'Q')
		{
			*col = -1;
			*row = -1;
			return;
		}
		else if (temp == '&'&&sign=='\0')
		{
			cout << endl;
			QueryPerformanceCounter(&(*map).end);
			cout << "������ʱ��:"<< setiosflags(ios::fixed) << setprecision(3) << double((*map).end.QuadPart - (*map).begin.QuadPart) / (*map).tick.QuadPart << "��" << endl;
			cout << resetiosflags(ios::fixed);
			cout << "��������˵��: & - ��Ϸ������ʱ��(���ַ�����,����Ҫ������)\n";
			cout << "              ! - ��Ǹ�����Ϊ��(��:!E3)\n";
			cout << "              # - ȡ�����(��:#E3)\n";
			cout << "�������λ�õ���������(���к��У��ϸ����ִ�Сд����:G1/Af����Q/q�˳�): ";
			continue;
		}
		else if ((temp == '#' || temp == '!') && sign == '\0')
		{
			sign = temp;
			cout << sign;
		}
	}
	while (1)
	{
		temp = _getch();
		if ((temp >= '1' && temp <= '9' && (*col = temp - '1',1)) || (temp >= 'a' && temp <= ('a' + (*map).col - 9) && (*col = temp - 'a'+9,1)))
		{
			cout << (char)temp;
			cout << endl;
			break;
		}
		else if (temp == 'q' || temp == 'Q')
		{
			*col = -1;
			*row = -1;
			return;
		}
	}
	if (sign != 0&&(*map).type>3)
	{
		if (sign == '!')
		{
			if ((*map).play_map[*row][*col] == 'X')
			{
				(*map).play_map[*row][*col] = '!';
			}
		}
		else if (sign == '#')
		{
			if ((*map).play_map[*row][*col] == '!')
			{
				(*map).play_map[*row][*col] = 'X';
			}
		}
		display_play_map(*map);
		mine_clearance(map, row, col);
	}
}
