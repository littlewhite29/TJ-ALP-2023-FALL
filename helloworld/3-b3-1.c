////2051891 �Ź� ���ζ�
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	double n;
//	printf("������һ��[1..100��]�������\n");
//	scanf("%lf", &n);
//	printf("ʮ��λ : %d\n", (int)(n / 1000000000));
//	n -= (double)((int)(n / 1000000000)) * 1000000000;
//	printf("��λ   : %d\n", (int)(n / 100000000));
//	n -= (double)((int)(n / 100000000)) * 100000000;
//	printf("ǧ��λ : %d\n", (int)(n / 10000000));
//	n -= (double)((int)(n / 10000000)) * 10000000;
//	printf("����λ : %d\n", (int)(n / 1000000));
//	n -= (double)((int)(n / 1000000)) * 1000000;
//	printf("ʮ��λ : %d\n", (int)(n / 100000));
//	n -= (double)((int)(n / 100000)) * 100000;
//	printf("��λ   : %d\n", (int)(n / 10000));
//	n -= (double)((int)(n / 10000)) * 10000;
//	printf("ǧλ   : %d\n", (int)(n / 1000));
//	n -= (double)((int)(n / 1000)) * 1000;
//	printf("��λ   : %d\n", (int)(n / 100));
//	n -= (double)((int)(n / 100)) * 100;
//	printf("ʮλ   : %d\n", (int)(n / 10));
//	n -= (double)((int)(n / 10)) * 10;
//	printf("Բλ   : %d\n", (int)n);
//	n -= (double)((int)n);
//	printf("��λ   : %d\n", (int)(n * 10));
//	n -= (double)((int)(n * 10)) / 10;
//	printf("��λ   : %1.0f\n", n * 100);
//
//	return 0;
//}
