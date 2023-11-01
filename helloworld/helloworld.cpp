/* 2051891 黄治东 信管 */
#include <iostream>
#include <iomanip>
using namespace std;

/* ----具体要求----
   1、不允许添加其它头文件
   2、不允许定义全局变量、静态局部变量
   3、不允许添加其它函数
   4、main函数处理输入，允许循环
   --------------------------------------------------------------------- */

   /***************************************************************************
	 函数名称：
	 功    能：打印n层汉诺塔的移动顺序
	 输入参数：int n：层数
			   char src：起始柱
			   char tmp：中间柱
			   char dst：目标柱
	 返 回 值：
	 说    明：1、函数名、形参、返回类型均不准动
			   2、本函数不允许出现任何形式的循环
   ***************************************************************************/
void hanoi(int n, char src, char tmp, char dst)
{
	//首先判断是否为1
	if (n == 1)
	{
		cout << setw(2) << n << "# " << src << "-->" << dst << endl;
	}
	else
	{
		//若不为1将问题分治为n-1个盘从当前柱移动到中间柱
		hanoi(n - 1, src, dst, tmp);
		//然后将剩余一个盘移动到结束柱
		cout << setw(2) << n << "# " << src << "-->" << dst << endl;
		//最后再将n-1个盘从中间柱移动到结束柱
		hanoi(n - 1, tmp, src, dst);
	}
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：1、完成输入、调用递归函数
			2、处理输入错误时，允许使用循环
			3、为了统一检查，不再允许添加其它函数（输入起始/目标柱的代码不要求统一函数处理，均直接放在main中）
***************************************************************************/
int main()
{
	int n;//层数
	char src;//起始柱
	char dst;//目标柱
	char tmp;//中间柱
	int temp;//清除缓冲区的工具变量
	while (true)
	{
		cout << "请输入汉诺塔的层数(1-16)\n";
		cin >> n;
		if (n >= 1 && n <= 16)
		{
			break;
		}
		//无论输入是否正确都清空缓冲区
		cin.clear();
		while ((temp = getchar()) != '\n')
		{
			;
		}

	}
	//无论输入是否正确都清空缓冲区
	while ((temp = getchar()) != '\n')
	{
		;
	}
	while (true)
	{
		cout << "请输入起始柱(A-C)\n";
		if ((src = getchar()) >= 'A' && src <= 'C')
		{
			break;
		}
		else if (src >= 'a' && src <= 'c')
		{
			src -= 32;
			break;
		}

		//无论输入是否正确都清空缓冲区
		while ((temp = getchar()) != '\n')
		{
			;
		}
	}
	//无论输入是否正确都清空缓冲区
	while ((temp = getchar()) != '\n')
	{
		;
	}
	while (true)
	{
		cout << "请输入目标柱(A-C)\n";
		if ((dst = getchar()) == src || (dst == src + 32 && (dst -= 32)))
		{
			cout << "目标柱(" << dst << ")不能与起始柱(" << src << ")相同\n";
		}
		else if (dst >= 'A' && dst <= 'C')
		{
			tmp = 'A' + 'B' + 'C' - dst - src;
			break;
		}
		else if ((dst = dst - 32) >= 'A' && dst <= 'C')
		{
			tmp = 'A' + 'B' + 'C' - dst - src;
			break;
		}

		//无论输入是否正确都清空缓冲区
		while ((temp = getchar()) != '\n')
		{
			;
		}

	}
	cout << "移动步骤为:\n";
	hanoi(n, src, tmp, dst);

}