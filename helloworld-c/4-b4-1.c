///* 2051891 黄治东 信管 */
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <conio.h>
//#include <time.h>
//#include <windows.h>
//
//const int MAX_X = 69;	//定义*组成的边框的宽度
//const int MAX_Y = 17;	//定义*组成的边框的高度
//
///***************************************************************************
//  函数名称：
//  功    能：完成与system("cls")一样的功能，但效率高
//  输入参数：
//  返 回 值：
//  说    明：清除整个屏幕缓冲区，不仅仅是可见窗口区域(使用当前颜色)
//***************************************************************************/
//void cls(const HANDLE hout)
//{
//	COORD coord = { 0, 0 };
//	CONSOLE_SCREEN_BUFFER_INFO binfo; /* to get buffer info */
//	DWORD num;
//
//	/* 取当前缓冲区信息 */
//	GetConsoleScreenBufferInfo(hout, &binfo);
//	/* 填充字符 */
//	FillConsoleOutputCharacter(hout, (TCHAR)' ', binfo.dwSize.X * binfo.dwSize.Y, coord, &num);
//	/* 填充属性 */
//	FillConsoleOutputAttribute(hout, binfo.wAttributes, binfo.dwSize.X * binfo.dwSize.Y, coord, &num);
//
//	/* 光标回到(0,0) */
//	SetConsoleCursorPosition(hout, coord);
//	return;
//}
//
///***************************************************************************
//  函数名称：gotoxy
//  功    能：将光标移动到指定位置
//  输入参数：HANDLE hout：输出设备句柄
//			int X      ：指定位置的x坐标
//			int Y      ：指定位置的y坐标
//  返 回 值：无
//  说    明：此函数不准修改
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
//  函数名称：showch
//  功    能：在指定位置处打印一个指定的字符
//  输入参数：HANDLE hout：输出设备句柄
//			int X      ：指定位置的x坐标
//			int Y      ：指定位置的y坐标
//			char ch    ：要打印的字符
//  返 回 值：无
//  说    明：此函数不准修改
//***************************************************************************/
//void showch(const HANDLE hout, const int X, const int Y, const char ch)
//{
//	gotoxy(hout, X, Y);
//	putchar(ch);
//}
//
///***************************************************************************
//  函数名称：init_border
//  功    能：显示初始的边框及随机字符
//  输入参数：HANDLE hout：输出设备句柄
//  返 回 值：无
//  说    明：此函数不准修改
//***************************************************************************/
//void init_border(const HANDLE hout)
//{
//	gotoxy(hout, 0, 0);	//光标移回左上角(0,0)
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
//	/* 随机显示20个大写字母，字母的值、XY坐标都随机显示
//	   rand()函数的功能：随机生成一个在 0-32767 之间的整数
//	   思考：在什么情况下，下面这个循环执行生成后，你看到的实际字母个数不足20个？ */
//	int i;
//	for (i = 0; i < 20; i++)
//		showch(hout, rand() % MAX_X + 1, rand() % MAX_Y + 1, 'A' + rand() % 26);
//
//	return;
//}
//
///* -- 按需增加的若干函数可以放在此处 --*/
//
///***************************************************************************
//  函数名称：move
//  功    能：处理键盘输入使光标移动
//  输入参数：HANDLE hout：输出设备句柄
//			char ch    ：要打印的字符
//			int type	   : 输入模式
//  返 回 值：void
//  说    明：main函数仅用于初始演示，可以按题目要求全部推翻重写
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
//	int border_type = 0;//触及边界是停止还是回绕
//	if (type == '2' || type == '4' || type == '6')
//	{
//		border_type = 1;
//	}
//	int alphabet = 0;//是否使用字母来操作
//	if (type == '1' || type == '2' || type == '5' || type == '6')
//	{
//		alphabet = 1;
//	}
//	int disable_left_arrow_key = 0;//是否禁用左方向键
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
//  函数名称：menu
//  功    能：显示菜单，返回选择的项
//  输入参数：
//  返 回 值：char
//  说    明：main函数仅用于初始演示，可以按题目要求全部推翻重写
//***************************************************************************/
//char menu()
//{
//	/*菜单初始化*/
//	printf("1.用I、J、K、L键控制上下左右(大小写均可，边界停止\n");
//	printf("2.用I、J、K、L键控制上下左右(大小写均可，边界回绕)\n");
//	printf("3.用箭头键控制上下左右，边界停止\n");
//	printf("4.用箭头键控制上下左右，边界回绕\n");
//	printf("5.用I、J、K、L键控制上下左右(大小写均可，边界停止)(按左箭头不移动)\n");
//	printf("6.用I、J、K、L键控制上下左右(大小写均可，边界回绕)(按左箭头不移动)\n");
//	printf("0.退出\n");
//	printf("[请选择0 - 6] ");
//	//int ret = scanf("%d", &type);
//	return _getche();
//}
//int main()
//{
//	const HANDLE hout = GetStdHandle(STD_OUTPUT_HANDLE); //取标准输出设备对应的句柄
//
//	/* 生成伪随机数的种子，只需在程序开始时执行一次即可 */
//	srand((unsigned int)(time(0)));
//	while (1)
//	{
//		/* 此句的作用是调用系统的cls命令清屏 */
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
//		/* 显示初始的边框及其中的随机字符 */
//		init_border(hout);
//
//		//暂停
//		move(hout, type);
//		gotoxy(hout, 0, 23);
//		//暂停(此处作业要求是只能按回车退出，目前的getchar示例，是允许按任意键+回车退出，且任意键会出现在屏幕上)
//		printf("游戏结束，按回车键返回菜单.\n");
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
