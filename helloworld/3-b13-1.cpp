///* 信管 2051891 黄治东 */
//#include <iostream>
//#include<iomanip>
//using namespace std;
//
//int main()
//{
//	int y, m, d;
//	int status;//输入状态，取0正常，取1不正常
//	int num = 0;//月份天数
//	int leap = 0;//是否闰年，是取1，否取0
//	while (true)
//	{
//		status = 0;
//		cout << "请输入年份(2000-2030)和月份(1-12) : ";
//		cin >> y >> m;
//		leap = ((y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)) ? 1 : 0);
//		if (y < 2000 || y>2030)
//		{
//			status = 1;
//		}
//		if (m <= 0 || m > 12)
//		{
//			status = 1;
//		}
//		//判断输入正确性
//		if (status == 1 || cin.good() == 0)
//		{
//			cout << "输入非法，请重新输入\n";
//			int temp;
//			cin.clear();
//			while ((temp = getchar()) != '\n')
//			{
//				;//空语句
//			}
//		}
//		else
//		{
//			break;
//		}
//	}
//	while (true)
//	{
//		status = 0;
//		cout << "请输入" << y << "年" << m << "月1日的星期(0-6表示星期日-星期六) : " << endl;
//		cin >> d;
//		if (d < 0 || d>6)
//		{
//			status = 1;
//		}
//		//判断输入正确性
//		if (status == 1 || cin.good() == 0)
//		{
//			//printf("%d,%d\n",status, ret);
//			cout << "输入非法，请重新输入\n";
//			int temp;
//			cin.clear();
//			while ((temp = getchar()) != '\n')
//			{
//				;//空语句
//			}
//		}
//		else
//		{
//			break;
//		}
//	}
//	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
//	{
//		num = 31;
//	}
//	else if (m == 2)
//	{
//		num = 28 + leap;
//	}
//	else
//	{
//		num = 30;
//	}
//	//输入正确，开始打印
//	cout << y << "年" << m << "月的月历为:\n";
//	cout << "星期日  星期一  星期二  星期三  星期四  星期五  星期六\n";
//	for (int i = 0; i < d; i++)
//	{
//		//八个空格
//		cout << "        ";
//	}
//	int current = 0;
//	while (true)
//	{
//		for (; d < 7; d++)
//		{
//			current++;
//			//四位宽度输出数字加上四个空格
//			cout << setw(4) << current << "    ";
//			if (current == num)
//				break;
//		}
//		d = 0;
//		if (current == num)
//		{
//			cout << endl;
//			break;
//		}
//		cout << endl;
//	}
//
//	return 0;
//}
