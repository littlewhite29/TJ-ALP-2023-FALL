///* 信管 2051891 黄治东 */
//#include <iostream>
//using namespace std;
//
///* ----具体要求----
//   1、不允许添加其它头文件
//   2、不允许定义全局变量、静态局部变量（全局只读变量或宏定义不受此限制）
//   3、不允许添加其它函数
//   ---------------------------------------------------------------------
//*/
//
//#define		N		2000
//
//#define		END_NUM		-1
//
///***************************************************************************
//  函数名称：
//  功    能：向数组array中输入n个正整数，以-1结束
//  输入参数：
//  返 回 值：
//  说    明：input函数中不允许使用全局宏定义N
//***************************************************************************/
//void input(int* array, const int n)
//{
//	int* p;  //本函数只允许定义这一个指针变量，不再允许定义任何形式的变量
//
//	/* 函数的实现部分，不允许任何形式的[]出现 */
//	for (p = array; (p - array) < n; *(++p) = -1)
//	{
//		cin >> *p;
//		if (*p == -1)
//		{
//			break;
//		}
//	}
//}
//
///***************************************************************************
//  函数名称：
//  功    能：将数组array中的正整数依次输出，每n个一行，不包含最后的-1
//  输入参数：
//  返 回 值：
//  说    明：output函数中不允许使用全局宏定义N
//***************************************************************************/
//void output(int* array, const int n)
//{
//	int* p;  //本函数只允许定义这一个指针变量，不再允许定义任何形式的变量
//
//	/* 函数的实现部分，不允许任何形式的[]出现 */
//	for (p = array; *p != -1; p++)
//	{
//		cout << *p << ' ';
//		if ((p - array) % n == n - 1)
//		{
//			cout << endl;
//		}
//	}
//	if ((p - array) % n != n - 1)
//	{
//		cout << endl;
//	}
//}
//
///***************************************************************************
//  函数名称：
//  功    能：数组顺序调整
//  输入参数：
//  返 回 值：
//  说    明：
//***************************************************************************/
//void adjust(int* array)
//{
//	/* 除这四个变量外，本函数不再允许定义任何形式的变量
//		 如果不用，允许删除，但不得增加或替换为其它形式的变量
//		包括for(int i=0; )形式的新变量定义同样禁止 */
//	int k, t, * p1, * p2;
//
//	/* 函数的实现部分，不允许任何形式的[]出现 */
//	for (p1 = array; *p1 != -1; p1++)
//	{
//		for (p2 = p1; *p2 != -1; p2++)
//		{
//			k = *p2;
//			t = *p1;
//			if (k % 10 < t % 10)
//			{
//				*p1 = k;
//				*p2 = t;
//			}
//		}
//	}
//
//
//}
//
///***************************************************************************
//  函数名称：
//  功    能：
//  输入参数：
//  返 回 值：
//  说    明：main函数不准动
//***************************************************************************/
//int main(int argc, char** argv)
//{
//	int a[N + 1];
//
//	cout << "请输入数组各元素,以" << END_NUM << "结束(不含" << END_NUM << "最多" << N << "个数)" << endl;
//	input(a, N);
//
//	cout << "数组的内容为" << endl;
//	output(a, 15); //第2个参数n,表示每n个换行（5-25之间，不考虑n错误）
//
//	adjust(a);
//	cout << "调整后数组的内容为" << endl;
//	output(a, 10); //第2个参数n,表示每n个换行（5-25之间，不考虑n错误）
//
//	return 0;
//}