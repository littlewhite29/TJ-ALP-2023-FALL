///* 2051891 ���ζ� �Ź� */
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <conio.h>
//#include <time.h>
//#include <windows.h>
//
//const int MAX_X = 69;	//����*��ɵı߿�Ŀ��
//const int MAX_Y = 17;	//����*��ɵı߿�ĸ߶�
//
///***************************************************************************
//  �������ƣ�
//  ��    �ܣ������system("cls")һ���Ĺ��ܣ���Ч�ʸ�
//  ���������
//  �� �� ֵ��
//  ˵    �������������Ļ���������������ǿɼ���������(ʹ�õ�ǰ��ɫ)
//***************************************************************************/
//void cls(const HANDLE hout)
//{
//	COORD coord = { 0, 0 };
//	CONSOLE_SCREEN_BUFFER_INFO binfo; /* to get buffer info */
//	DWORD num;
//
//	/* ȡ��ǰ��������Ϣ */
//	GetConsoleScreenBufferInfo(hout, &binfo);
//	/* ����ַ� */
//	FillConsoleOutputCharacter(hout, (TCHAR)' ', binfo.dwSize.X * binfo.dwSize.Y, coord, &num);
//	/* ������� */
//	FillConsoleOutputAttribute(hout, binfo.wAttributes, binfo.dwSize.X * binfo.dwSize.Y, coord, &num);
//
//	/* ���ص�(0,0) */
//	SetConsoleCursorPosition(hout, coord);
//	return;
//}
//
///***************************************************************************
//  �������ƣ�gotoxy
//  ��    �ܣ�������ƶ���ָ��λ��
//  ���������HANDLE hout������豸���
//			int X      ��ָ��λ�õ�x����
//			int Y      ��ָ��λ�õ�y����
//  �� �� ֵ����
//  ˵    �����˺�����׼�޸�
//***************************************************************************/
//void gotoxy(const HANDLE hout, const int X, const int Y)
//{
//	COORD coord;
//	coord.X = X;
//	coord.Y = Y;
//	SetConsoleCursorPosition(hout, coord);
//}
//
///***************************************************************************
//  �������ƣ�showch
//  ��    �ܣ���ָ��λ�ô���ӡһ��ָ�����ַ�
//  ���������HANDLE hout������豸���
//			int X      ��ָ��λ�õ�x����
//			int Y      ��ָ��λ�õ�y����
//			char ch    ��Ҫ��ӡ���ַ�
//  �� �� ֵ����
//  ˵    �����˺�����׼�޸�
//***************************************************************************/
//void showch(const HANDLE hout, const int X, const int Y, const char ch)
//{
//	gotoxy(hout, X, Y);
//	putchar(ch);
//}
//
///***************************************************************************
//  �������ƣ�init_border
//  ��    �ܣ���ʾ��ʼ�ı߿�����ַ�
//  ���������HANDLE hout������豸���
//  �� �� ֵ����
//  ˵    �����˺�����׼�޸�
//***************************************************************************/
//void init_border(const HANDLE hout)
//{
//	gotoxy(hout, 0, 0);	//����ƻ����Ͻ�(0,0)
//	printf("***********************************************************************\n");
//	printf("*                                                                     *\n");
//	printf("*                                                                     *\n");
//	printf("*                                                                     *\n");
//	printf("*                                                                     *\n");
//	printf("*                                                                     *\n");
//	printf("*                                                                     *\n");
//	printf("*                                                                     *\n");
//	printf("*                                                                     *\n");
//	printf("*                                                                     *\n");
//	printf("*                                                                     *\n");
//	printf("*                                                                     *\n");
//	printf("*                                                                     *\n");
//	printf("*                                                                     *\n");
//	printf("*                                                                     *\n");
//	printf("*                                                                     *\n");
//	printf("*                                                                     *\n");
//	printf("*                                                                     *\n");
//	printf("***********************************************************************\n");
//
//	/* �����ʾ20����д��ĸ����ĸ��ֵ��XY���궼�����ʾ
//	   rand()�����Ĺ��ܣ��������һ���� 0-32767 ֮�������
//	   ˼������ʲô����£��������ѭ��ִ�����ɺ��㿴����ʵ����ĸ��������20���� */
//	int i;
//	for (i = 0; i < 20; i++)
//		showch(hout, rand() % MAX_X + 1, rand() % MAX_Y + 1, 'A' + rand() % 26);
//
//	return;
//}
//
///* -- �������ӵ����ɺ������Է��ڴ˴� --*/
//
///***************************************************************************
//  �������ƣ�move
//  ��    �ܣ������������ʹ����ƶ�
//  ���������HANDLE hout������豸���
//			char ch    ��Ҫ��ӡ���ַ�
//			int type	   : ����ģʽ
//  �� �� ֵ��void
//  ˵    ����main���������ڳ�ʼ��ʾ�����԰���ĿҪ��ȫ���Ʒ���д
//***************************************************************************/
//void move(const HANDLE hout, char type)
//{
//	int x = 35, y = 8;
//	gotoxy(hout, x, y);
//	char up, down, left, right;
//	if (type == '1' || type == '2' || type == '5' || type == '6')
//	{
//		up = 'I';
//		down = 'K';
//		left = 'J';
//		right = 'L';
//	}
//	else
//	{
//		up = 72;
//		down = 80;
//		left = 75;
//		right = 77;
//	}
//	int border_type = 0;//�����߽���ֹͣ���ǻ���
//	if (type == '2' || type == '4' || type == '6')
//	{
//		border_type = 1;
//	}
//	int alphabet = 0;//�Ƿ�ʹ����ĸ������
//	if (type == '1' || type == '2' || type == '5' || type == '6')
//	{
//		alphabet = 1;
//	}
//	int disable_left_arrow_key = 0;//�Ƿ���������
//	if (type == '5' || type == '6')
//	{
//		disable_left_arrow_key = 1;
//	}
//	char ch;
//	while (1)
//	{
//		ch = _getch();
//		if (ch == 'q' || ch == 'Q')
//		{
//			break;
//		}
//		else if (ch == ' ')
//		{
//			showch(hout, x, y, ' ');
//			gotoxy(hout, x, y);
//		}
//		if (alphabet == 0)
//		{
//			//printf("%d\n", ch);
//			if (ch == -32)
//			{
//				ch = _getch();
//			}
//			else
//			{
//				continue;
//			}
//		}
//		if (disable_left_arrow_key)
//		{
//			if (ch == -32)
//			{
//				ch = _getch();
//				continue;
//			}
//		}
//		if (ch == up || (alphabet == 1 && ch == up + 32))
//		{
//			if (y > 1)
//			{
//				gotoxy(hout, x, y -= 1);
//			}
//			else if (border_type == 1)
//			{
//				gotoxy(hout, x, y = 17);
//			}
//		}
//		else if (ch == down || (alphabet == 1 && ch == down + 32))
//		{
//			if (y < 17)
//			{
//				gotoxy(hout, x, y += 1);
//			}
//			else if (border_type == 1)
//			{
//				gotoxy(hout, x, y = 1);
//			}
//		}
//		else if (ch == right || (alphabet == 1 && ch == right + 32))
//		{
//			if (x < 69)
//			{
//				gotoxy(hout, x += 1, y);
//			}
//			else if (border_type == 1)
//			{
//				gotoxy(hout, x = 1, y);
//			}
//		}
//		else if (ch == left || (alphabet == 1 && ch == left + 32))
//		{
//			if (x > 1)
//			{
//				gotoxy(hout, x -= 1, y);
//			}
//			else if (border_type == 1)
//			{
//				gotoxy(hout, x = 69, y);
//			}
//		}
//	}
//}
//
///***************************************************************************
//  �������ƣ�menu
//  ��    �ܣ���ʾ�˵�������ѡ�����
//  ���������
//  �� �� ֵ��char
//  ˵    ����main���������ڳ�ʼ��ʾ�����԰���ĿҪ��ȫ���Ʒ���д
//***************************************************************************/
//char menu()
//{
//	/*�˵���ʼ��*/
//	printf("1.��I��J��K��L��������������(��Сд���ɣ��߽�ֹͣ\n");
//	printf("2.��I��J��K��L��������������(��Сд���ɣ��߽����)\n");
//	printf("3.�ü�ͷ�������������ң��߽�ֹͣ\n");
//	printf("4.�ü�ͷ�������������ң��߽����\n");
//	printf("5.��I��J��K��L��������������(��Сд���ɣ��߽�ֹͣ)(�����ͷ���ƶ�)\n");
//	printf("6.��I��J��K��L��������������(��Сд���ɣ��߽����)(�����ͷ���ƶ�)\n");
//	printf("0.�˳�\n");
//	printf("[��ѡ��0 - 6] ");
//	//int ret = scanf("%d", &type);
//	return _getche();
//}
//int main()
//{
//	const HANDLE hout = GetStdHandle(STD_OUTPUT_HANDLE); //ȡ��׼����豸��Ӧ�ľ��
//
//	/* ����α����������ӣ�ֻ���ڳ���ʼʱִ��һ�μ��� */
//	srand((unsigned int)(time(0)));
//	while (1)
//	{
//		/* �˾�������ǵ���ϵͳ��cls�������� */
//		cls(hout);
//
//
//		char type = menu();
//		/*if (ret == 0)
//		{
//			scanf("%*[^\n]");
//			continue;
//		}
//		else*/
//		if (type < '0' || type>'6')
//		{
//			continue;
//		}
//		else if (type == '0')
//		{
//			break;
//		}
//		cls(hout);
//		/* ��ʾ��ʼ�ı߿����е�����ַ� */
//		init_border(hout);
//
//		//��ͣ
//		move(hout, type);
//		gotoxy(hout, 0, 23);
//		//��ͣ(�˴���ҵҪ����ֻ�ܰ��س��˳���Ŀǰ��getcharʾ���������������+�س��˳�������������������Ļ��)
//		printf("��Ϸ���������س������ز˵�.\n");
//		int ch = 0;
//		while ((ch = _getch()) != 13)
//		{
//			;
//		}
//
//	}
//
//
//	return 0;
//}
