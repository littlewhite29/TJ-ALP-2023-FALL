/*2051891 黄治东 信管*/
/*  */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	char map[10][26] = { 0 };
	int count = 0;
	char input[10][26];
	int input_count = 0;
	//接受输入并构建本地地雷图
	for (int x = 0; x < 10; x++)
	{
		for (int y = 0; y < 26; )
		{
			scanf("%c", &input[x][y]);
			if (input[x][y] == '*' || (input[x][y] >= '0' && input[x][y] <= '8'))
			{
				if (input[x][y] == '*')
				{
					input_count++;
					map[x][y] = '*';
				}
				y++;
			}
		}
	}
	if (input_count != 50)
	{
		printf("错误1");
		return 0;
	}
	//构建本地地雷数字图
	for (int x = 0; x < 10; x++)
	{
		for (int y = 0; y < 26; y++)
		{
			if (map[x][y] == '*')
			{
				for (int i = 0; i < 3; i++)
				{
					for (int j = 0; j < 3; j++)
					{

						if (x + i - 1 >= 0 && x + i - 1 < 10 && y + j - 1 >= 0 && y + j - 1 < 26)
						{
							if (map[x + i - 1][y + j - 1] != '*')
							{
								map[x + i - 1][y + j - 1]++;
							}
						}
						else
						{
							break;
						}
					}
				}
			}
		}
	}
	//将数值转化为字符
	for(int x = 0; x < 10; x++)
	{
		for (int y = 0; y < 26; y++)
		{
			if (map[x][y] != '*')
			{
				map[x][y] += '0';
			}
		}
	}
	//检验
	for(int x = 0; x < 10; x++)
	{
		for (int y = 0; y < 26; y++)
		{
			if (map[x][y] != input[x][y])
			{
				printf("错误2");
				return 0;
			}
		}
	}
	printf("正确");
	return 0;
}