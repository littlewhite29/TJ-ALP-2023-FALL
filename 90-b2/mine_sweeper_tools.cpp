/* �Ź� 2051891 ���ζ� */
#include "mine_sweeper.h"

/* ���ļ���������Ŀ����Ϊ�˷�ֹ���ļ���Ū�� */
bool check_victory(inner_map map)
{
	int count = 0;
	for (int x = 0; x < map.row; x++)
	{
		for (int y = 0; y < map.col; y++)
		{
			if (map.play_map[x][y] == 'X' || map.play_map[x][y] == '!')
			{
				count++;
			}
		}
	}
	if (count == map.mine_number)
	{
		return true;
	}
	else
	{
		return false;
	}
}
