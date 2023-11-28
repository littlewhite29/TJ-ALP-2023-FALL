///* 2051891 ���ζ� �Ź� */
//#include <iostream>
//#include <iomanip>
//#include <cstdio>
//#include <conio.h>
//#include <windows.h>
//#include "5-b7.h"
//#define Delay_millseconds 150
//using namespace std;
//
//
////ʹ��ȫ�ֱ�����¼ջ��ָ��
////int top[3] = { 0,0,0 };
//int top_a = 0, top_b = 0, top_c = 0;
////ʹ��ȫ������ģ��ջ
////int stack[3][10];
//int a[10], b[10], c[10];
////ʹ��ȫ�ֱ�����¼������
//int step = 0;
//
////��ʱ
//static int delay = 0;
////�Ƿ���ʾ�ڲ�����
//static int display_inner_array = 0;
//
////��ʾ�ڲ�����
//void print_hanoi()
//{
//	//cct_gotoxy(18, 25);
//	//int temp;
//	char name = 'A';
//	cout << setw(2) << name++ << ":";
//	for (int j = 0; j < 10; j++)
//	{
//		if (j < top_a)
//		{
//			cout << setw(2) << a[j];
//		}
//		else
//		{
//			cout << setw(2) << "";
//		}
//	}
//	cout << setw(2) << name++ << ":";
//	for (int j = 0; j < 10; j++)
//	{
//		if (j < top_b)
//		{
//			cout << setw(2) << b[j];
//		}
//		else
//		{
//			cout << setw(2) << "";
//		}
//	}
//	cout << setw(2) << name++ << ":";
//	for (int j = 0; j < 10; j++)
//	{
//		if (j < top_c)
//		{
//			cout << setw(2) << c[j];
//		}
//		else
//		{
//			cout << setw(2) << "";
//		}
//	}
//	cout << endl;
//
//}
////������ʱ
//void delay_control()
//{
//	int temp;
//	if (delay == 0)
//	{
//		while ((temp = _getch()) != 13)
//		{
//			;
//		}
//	}
//	else
//	{
//		Sleep(Delay_millseconds * (5 - delay));
//	}
//
//}
//
///*����ת�����ӵĺ���*/
////void transfer_hanoi(char src, char dst)
////{
////	int temp;
////	if (delay == 0)
////	{
////		while ((temp = _getch()) != 13)
////		{
////			;
////		}
////	}
////	else
////	{
////		Sleep(Delay_millseconds * delay);
////	}
////	//�洢ת�Ƶ�ת��
////	int tpl = 0;
////	//�洢ָ��
////	int top_in=0,top_out=0;
////	switch (src)
////	{
////		case 'A':
////			tpl= a[--top_a];
////			a[top_a] = 0;
////			tpl = top_a;
////			break;
////		case 'B':
////			tpl = b[--top_b];
////			b[top_b] = 0;
////			top_out = top_b;
////			break;
////		case 'C':
////			tpl = c[--top_c];
////			c[top_c] = 0;
////			top_out = top_c;
////			break;
////		default:
////			break;
////	}
////	switch (dst)
////	{
////		case 'A':
////			a[top_a++] = tpl;
////			top_in = top_a;
////			break;
////		case 'B':
////			b[top_b++] = tpl;
////			top_in = top_b;
////			break;
////		case 'C':
////			c[top_c++] = tpl;
////			top_in = top_c;
////			break;
////		default:
////			break;
////	}
////	cct_gotoxy((src - 'A') * 10 + 12, 19 - top_out);
////	cout << ' ';
////	cct_gotoxy((dst - 'A') * 10 + 12, 20 - top_in);
////	cout << tpl;
////}
///*��ʼ������*/
//void init_hanoi(char src, int n)
//{
//	switch (src)
//	{
//		case 'A':
//			for (int i = 0; i < n; i++)
//			{
//				a[i] = n - i;
//			}
//			top_a = n;
//			break;
//		case 'B':
//			for (int i = 0; i < n; i++)
//			{
//				b[i] = n - i;
//			}
//			top_b = n;
//			break;
//		case 'C':
//			for (int i = 0; i < n; i++)
//			{
//				c[i] = n - i;
//			}
//			top_c = n;
//			break;
//		default:
//			break;
//	}
//}
//
//
//
//void hanoi(int n, char src, char tmp, char dst)
//{
//	//�����ж��Ƿ�Ϊ1
//	if (n == 1)
//	{
//		//�������ջ
//		//�洢ת�Ƶ�ת��
//		int tpl = 0;
//		//�洢ָ��
//		int top_in = 0, top_out = 0;
//		switch (src)
//		{
//			case 'A':
//				tpl = a[--top_a];
//				a[top_a] = 0;
//				top_out = top_a;
//				break;
//			case 'B':
//				tpl = b[--top_b];
//				b[top_b] = 0;
//				top_out = top_b;
//				break;
//			case 'C':
//				tpl = c[--top_c];
//				c[top_c] = 0;
//				top_out = top_c;
//				break;
//			default:
//				break;
//		}
//		switch (dst)
//		{
//			case 'A':
//				a[top_a++] = tpl;
//				top_in = top_a;
//				break;
//			case 'B':
//				b[top_b++] = tpl;
//				top_in = top_b;
//				break;
//			case 'C':
//				c[top_c++] = tpl;
//				top_in = top_c;
//				break;
//			default:
//				break;
//		}
//		//�̶����λ��
//		step++;
//		cct_gotoxy(18, 25);
//		cout << "��" << setw(4) << step << "��";
//		cout << "(" << n << "#: " << src << "-->" << dst << ") ";
//		//��ӡջ
//		if (display_inner_array)
//		{
//			print_hanoi();
//			delay_control();
//		}
//		cct_gotoxy((src - 'A') * 10 + 12, 19 - top_out);
//		cout << ' ';
//		cct_gotoxy((dst - 'A') * 10 + 12, 20 - top_in);
//		cout << tpl;
//		delay_control();
//	}
//	else
//	{
//		//����Ϊ1���������Ϊn-1���̴ӵ�ǰ���ƶ����м���
//		hanoi(n - 1, src, dst, tmp);
//		//Ȼ��ʣ��һ�����ƶ�������
//		//�������ջ
//		//�洢ת�Ƶ�ת��
//		int tpl = 0;
//		//�洢ָ��
//		int top_in = 0, top_out = 0;
//		switch (src)
//		{
//			case 'A':
//				tpl = a[--top_a];
//				a[top_a] = 0;
//				top_out = top_a;
//				break;
//			case 'B':
//				tpl = b[--top_b];
//				b[top_b] = 0;
//				top_out = top_b;
//				break;
//			case 'C':
//				tpl = c[--top_c];
//				c[top_c] = 0;
//				top_out = top_c;
//				break;
//			default:
//				break;
//		}
//		switch (dst)
//		{
//			case 'A':
//				a[top_a++] = tpl;
//				top_in = top_a;
//				break;
//			case 'B':
//				b[top_b++] = tpl;
//				top_in = top_b;
//				break;
//			case 'C':
//				c[top_c++] = tpl;
//				top_in = top_c;
//				break;
//			default:
//				break;
//		}
//
//		//�̶����λ��
//		step++;
//		cct_gotoxy(18, 25);
//		cout << "��" << setw(4) << step << "��";
//		cout << "(" << n << "#: " << src << "-->" << dst << ") ";
//		//��ӡջ
//		if (display_inner_array)
//		{
//			print_hanoi();
//			delay_control();
//		}
//
//		cct_gotoxy((src - 'A') * 10 + 12, 19 - top_out);
//		cout << ' ';
//		cct_gotoxy((dst - 'A') * 10 + 12, 20 - top_in);
//		cout << tpl;
//
//		delay_control();
//		//����ٽ�n-1���̴��м����ƶ���������
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
//
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
//	int n;//����
//	char src;//��ʼ��
//	char dst;//Ŀ����
//	char tmp;//�м���
//	int temp;//����������Ĺ��߱���
//	while (true)
//	{
//		cout << "�����뺺ŵ���Ĳ���(1-10)\n";
//		cin >> n;
//		if (n >= 1 && n <= 10)
//		{
//			break;
//		}
//		//���������Ƿ���ȷ����ջ�����
//		cin.clear();
//		temp = clear_buffer();
//
//	}
//	//���������Ƿ���ȷ����ջ�����
//	temp = clear_buffer();
//	while (true)
//	{
//		cout << "��������ʼ��(A-C)\n";
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
//		//���������Ƿ���ȷ����ջ�����
//		temp = clear_buffer();
//	}
//	//���������Ƿ���ȷ����ջ�����
//	temp = clear_buffer();
//	while (true)
//	{
//		cout << "������Ŀ����(A-C)\n";
//		if ((dst = getchar()) == src || (dst == src + 32 && (dst -= 32)))
//		{
//			cout << "Ŀ����(" << dst << ")��������ʼ��(" << src << ")��ͬ\n";
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
//		//���������Ƿ���ȷ����ջ�����
//		temp = clear_buffer();
//
//	}
//	while (true)
//	{
//		cout << "�������ƶ��ٶ�(0-5: 0-���س�������ʾ 1-��ʱ� 5-��ʱ���)\n";
//		cin >> delay;
//		if (delay >= 0 && n <= 5)
//		{
//			break;
//		}
//		//���������Ƿ���ȷ����ջ�����
//		cin.clear();
//		temp = clear_buffer();
//	}
//	while (true)
//	{
//		cout << "�������Ƿ���ʾ�ڲ�����ֵ(0-����ʾ 1-��ʾ)\n";
//		cin >> display_inner_array;
//		if (display_inner_array == 0 || display_inner_array == 1)
//		{
//			break;
//		}
//		//���������Ƿ���ȷ����ջ�����
//		cin.clear();
//		temp = clear_buffer();
//	}
//	//��ʼ��ջ
//	init_hanoi(src, n);
//	//����,��ӡ��ʼֵ
//	cct_cls();
//	cout << "�� " << src << " �ƶ��� " << dst << "���� " << n << " �㣬��ʱ����Ϊ " << delay << "��" << (display_inner_array ? "" : "��") << "��ʾ�ڲ�����ֵ";
//
//
//	//��ӡ��ʼջ
//	cct_gotoxy(18, 25);
//	cout << "��ʼ:" << setw(15) << "";
//	if (display_inner_array)
//	{
//		print_hanoi();
//	}
//	//��ʱ
//	delay_control();
//	cct_gotoxy(10, 20);
//	cout << setfill('=') << setw(25) << "" << setfill(' ');
//	cct_gotoxy(3, 21);
//	//��ĸA����12��21��B����22��21��C����32��21
//	for (int i = 0; i < 3; i++)
//	{
//		cout << setw(10) << (char)('A' + i);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cct_gotoxy((src - 'A') * 10 + 12, 19 - i);
//		cout << n - i;
//	}
//	delay_control();
//	//��ʼת��
//	hanoi(n, src, tmp, dst);
//
//	cct_gotoxy(18, 31);
//	system("pause"); //���������ʾ��ͣ��ע�⣺ֻ�ʺ����ض��������ر������ĳ���Ӵ˾���÷�Ϊ0��
//	return 0;
//}
