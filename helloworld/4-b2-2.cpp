////2051891 �Ź� ���ζ�
//#include <iostream>
//#include <iomanip>
//#include <cmath>
//using namespace std;
//
//int zeller(int c, int y, int m, int d)
//{
//	int w = 0;
//	w = y + y / 4 + c / 4 - 2 * c + (13 * (m + 1) / 5) + d - 1;
//	for (; w < 0 || w>7;)
//	{
//		w = (w + 7) % 7;
//	}
//	return w;
//}
//
//void printWeekDay(int w)
//{
//	switch (w)
//	{
//		case 0:
//			cout << "������";
//			break;
//		case 1:
//			cout << "����һ";
//			break;
//		case 2:
//			cout << "���ڶ�";
//			break;
//		case 3:
//			cout << "������";
//			break;
//		case 4:
//			cout << "������";
//			break;
//		case 5:
//			cout << "������";
//			break;
//		case 6:
//			cout << "������";
//			break;
//		default:
//			cout << "error";
//			break;
//	}
//	cout << endl;
//}
//
//int main()
//{
//	int y, m, d;
//	int num, leap;
//	while (1)
//	{
//		cout << "��������[1900-2100]���¡��գ�\n";
//		cin >> y >> m >> d;
//		leap = ((y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)) ? 1 : 0);
//
//		if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
//		{
//			num = 31;
//		}
//		else if (m == 2)
//		{
//			num = 28 + leap;
//		}
//		else
//		{
//			num = 30;
//		}
//		if (cin.good() == 0)
//		{
//			cout << "�����������������\n";
//			int temp;
//			cin.clear();
//			while ((temp = getchar()) != '\n')
//			{
//				;
//			}
//			continue;
//		}
//		else if (y < 1900 || y>2100)
//		{
//			cout << "��ݲ���ȷ������������\n";
//		}
//		else if (m < 1 || m>12)
//		{
//			cout << "�·ݲ���ȷ������������\n";
//		}
//		else if (d<1 || d>num)
//		{
//			cout << "�ղ���ȷ������������\n";
//		}
//		else {
//			if (m < 3)
//			{
//				m += 12;
//				y -= 1;
//			}
//			break;
//		}
//	}
//	printWeekDay(zeller(y / 100, y - y / 100 * 100, m, d));
//	return 0;
//}
