//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int main()
//{
//	cout << "������9*9�ľ���ֵΪ1-9֮��\n";
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
//	//�Ƿ�Ϊ����
//	bool is_sodoku = true;
//	//��־����,Ԫ��Ϊ1������ʹ�ù�
//	int arr[9];
//	for (int i = 0; i < 9; i++)
//	{
//		//��ձ�־����
//		for (int k = 0; k < 9; k++)
//		{
//			arr[k] = 0;
//		}
//		//������
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
//		//��ձ�־����
//		for (int k = 0; k < 9; k++)
//		{
//			arr[k] = 0;
//		}
//		//������
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
//		//��ձ�־����
//		for (int k = 0; k < 9; k++)
//		{
//			arr[k] = 0;
//		}
//		//���С����
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
//		cout << "�������Ľ�\n";
//	}
//	else
//	{
//		cout << "���������Ľ�\n";
//
//	}
//	return 0;
//}
