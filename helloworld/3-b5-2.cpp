////2051891 信管 黄治东
//#include <iostream>
//#include <iomanip>
//#include<cmath>
//using namespace std;
//
//int main()
//{
//	int y, m, d;
//	int status = 0;//输入状态，取0正常，取1月份不正确，取2日不正确
//	int num = 0;//天数的计算
//	int leap = 0;//是否闰年，是取1，否取0
//	cout << "请输入年，月，日" << endl;
//	cin >> y >> m >> d;
//	num += d;
//	leap = ((y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)) ? 1 : 0);
//	if (m <= 0 || m > 12)
//	{
//		status = 1;
//
//	}
//	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
//	{
//		if (d > 31 || d < 1)
//		{
//			status = 2;
//		}
//	}
//	else if (m == 2)
//	{
//		if (d > 28 + leap || d < 1)
//		{
//			status = 2;
//		}
//	}
//	else
//	{
//		if (d > 30 || d < 1)
//		{
//			status = 2;
//		}
//	}
//	if (status == 0)
//	{
//		//痛苦switch :(
//		switch (m)
//		{
//		case 1:
//			leap = 0;
//			break;
//		case 2:
//			leap = 0;
//			num += 31;
//			break;
//		case 3:
//			num += 31 + 28;
//			break;
//		case 4:
//			num += 31 + 28 + 31;
//			break;
//		case 5:
//			num += 31 + 28 + 31 + 30;
//			break;
//		case 6:
//			num += 31 + 28 + 31 + 30 + 31;
//			break;
//		case 7:
//			num += 31 + 28 + 31 + 30 + 31 + 30;
//			break;
//		case 8:
//			num += 31 + 28 + 31 + 30 + 31 + 30 + 31;
//			break;
//		case 9:
//			num += 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
//			break;
//		case 10:
//			num += 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
//			break;
//		case 11:
//			num += 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
//			break;
//		case 12:
//			num += 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
//			break;
//		}
//		cout << y << "-" << m << "-" << d << "是" << y << "年的第" << (num + leap) << "天" << endl;
//	}
//	else if (status == 1)
//	{
//		cout << "输入错误-月份不正确" << endl;
//	}
//	else if (status == 2)
//	{
//		cout << "输入错误-日与月的关系非法" << endl;
//	}
//	return 0;
//}
