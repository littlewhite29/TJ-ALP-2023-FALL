///* �Ź� 2051891 ���ζ� */
//#include <iostream>
//#include <string>
////�ɰ���������Ҫ��ͷ�ļ�
//using namespace std;
//
//const char chnstr[] = "��Ҽ��������½��ƾ�"; /* ���������д "��" ~ "��" �ĵط���ֻ��������������ȡֵ */
//string result;  /* ��result�⣬�����������κ���ʽ��ȫ�ֱ��� */
//
///* --���������Ҫ�ĺ��� --*/
//void daxie(int num, int flag_of_zero)
//{
//	if (num == 0)
//	{
//		if (flag_of_zero)
//		{
//			char str[] = { chnstr[0],chnstr[1],'\0' };
//			result = result + str;
//		}
//	}
//	else
//	{
//		char str[] = { chnstr[2 * num],chnstr[2 * num + 1],'\0' };
//		result = result + str;
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
//				daxie(0, flag_of_zero);
//			}
//			daxie(digit, flag_of_zero);
//			flag_of_zero = false;
//			highest = false;
//			if (mid_count != 3)
//			{
//				char str[] = { mid_str[2 * mid_count],mid_str[2 * mid_count + 1],'\0' };
//				result = result + str;
//			}
//			else
//			{
//				char str[] = { end_str[2 * end_count],end_str[2 * end_count + 1],'\0' };
//				result = result + str;
//			}
//		}
//		else if (highest == false)
//		{
//			flag_of_zero = true;
//			if (mid_count == 3)
//			{
//				char str[] = { end_str[2 * end_count],end_str[2 * end_count + 1],'\0' };
//				result = result + str;
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
//			daxie(0, true);//�����
//			char str[] = { end_str[4],end_str[5],'\0' };
//			result = result + str;
//		}
//		highest = true;
//		result += "��";
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
//	daxie(digit, flag_of_zero);
//	//��׺���
//	if (digit != 0)
//	{
//		flag_of_zero = false;
//		highest = false;
//		char str[] = { mid_str[2 * mid_count],mid_str[2 * mid_count + 1],'\0' };
//		result = result + str;
//	}
//	else if (highest == false)
//	{
//		highest = true;
//		daxie(0, true);
//	}
//
//
//	//״̬ת��
//	mid_count++;
//	digit = (int)round(100 * num);
//	num -= (double)(digit) / div;
//	div *= 10;
//	//λ�����
//	daxie(digit, flag_of_zero);
//	//��׺���
//	if (digit != 0)
//	{
//		flag_of_zero = true;
//		highest = false;
//		char str[] = { mid_str[2 * mid_count],mid_str[2 * mid_count + 1],'\0' };
//		result = result + str;
//	}
//	else if (highest == false)
//	{
//		result += "��";
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
//	/* --���������Ҫ������ --*/
//	double n;
//	cout << "������[0-100��)֮�������:" << endl;
//	cin >> n;
//	cout << "��д�����:" << endl;
//
//	put_number(n);
//	cout << result << endl;  /* ת���õ��Ĵ�д�����ֻ�����ñ��������������ط����������κ���ʽ�Դ�д�������ȫ��/������� */
//	return 0;
//}