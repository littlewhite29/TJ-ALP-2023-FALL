//2051891 �Ź� ���ζ�
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
		cout << y+1 << "��" << m-12 << "��\n";
	}
	else
	{
		cout << y << "��" << m << "��\n";
	}
	for (int i = 0; i < 54; i++)
	{
		cout << "=";
	}
	cout << "\n";
	cout << "������  ����һ  ���ڶ�  ������  ������  ������  ������\n";
	for (int i = 0; i < 54; i++)
	{
		cout << "=";
	}
	cout << "\n";
	for (int i = 0; i < w; i++)
	{
		//�˸��ո�
		cout << "        ";
	}
	int current = 0;
	while (true)
	{
		for (; w < 7; w++)
		{
			current++;
			//��λ���������ּ����ĸ��ո�
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
		cout << "��������[1900-2100]����\n";
		cin >> y >> m;
		leap = ((y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)) ? 1 : 0);

		num = getMonth(m, leap);
		if (cin.good() == 0)
		{
			cout << "�����������������\n";
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
			cout << "��ݲ���ȷ������������\n";
		}
		else if (m < 1 || m>12)
		{
			cout << "�·ݲ���ȷ������������\n";
		}
		else {
			break;
		}
	}
	//������ȷ����ʼ��ӡ
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
