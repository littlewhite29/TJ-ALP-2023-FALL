///*2051891 ���ζ� �Ź�*/
///*2151356 ���α� 2152788 帾��� 2151438 ������ 2253924 ������ 2253577 ��Ȫ�� 2250676 �ż�*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//
//int main()
//{
//	char map[10][26] = { 0 };
//	int count = 0;
//	char input[10][26] = { 0 };
//	int input_count = 0;
//	//�������벢�������ص���ͼ
//	for (int x = 0; x < 10; x++)
//	{
//		for (int y = 0; y < 26; )
//		{
//			scanf("%c", &input[x][y]);
//			if (input[x][y] == '*' || (input[x][y] >= '0' && input[x][y] <= '8'))
//			{
//				if (input[x][y] == '*')
//				{
//					input_count++;
//					map[x][y] = '*';
//				}
//				y++;
//			}
//		}
//	}
//	if (input_count != 50)
//	{
//		printf("����1\n");
//		return 0;
//	}
//	//�������ص�������ͼ
//	for (int x = 0; x < 10; x++)
//	{
//		for (int y = 0; y < 26; y++)
//		{
//			if (map[x][y] == '*')
//			{
//				for (int i = 0; i < 3; i++)
//				{
//					for (int j = 0; j < 3; j++)
//					{
//
//						if (x + i - 1 >= 0 && x + i - 1 < 10 && y + j - 1 >= 0 && y + j - 1 < 26)
//						{
//							if (map[x + i - 1][y + j - 1] != '*')
//							{
//								map[x + i - 1][y + j - 1]++;
//							}
//						}
//						else
//						{
//							continue;
//						}
//					}
//				}
//			}
//		}
//	}
//	//����ֵת��Ϊ�ַ�
//	for(int x = 0; x < 10; x++)
//	{
//		for (int y = 0; y < 26; y++)
//		{
//			if (map[x][y] != '*')
//			{
//				map[x][y] += '0';
//			}
//		}
//	}
//	//����
//	for(int x = 0; x < 10; x++)
//	{
//		for (int y = 0; y < 26; y++)
//		{
//			if (map[x][y] != input[x][y])
//			{
//				printf("����2\n");
//				//printf("���꣺%d,%d,map��%c,input��%c\n", x + 1, y + 1, map[x][y], input[x][y]);
//				return 0;
//			}
//		}
//	}
//	printf("��ȷ\n");
//	return 0;
//}
