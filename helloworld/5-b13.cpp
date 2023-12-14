///*2051891 黄治东 信管*/
//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//#include <iomanip>
//
//using namespace std;
//
//int main()
//{
//	char map[10][26] = { 0 };
//	int count = 0;
//	srand((unsigned int)time(NULL));
//	while (count < 50)
//	{
//		int x = rand() % 10;
//		int y = rand() % 26;
//		if (map[x][y] != '*')
//		{
//			count++;
//		}
//		map[x][y] = '*';
//	}
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
//							if(map[x + i - 1][y + j - 1]!='*')
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
//	for (int x = 0; x < 10; x++)
//	{
//		for (int y = 0; y < 26; y++)
//		{
//			if (map[x][y] != '*')
//			{
//				map[x][y] += '0';
//			}
//		}
//	}
//	for (int x = 0; x < 10; x++)
//	{
//		for (int y = 0; y < 26; y++)
//		{
//			cout<< map[x][y] << ' ';
//		}
//		cout << endl;
//	}
//	return 0;
//}
