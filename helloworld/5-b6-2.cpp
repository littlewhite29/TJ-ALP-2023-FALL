///* 2051891 黄治东 信管 */
//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//
////使用全局变量记录栈顶指针
//int top[3] = { 0,0,0 };
////使用全局数组模拟栈
//int stack[3][10];
////使用全局变量记录步骤数
//int step = 0;
//
//void print_hanoi()
//{
//
//	for (int i = 0; i < 3; i++)
//	{
//		char name = 'A' + i;
//		cout << setw(2) << name << ":";
//		for (int j = 0; j < 10; j++)
//		{
//			if (j < top[i])
//			{
//				cout << setw(2) << stack[i][j];
//			}
//			else
//			{
//				cout << setw(2) << "";
//			}
//		}
//	}
//	cout << endl;
//}
///*用于转移盘子的函数*/
//void transfer_hanoi(char src, char dst)
//{
//	//存储转移的转盘
//	int temp = 0;
//	int source = src - 'A';
//	int destination = dst - 'A';
//
//	temp = stack[source][--top[source]];
//	stack[destination][top[destination]++] = temp;
//}
///*初始化函数*/
//void init_hanoi(char src, int n)
//{
//	int source = src - 'A';
//	for (int i = 0; i < n; i++)
//	{
//		stack[source][i] = n - i;
//	}
//	top[source] = n;
//}
//
//
//
//void hanoi(int n, char src, char tmp, char dst)
//{
//	//首先判断是否为1
//	if (n == 1)
//	{
//		step++;
//		cout << "第" << setw(4) << step << " 步";
//		cout << "(" << setw(2) << n << "): " << src << "-->" << dst;
//		//处理进出栈
//		transfer_hanoi(src, dst);
//		//打印栈
//		print_hanoi();
//	}
//	else
//	{
//		//若不为1将问题分治为n-1个盘从当前柱移动到中间柱
//		hanoi(n - 1, src, dst, tmp);
//		//然后将剩余一个盘移动到结束柱
//		step++;
//		cout << "第" << setw(4) << step << " 步";
//		cout << "(" << setw(2) << n << "): " << src << "-->" << dst;
//		//处理进出栈
//		transfer_hanoi(src, dst);
//		//打印栈
//		print_hanoi();
//		//最后再将n-1个盘从中间柱移动到结束柱
//		hanoi(n - 1, tmp, src, dst);
//	}
//}
//
//int clear_buffer()
//{
//	static int temp;
//	while ((temp = getchar()) != '\n')
//	{
//		;
//	}
//	return temp;
//}
//
//int main()
//{
//	int n;//层数
//	char src;//起始柱
//	char dst;//目标柱
//	char tmp;//中间柱
//	int temp;//清除缓冲区的工具变量
//	while (true)
//	{
//		cout << "请输入汉诺塔的层数(1-10)\n";
//		cin >> n;
//		if (n >= 1 && n <= 16)
//		{
//			break;
//		}
//		//无论输入是否正确都清空缓冲区
//		cin.clear();
//		temp = clear_buffer();
//
//	}
//	//无论输入是否正确都清空缓冲区
//	temp = clear_buffer();
//	while (true)
//	{
//		cout << "请输入起始柱(A-C)\n";
//		if ((src = getchar()) >= 'A' && src <= 'C')
//		{
//			break;
//		}
//		else if (src >= 'a' && src <= 'c')
//		{
//			src -= 32;
//			break;
//		}
//
//		//无论输入是否正确都清空缓冲区
//		temp = clear_buffer();
//	}
//	//无论输入是否正确都清空缓冲区
//	temp = clear_buffer();
//	while (true)
//	{
//		cout << "请输入目标柱(A-C)\n";
//		if ((dst = getchar()) == src || (dst == src + 32 && (dst -= 32)))
//		{
//			cout << "目标柱(" << dst << ")不能与起始柱(" << src << ")相同\n";
//		}
//		else if (dst >= 'A' && dst <= 'C')
//		{
//			tmp = 'A' + 'B' + 'C' - dst - src;
//			break;
//		}
//		else if ((dst = dst - 32) >= 'A' && dst <= 'C')
//		{
//			tmp = 'A' + 'B' + 'C' - dst - src;
//			break;
//		}
//
//		//无论输入是否正确都清空缓冲区
//		temp = clear_buffer();
//
//	}
//	//初始化栈
//	init_hanoi(src, n);
//	//打印初始栈
//	cout << "初始:" << setw(15) << "";
//	//print_hanoi();
//	print_hanoi();
//	//开始转移
//	hanoi(n, src, tmp, dst);
//
//}
