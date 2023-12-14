///* 2051891 黄治东 信管 */
//#include <iostream>
//using namespace std;
//
//#define  N  10	/* 假设最多转换10个数字 */
//
///* 不允许再定义其它函数、全局变量 */
//
//int main()
//{
//	/* 如果有不需要的变量，允许删除，但不允许添加或替换为其它类型的变量 */
//	char str[256], * p;
//	int  a[N] = { 0 }, * pnum, * pa;
//	bool is_num;
//
//	/* 上面的定义不准动(删除不需要的变量除外)，下面为程序的具体实现，要求不得再定义任何变量、常量、常变量 */
//	cout << "请输入间隔含有若干正负数字的字符串\n";
//	gets_s(str, 255);
//	is_num = true;
//	p = str;
//	pa = a;
//	pnum = a;
//	pnum++;
//	//cout << "循环\n";
//	while (true)
//	{
//		if (*p >= '0' && *p <= '9')
//		{
//			*pa = *p - '0';
//			while (true)
//			{
//				p++;
//				if (*p >= '0' && *p <= '9')
//				{
//					*pa = *pa * 10 + *p - '0';
//				}
//				else
//				{
//					break;
//				}
//			}
//			if ((pnum - a) < N - 1)
//			{
//				pnum++;
//				pa++;
//			}
//			else
//			{
//				pa++;
//			}
//		}
//
//		if (*p == '\0' || pnum == pa)
//		{
//			if (pnum == pa)
//			{
//				*str = 10;
//			}
//			else
//			{
//				*str = pa - a;
//			}
//			cout << "共有" << (int)*str << "个整数\n";
//			break;
//		}
//		p++;
//	}
//
//	pa = a;
//	//cout << "输出\n";
//	while (pa - a != *str)
//	{
//		cout << *pa << ' ';
//		pa++;
//	}
//	cout << endl;
//	return 0;
//}
