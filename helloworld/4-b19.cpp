///* 2051891 黄治东 信管 */
//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int min(int a, int b, int c = -1, int d = -1)
//{
//	int min = a < b ? a : b;
//	int min2 = c < d ? c : d;
//	if (c == -1)
//	{
//		return min;
//	}
//	else if (d == -1)
//	{
//		return min < c ? min : c;
//	}
//	else
//	{
//		return min < min2 ? min : min2;
//	}
//}
//
//int main()
//{
//	int num;
//	int a, b, c, d, result;
//	int temp;
//	while (true)
//	{
//		cout << "请输入个数num及num个正整数：\n";
//		cin >> num;
//		if (cin.good() == 0)
//		{
//			cin.clear();
//			while ((temp = getchar()) != '\n')
//			{
//				;
//			}
//			continue;
//		}
//		switch (num)
//		{
//			case 2:
//				cin >> a >> b;
//				break;
//			case 3:
//				cin >> a >> b >> c;
//				break;
//			case 4:
//				cin >> a >> b >> c >> d;
//				break;
//			default:
//				break;
//		}
//		if (cin.good() == 0)
//		{
//			cin.clear();
//			while ((temp = getchar()) != '\n')
//			{
//				;
//			}
//			continue;
//		}
//		else break;
//	}
//
//	switch (num)
//	{
//		case 2:
//			result = min(a, b);
//			break;
//		case 3:
//			result = min(a, b, c);
//			break;
//		case 4:
//			result = min(a, b, c, d);
//			break;
//		default:
//			result = -1;
//			break;
//	}
//
//	if (result > 0)
//	{
//		cout << "min=" << result << endl;
//	}
//	else
//	{
//		cout << "个数输入错误\n";
//	}
//
//	return 0;
//}
