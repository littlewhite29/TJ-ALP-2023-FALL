/* 2051891 黄治东 信管 */
#include <iostream>
#include <iomanip>
using namespace std;

void print_triangle(int line)
{
	int num[13][13];
	num[0][0] = 1;
	for (int i = 0; i < line; i++)
	{
		num[i][0] = 1;
		for (int j = 1; j < i; j++)\
		{
			num[i][j] = num[i - 1][j-1] + num[i-1][j];
		}
		num[i][i] = 1;
	}

	for (int i = 0; i < line; i++)
	{
		for (int j = 0;j<=i;j++)
		{
			cout << setw(6) << num[i][j];
		}
		cout << endl;
	}
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：只给出了上下标尺，其它均需要自己补充
***************************************************************************/
int main()
{
	int line;
	cout << "请输入要打印的行数[3..13]\n";
	cin >> line;

	/* 上标尺 */
	cout << "--------------------------------------------------------------------------------" << endl;
	cout << "0         1         2         3         4         5         6         7         " << endl;
	cout << "01234567890123456789012345678901234567890123456789012345678901234567890123456789" << endl;
	cout << "--------------------------------------------------------------------------------" << endl;

	print_triangle(line);
	/* 下标尺 */
	cout << "--------------------------------------------------------------------------------" << endl;
	cout << "01234567890123456789012345678901234567890123456789012345678901234567890123456789" << endl;
	cout << "0         1         2         3         4         5         6         7         " << endl;
	cout << "--------------------------------------------------------------------------------" << endl;
	cout << endl;

	return 0;
}
