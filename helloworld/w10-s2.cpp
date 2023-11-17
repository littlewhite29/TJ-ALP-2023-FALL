///* 2051891 黄治东 信管 */
//#include <iostream>
//using namespace std;
//int is_power(int num, int base)
//{
//	if (num == base || num == 1)
//	{
//		return 1;
//	}
//	else if (num % base != 0)
//	{
//		return 0;
//	}
//	else
//	{
//		return is_power(num / base, base);
//	}
//}
//
//
///***************************************************************************
//  函数名称：
//  功    能：
//  输入参数：
//  返 回 值：
//  说    明：
//***************************************************************************/
//int main()
//{
//	int n, num[10000], base, result = 0;
//	cout << "请输入数据的个数[1..10000]\n";
//	cin >> n;
//	cout << "请输入" << n << "个正整数\n";
//	for (int i = 0; i < n; i++)
//	{
//		cin >> num[i];
//	}
//	cout << "请输入基数[2..9]\n";
//	cin >> base;
//	for (int j = 0; j < n; j++)
//	{
//		if (is_power(num[j], base))
//		{
//			result++;
//		}
//	}
//	cout << n << "个数中基数" << base << "的幂的个数 : " << result << endl;
//
//	return 0;
//}
