/* �Ź� 2051891 ���ζ� */
#include <iostream>
#include <iomanip>
#include "cmd_console_tools.h"
#include "hanoi.h"
#include <conio.h>
#include <Windows.h>

using namespace std;
/* ----------------------------------------------------------------------------------

	 ���ļ����ܣ�
	1����main����
	2����ʼ����Ļ
	3�����ò˵�������hanoi_menu.cpp�У�������ѡ��
	4������ѡ����ò˵������Ӧ��ִ�к�����hanoi_multiple_solutions.cpp�У�

	 ���ļ�Ҫ��
	1����������ȫ�ֱ��������ⲿȫ�ֺ;�̬ȫ�֣�const��#define�������Ʒ�Χ�ڣ�
	2����̬�ֲ����������������ƣ���ʹ��׼��Ҳ�ǣ����á����á��ܲ��þ�������
	3���������ϵͳͷ�ļ����Զ���ͷ�ļ��������ռ��

   ----------------------------------------------------------------------------------- */

   /***************************************************************************
	 �������ƣ�
	 ��    �ܣ�
	 ���������
	 �� �� ֵ��
	 ˵    ����
   ***************************************************************************/
int main()
{


	/* demo������ִ�д˾䣬��cmd��������Ϊ40��x120�У����������120�У�����9000�У���cmd�����Ҳ���д�ֱ�����ˣ�*/
	cct_setconsoleborder(120, 40, 120, 9000);
	int type;
	while(true)
	{

		type=hanoi_menu();
		if (type == 0)
		{
			for (int i = 0; i < 24; i++)
			{
				cout << endl;
			}
			break;
		}
		else if (type == 5)
		{
			cct_cls();
			print_pillar();
			cct_gotoxy(1, 37);
			cout << "���س�������";
			while (true)
			{
				char type = _getch();
				if (type == '\r')
				{
					break;
				}
			}
			//clear_buffer();
		}
		else
		{
			cout << "\n\n\n";
			hanoi_parameter(type);
			if (type == 8||type==9)
			{
				cct_gotoxy(1, 37);
			}
			cout << "\n���س�������";
			end_hanoi();
			while (true)
			{
				char type = _getch();
				if (type == '\r')
				{
					break;
				}
			}
		}
	}

	return 0;
}