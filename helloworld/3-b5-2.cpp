////2051891 �Ź� ���ζ�
//#include <iostream>
//#include <iomanip>
//#include<cmath>
//using namespace std;
//
//int main()
//{
//	int y, m, d;
//	int status = 0;//����״̬��ȡ0������ȡ1�·ݲ���ȷ��ȡ2�ղ���ȷ
//	int num = 0;//�����ļ���
//	int leap = 0;//�Ƿ����꣬��ȡ1����ȡ0
//	cout << "�������꣬�£���" << endl;
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
//		//ʹ��switch :(
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
//		cout << y << "-" << m << "-" << d << "��" << y << "��ĵ�" << (num + leap) << "��" << endl;
//	}
//	else if (status == 1)
//	{
//		cout << "�������-�·ݲ���ȷ" << endl;
//	}
//	else if (status == 2)
//	{
//		cout << "�������-�����µĹ�ϵ�Ƿ�" << endl;
//	}
//	return 0;
//}
