///* �Ź� 2051891 ���ζ� */
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
///* ----����Ҫ��----
//   1������������Ҫ��ͷ�ļ�
//   2������������ȫ�ֱ�������̬�ֲ�����
//   3��������������������
//   ---------------------------------------------------------------------
//*/
//
///***************************************************************************
//  �������ƣ�
//  ��    �ܣ���ƽ�����ĺ���������Ϊa��ƽ����
//  ���������
//  �� �� ֵ��
//  ˵    ����
// ***************************************************************************/
//double my_sqrt(double a)
//{
//	double result = a;
//	for (; fabs(result - (result + a / result) / 2) >= 1e-5; result = (result + a / result) / 2);
//	return result;
//}
//
///***************************************************************************
//  �������ƣ�
//  ��    �ܣ��ظ����룬ֱ��ȡ��double�ͷǸ����󷵻�
//  ���������
//  �� �� ֵ��
//  ˵    ������׼�޸ĺ��������������͡��β�
// ***************************************************************************/
//double input()
//{
//	while (1)
//	{
//		printf("������aֵ\n");
//		//int temp;
//		double n;
//		int ret = scanf("%lf", &n);
//		return n;
//		/*if (ret == 0)
//		{
//			while ((temp = getchar()) != '\n')
//			{
//				;
//			}
//			continue;
//		}
//		else
//		if (n >= 0)
//		{
//			return n;
//		}*/
//	}
//}
//
///***************************************************************************
//  �������ƣ�
//  ��    �ܣ�
//  ���������
//  �� �� ֵ��
//  ˵    ����ֻ�����޸�...����
// ***************************************************************************/
//int main()
//{
//	/* ��������Ҫ��ƽ�������� */
//	double a = input();
//	/* ������ƽ�����ĺ��� */
//	double d = my_sqrt(a);
//
//	/* �˴����ƽ��������䲻ȫ�������油�룩*/
//	printf("%.3lf��ƽ����=%.5lf\n", a, d);
//
//	return 0;
//}