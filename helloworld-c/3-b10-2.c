///* 信管 2051891 黄治东*/
//#include <stdio.h>
//#include <windows.h> //取系统时间
//
//int main()
//{
//	LARGE_INTEGER tick, begin, end;
//
//	QueryPerformanceFrequency(&tick);	//获得计数器频率
//	QueryPerformanceCounter(&begin);	//获得初始硬件计数器计数
//
//	/* 此处是你的程序开始 */
//	int goal = 1953, total = 0;
//	int _11, _12, _13, _21, _22, _23, _31, _32, _33;
//	for (int i = 123; i < 1000; i++)
//	{
//		_11 = (i % 1000) / 100;
//		_12 = (i % 100) / 10;
//		_13 = (i % 10) / 1;
//		if (_11 == 0 || _12 == 0 || _13 == 0)
//		{
//			continue;
//		}
//		else if (_11 == _12 || _11 == _13 || _12 == _13)
//		{
//			continue;
//		}
//		for (int j = i + 1; j < 1000; j++)
//		{
//			_21 = (j % 1000) / 100;
//			_22 = (j % 100) / 10;
//			_23 = (j % 10) / 1;
//			if (_21 == 0 || _22 == 0 || _23 == 0)
//			{
//				continue;
//			}
//			else if (_21 == _22 || _21 == _23 || _22 == _23)
//			{
//				continue;
//			}
//			else if (_11 == _21 || _11 == _22 || _11 == _23 || _12 == _21 || _12 == _22 || _12 == _23 || _13 == _21 || _13 == _22 || _13 == _23)
//			{
//				continue;
//			}
//			int k = goal - i - j;
//			if (k < i || k < j || k >= 1000)
//			{
//				continue;
//			}
//			_31 = (k % 1000) / 100;
//			_32 = (k % 100) / 10;
//			_33 = (k % 10) / 1;
//			if (_31 == 0 || _32 == 0 || _33 == 0)
//			{
//				continue;
//			}
//			else if (_31 == _32 || _31 == _33 || _32 == _33)
//			{
//				continue;
//			}
//			else if (_11 == _31 || _11 == _32 || _11 == _33 || _12 == _31 || _12 == _32 || _12 == _33 || _13 == _31 || _13 == _32 || _13 == _33)
//			{
//				continue;
//			}
//			else if (_21 == _31 || _21 == _32 || _21 == _33 || _22 == _31 || _22 == _32 || _22 == _33 || _23 == _31 || _23 == _32 || _23 == _33)
//			{
//				continue;
//			}
//			total++;
//			printf("No.%3d : %d+%d+%d=%d\n", total, i, j, k, goal);
//		}
//	}
//	printf("total=%d\n", total);
//	/* 此处是你的程序结束 */
//
//	QueryPerformanceCounter(&end);		//获得终止硬件计数器计数
//
//	printf("计数器频率 : %lldHz\n", tick.QuadPart);
//	printf("计数器计数 : %lld\n", end.QuadPart - begin.QuadPart);
//	printf("%.6f秒\n", (double)(end.QuadPart - begin.QuadPart) / tick.QuadPart);
//
//	return 0;
//}
