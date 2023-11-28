//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int main()
//{
//	cout << "请输入9*9的矩阵，值为1-9之间\n";
//	int soduku[9][9];
//	for (int i = 0; i < 9; i++)
//	{
//		for (int j = 0; j < 9; j++)
//		{
//			while (true)
//			{
//				cin >> soduku[i][j];
//				if (soduku[i][j] >= 1 && soduku[i][j] <= 9)
//				{
//					break;
//				}
//				if (cin.good() == 0)
//				{
//					int temp;
//					while ((temp = getchar()) != '\n');
//					{
//						;
//					}
//				}
//			}
//		}
//	}
//	//是否为数独
//	bool is_sodoku = true;
//	//标志变量,元素为1代表已使用过
//	int arr[9];
//	for (int i = 0; i < 9; i++)
//	{
//		//清空标志变量
//		for (int k = 0; k < 9; k++)
//		{
//			arr[k] = 0;
//		}
//		//检查横行
//		for (int j = 0; j < 9; j++)
//		{
//			int num = soduku[i][j] - 1;
//			if (arr[num] == 0)
//			{
//				arr[num] = 1;
//			}
//			else
//			{
//				is_sodoku = false;
//				break;
//			}
//		}
//		//清空标志变量
//		for (int k = 0; k < 9; k++)
//		{
//			arr[k] = 0;
//		}
//		//检查横行
//		for (int j = 0; j < 9; j++)
//		{
//			int num = soduku[j][i] - 1;
//			if (arr[num] == 0)
//			{
//				arr[num] = 1;
//			}
//			else
//			{
//				is_sodoku = false;
//				break;
//			}
//		}
//		//清空标志变量
//		for (int k = 0; k < 9; k++)
//		{
//			arr[k] = 0;
//		}
//		//检查小方块
//		int row_base = i / 3;
//		int column_base = i % 3;
//		int row_cur;
//		int column_cur;
//		for (int j = 0; j < 9; j++)
//		{
//			row_cur = j / 3;
//			column_cur = j % 3;
//			int num = soduku[3 * row_base + row_cur][3 * column_base + column_cur] - 1;
//			if (arr[num] == 0)
//			{
//				arr[num] = 1;
//			}
//			else
//			{
//				is_sodoku = false;
//				break;
//			}
//		}
//	}
//	if (is_sodoku)
//	{
//		cout << "是数独的解\n";
//	}
//	else
//	{
//		cout << "不是数独的解\n";
//
//	}
//	return 0;
//}
