///* �Ź� 2051891 ���ζ� */
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdbool.h>
//#include <math.h>
////�ɰ���������Ҫ��ͷ�ļ�
//
//const char chnstr[] = "��Ҽ��������½��ƾ�"; /* ���������д "��" ~ "��" �ĵط���ֻ��������������ȡֵ */
//char result[256];  /* ��result�⣬�����������κ���ʽ��ȫ�ֱ��� */
//
///* --���������Ҫ�ĺ��� --*/
//void daxie(int num, int flag_of_zero,int length)
//{
//	if (num == 0)
//	{
//		if (flag_of_zero)
//		{
//			result[length] = chnstr[0];
//			result[length+1] = chnstr[1];
//		}
//	}
//	else
//	{
//		result[length] = chnstr[2*num];
//		result[length + 1] = chnstr[2*num+1];
//	}
//}
//
//void put_number(double n)
//{
//	double num = n;
//	int digit = 0;//��ǰλ����
//	int div = 1000000000;//������ʼ��:ʮ��
//	bool highest = true;
//	bool flag_of_zero = false;//�Ƿ��������㣬true�����0,false������
//	char mid_str[] = "Ǫ��ʰ�Ƿ�";
//	char end_str[] = "����Բ";
//
//	//��������ʼ��
//	int mid_count = 2;
//	int end_count = 0;
//	int length=0;
//
//	while (div != 0)
//	{
//		//״̬ת��
//		digit = (int)(num / div);
//		num -= (double)(digit)*div;
//		div /= 10;
//		//λ�����
//
//		//��׺���
//		if (digit != 0)
//		{
//			if (flag_of_zero == true && highest == false)
//			{
//				daxie(0, flag_of_zero,length);
//				length += 2;
//			}
//			daxie(digit, flag_of_zero,length);
//			length += 2;
//			flag_of_zero = false;
//			highest = false;
//			if (mid_count != 3)
//			{
//				result[length] = mid_str[2 * mid_count];
//				result[length + 1] = mid_str[2 * mid_count + 1];
//			}
//			else
//			{
//				result[length] = end_str[2 * end_count];
//				result[length + 1] = end_str[2 * end_count + 1];
//			}
//			length += 2;
//		}
//		else if (highest == false)
//		{
//			flag_of_zero = true;
//			if (mid_count == 3)
//			{
//				result[length] = end_str[2 * end_count];
//				result[length + 1] = end_str[2 * end_count + 1];
//				length += 2;
//			}
//		}
//
//		if (mid_count == 3)
//		{
//			flag_of_zero = false;
//			end_count++;
//		}
//		mid_count = (mid_count + 1) % 4;
//	}
//
//	num += 0.0001;//�������
//	mid_count = 3;
//	//��������С�����ж����
//	if (floor(100 * num) == 0)
//	{
//		if (highest == true)
//		{
//			daxie(0, true, length);//�����
//			length += 2;
//			result[length] = end_str[4];
//			result[length + 1] = end_str[5];
//			length += 2;
//		}
//		highest = true;
//		char temp[] = "��";
//		result[length] = temp[0];
//		result[length + 1] = temp[1];
//		length += 2;
//	}
//
//	flag_of_zero = false;
//
//	//--------------------------------�������ֵ��˽���-----------------------------------------------
//	//����ת����
//	div = 10;
//
//	//״̬ת��
//	digit = (int)(num * div);
//	num -= (double)(digit) / div;
//	div *= 10;
//	//λ�����
//	daxie(digit, flag_of_zero, length);
//	length += 2;
//	//��׺���
//	if (digit != 0)
//	{
//		flag_of_zero = false;
//		highest = false;
//		result[length] = mid_str[2 * mid_count];
//		result[length + 1] = mid_str[2 * mid_count + 1];
//		length += 2;
//	}
//	else if (highest == false)
//	{
//		highest = true;
//		daxie(0, true, length);
//		length += 2;
//	}
//
//
//	//״̬ת��
//	mid_count++;
//	digit = (int)round(100 * num);
//	num -= (double)(digit) / div;
//	div *= 10;
//	//λ�����
//	daxie(digit, flag_of_zero, length);
//	length += 2;
//	//��׺���
//	if (digit != 0)
//	{
//		flag_of_zero = true;
//		highest = false;
//		result[length] = mid_str[2 * mid_count];
//		result[length + 1] = mid_str[2 * mid_count + 1];
//		length += 2;
//	}
//	else if (highest == false)
//	{
//		char temp[] = "��";
//		result[length] = temp[0];
//		result[length + 1] = temp[1];
//		length += 2;
//	}
//}
//
///***************************************************************************
//  �������ƣ�
//  ��    �ܣ�
//  ���������
//  �� �� ֵ��
//  ˵    ����
//***************************************************************************/
//int main()
//{
//    /* --���������Ҫ������ --*/
//	double n;
//	printf("������[0-100��)֮�������:\n");
//	scanf("%lf", &n);
//	printf("��д�����:\n");
//	put_number(n);
//
//    printf("%s\n", result);  /* ת���õ��Ĵ�д�����ֻ�����ñ��������������ط����������κ���ʽ�Դ�д�������ȫ��/������� */
//    return 0;
//}
