////2051891 信管 黄治东
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	double n;
//	printf("请输入一个[1..100亿]间的数字\n");
//	scanf("%lf", &n);
//	printf("十亿位 : %d\n", (int)(n / 1000000000));
//	n -= (double)((int)(n / 1000000000)) * 1000000000;
//	printf("亿位   : %d\n", (int)(n / 100000000));
//	n -= (double)((int)(n / 100000000)) * 100000000;
//	printf("千万位 : %d\n", (int)(n / 10000000));
//	n -= (double)((int)(n / 10000000)) * 10000000;
//	printf("百万位 : %d\n", (int)(n / 1000000));
//	n -= (double)((int)(n / 1000000)) * 1000000;
//	printf("十万位 : %d\n", (int)(n / 100000));
//	n -= (double)((int)(n / 100000)) * 100000;
//	printf("万位   : %d\n", (int)(n / 10000));
//	n -= (double)((int)(n / 10000)) * 10000;
//	printf("千位   : %d\n", (int)(n / 1000));
//	n -= (double)((int)(n / 1000)) * 1000;
//	printf("百位   : %d\n", (int)(n / 100));
//	n -= (double)((int)(n / 100)) * 100;
//	printf("十位   : %d\n", (int)(n / 10));
//	n -= (double)((int)(n / 10)) * 10;
//	printf("圆位   : %d\n", (int)n);
//	n -= (double)((int)n);
//	printf("角位   : %d\n", (int)(n * 10));
//	n -= (double)((int)(n * 10)) / 10;
//	printf("分位   : %1.0f\n", n * 100);
//
//	return 0;
//}
