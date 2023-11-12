///* 2051891 黄治东 信管 */
//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int max(int a, int b)
//{
//	return a > b ? a : b;
//}
//int max(int a, int b, int c)
//{
//	int max = a > b ? a : b;
//	max = max > c ? max : c;
//	return max;
//}int max(int a, int b, int c, int d)
//{
//	int max = a > b ? a : b;
//	int max2 = c > d ? c : d;
//	return max > max2 ? max : max2;
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
//			result = max(a, b);
//			break;
//		case 3:
//			result = max(a, b, c);
//			break;
//		case 4:
//			result = max(a, b, c, d);
//			break;
//		default:
//			result = -1;
//			break;
//	}
//
//	if (result > 0)
//	{
//		cout << "max=" << result << endl;
//	}
//	else
//	{
//		cout << "个数输入错误\n";
//	}
//
//	return 0;
//}
