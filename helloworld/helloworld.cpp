//2051891 信管 黄治东
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int zeller(int c, int y, int m, int d)
{
	int w = 0;
	w = y + y / 4 + c / 4 - 2 * c + (13 * (m + 1) / 5) + d - 1;
	for (; w < 0 || w>7;)
	{
		w = (w + 7) % 7;
	}
	return w;
}

void calendar(int y, int m, int w, int num)
{
	if (m > 12)
	{
		cout << y+1 << "年" << m-12 << "月\n";
	}
	else
	{
		cout << y << "年" << m << "月\n";
	}
	for (int i = 0; i < 54; i++)
	{
		cout << "=";
	}
	cout << "\n";
	cout << "星期日  星期一  星期二  星期三  星期四  星期五  星期六\n";
	for (int i = 0; i < 54; i++)
	{
		cout << "=";
	}
	cout << "\n";
	for (int i = 0; i < w; i++)
	{
		//八个空格
		cout << "        ";
	}
	int current = 0;
	while (true)
	{
		for (; w < 7; w++)
		{
			current++;
			//四位宽度输出数字加上四个空格
			cout << setw(4) << current << "    ";
			if (current == num)
				break;
		}
		w = 0;
		if (current == num)
		{
			cout << endl;
			break;
		}
		cout << endl;
	}
}

int getMonth(int m, int leap)
{
	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
	{
		return  31;
	}
	else if (m == 2)
	{
		return  28 + leap;
	}
	else
	{
		return 30;
	}
}
int main()
{
	int y, m, d = 1;
	int num, leap;
	while (1)
	{
		cout << "请输入年[1900-2100]、月\n";
		cin >> y >> m;
		leap = ((y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)) ? 1 : 0);

		num = getMonth(m, leap);
		if (cin.good() == 0)
		{
			cout << "输入错误，请重新输入\n";
			int temp;
			cin.clear();
			while ((temp = getchar()) != '\n')
			{
				;
			}
			continue;
		}
		else if (y < 1900 || y>2100)
		{
			cout << "年份不正确，请重新输入\n";
		}
		else if (m < 1 || m>12)
		{
			cout << "月份不正确，请重新输入\n";
		}
		else {
			break;
		}
	}
	//输入正确，开始打印
	cout << endl;
	if (m < 3)
	{
		m += 12;
		y -= 1;
	}
	calendar(y, m, zeller(y / 100, y - y / 100 * 100, m, d), num);
	cout << endl;
	return 0;
}
