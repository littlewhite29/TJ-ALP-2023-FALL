/* �Ź� 2051891 ���ζ� */
#include <iostream>
#include <iomanip>
#include "cmd_console_tools.h"
#include "mine_sweeper.h"
#include <conio.h>

using namespace std;
int mine_sweeper_menu()
{
	while (true)
	{
		cct_cls();
		cct_setconsoleborder(100, 30);
		cct_setfontsize("������", 24);
		cout << "------------------------------------\n";
		cout << "1.ѡ���ѶȲ���ʾ�ڲ�����\n";
		cout << "2.�����ʼλ�ò���ʾ���򿪵ĳ�ʼ����\n";
		cout << "3.�ڲ����������\n";
		cout << "4.�ڲ����������棨��ǡ�����ʱ�䣩\n";
		cout << "5.����αͼ�λ���ܲ���ʾ�ڲ�����\n";
		cout << "6.������λ�úͺϷ��ԣ���������˳���\n";
		cout << "7.���ѡ���ʼλ�ò���ʾ���򿪵ĳ�ʼ����\n";
		cout << "8.αͼ�ν��������\n";
		cout << "9.αͼ�ν���������\n";
		cout << "0.�˳���Ϸ\n";
		cout << "------------------------------------\n";
		cout << "[��ѡ��:] ";
		while (true)
		{
			char type = _getch();
			if (type >= '0' && type <= '9')
			{
				cout << type;
				if (type == '0')
				{
					for (int i = 0; i < 24; i++)
					{
						cout << endl;
					}
					return 0;
				}
				else
				{
					return((int)(type - '0'));
				}
			}
		}
	}
}