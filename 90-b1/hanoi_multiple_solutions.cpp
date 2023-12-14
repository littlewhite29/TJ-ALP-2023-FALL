/* �Ź� 2051891 ���ζ� */
#include <iostream>
#include <iomanip>
#include "cmd_console_tools.h"
#include "hanoi.h"
#include <conio.h>
#include <Windows.h>
#define Delay_millseconds 150
using namespace std;




/* ----------------------------------------------------------------------------------

	 ���ļ����ܣ�
	1����ű� hanoi_main.cpp �и��ݲ˵�����ֵ���õĸ��˵����Ӧ��ִ�к���

	 ���ļ�Ҫ��
	1�����������ⲿȫ�ֱ�����const��#define�������Ʒ�Χ�ڣ�
	2�������徲̬ȫ�ֱ�����������Ҫ��������Ҫ�����ĵ���ʾ��ȫ�ֱ�����ʹ��׼���ǣ����á����á��ܲ��þ������ã�
	3����̬�ֲ����������������ƣ���ʹ��׼��Ҳ�ǣ����á����á��ܲ��þ�������
	4���������ϵͳͷ�ļ����Զ���ͷ�ļ��������ռ��

   ----------------------------------------------------------------------------------- */


   /***************************************************************************
	 �������ƣ�
	 ��    �ܣ�
	 ���������
	 �� �� ֵ��
	 ˵    ����
   ***************************************************************************/
   //ʹ��ȫ�ֱ�����¼ջ��ָ��
int top[3] = { 0,0,0 };
//ʹ��ȫ������ģ��ջ
int stack[3][10];
//ʹ��ȫ�ֱ�����¼������
int step = 0;
//��ʱ
int delay = 0;
//��ʾ�ڲ�����
void print_hanoi(int type)
{
	if (type == 1)
	{
		return;
	}
	//cct_gotoxy(18, 25);
	//int temp;
	for (int i = 0; i < 3; i++)
	{
		char name = 'A' + i;
		cout << setw(2) << name << ":";
		for (int j = 0; j < 10; j++)
		{
			if (j < top[i])
			{
				cout << setw(2) << stack[i][j];
			}
			else
			{
				cout << setw(2) << "";
			}
		}
	}
	cout << endl;
	if (type == 4 || type == 8)
	{
		delay_control(type);
	}
}
//��ӡ���ְ�Ĳ���
void print_step(int n, char src, char dst, int type)
{
	if (type == 4 || type == 8 || type == 9)
	{
		int base_y = -8;
		if (type == 8 || type == 9)
		{
			base_y = 10;
		}
		cct_gotoxy(0, 25 + base_y);
	}
	if (type != 1)
	{
		cout << "��" << setw(4) << step << " ��" << "(" << setw(2) << n << "#: " << src << "-->" << dst << ")";
	}
	else
	{
		cout << n << "# " << src << "---->" << dst << endl;
	}
}
//��ӡ����
void print_pillar()
{
	cct_setcolor(COLOR_HYELLOW, COLOR_WHITE);
	for (int i = 0; i < 3; i++)
	{
		cct_gotoxy(1 + 30 * i, 15);
		//��ӡ�ױ�
		for (int j = 0; j < 23; j++)
		{
			cout << ' ';
			Sleep(10);
		}
		//��ӡ����
		for (int j = 0; j < 12; j++)
		{
			cct_gotoxy(12 + 30 * i, 14 - j);
			cout << ' ';
			Sleep(10);
		}
	}
	//�ָ�״̬
	cct_setcolor(COLOR_BLACK, COLOR_WHITE);
}
//�ƶ�Բ��
void move_plate(char src, char dst, int type)
{
	int plate;
	int src_value;
	int dst_value;
	if (type < 7)
	{
		return;
	}
	else
	{
		src_value = src - 'A';
		dst_value = dst - 'A';
		//��Ϊ�Ѿ��ƶ�������֮��ſ�ʼ����������Ŀ�������ƶ�������
		plate = stack[dst_value][top[dst_value] - 1];
		//��Դ�������ƶ�
		for (int y = 13 - top[src_value]; y >= 1; y--)
		{
			//�����һ��������
			cct_showch(12 - plate + 30 * src_value, y + 1, ' ', COLOR_BLACK, COLOR_WHITE, 2 * plate + 1);
			//��ӡ����
			if (y > 1)
			{
				cct_showch(12 + 30 * src_value, y + 1, ' ', COLOR_HYELLOW, COLOR_WHITE, 1);
			}
			//��ӡ���ӵĵ�ǰλ��
			cct_showch(12 - plate + 30 * src_value, y, ' ', plate, COLOR_WHITE, 2 * plate + 1);
			Sleep(20);
		}
		//ƽ��
		int count = dst_value > src_value ? 1 : -1;
		for (int i = 12 + 30 * src_value; i != 12 + 30 * dst_value; i += count)
		{
			//�����һ��������
			cct_showch(i - plate, 1, ' ', COLOR_BLACK, COLOR_WHITE, 2 * plate + 1);
			//��ӡ���ӵĵ�ǰλ��
			cct_showch(i - plate + count, 1, ' ', plate, COLOR_WHITE, 2 * plate + 1);
			Sleep(20);
		}
		//������Ŀ�������ƶ�
		for (int y = 1; y < 15 - top[dst_value]; y++)
		{
			//�����һ��������
			cct_showch(12 - plate + 30 * dst_value, y, ' ', COLOR_BLACK, COLOR_WHITE, 2 * plate + 1);
			//��ӡ����
			if (y > 2)
			{
				cct_showch(12 + 30 * dst_value, y, ' ', COLOR_HYELLOW, COLOR_WHITE, 1);
			}
			//��ӡ���ӵĵ�ǰλ��
			cct_showch(12 - plate + 30 * dst_value, y + 1, ' ', plate, COLOR_WHITE, 2 * plate + 1);
			Sleep(20);
		}
	}
	//�ָ�״̬
	cct_setcolor(COLOR_BLACK, COLOR_WHITE);
}
//������ʱ
void delay_control(int type)
{
	if (type != 4 && type != 8)
	{
		return;
	}
	int temp;
	if (delay == 0)
	{
		while ((temp = _getch()) != 13)
		{
			;
		}
	}
	else
	{
		Sleep(Delay_millseconds * (5 - delay));
	}

}
/*����ת�����ӵĺ���,���ִ�ӡԲ��ʱ˳���ƶ�ջ��*/
void transfer_hanoi(char src, char dst, int type)
{
	//y���׼����
	int base_y = -8;
	if (type == 8 || type == 9)
	{
		base_y = 10;
	}
	//�洢ת�Ƶ�ת��
	int temp = 0;
	int source = src - 'A';
	int destination = dst - 'A';
	temp = stack[source][--top[source]];
	stack[destination][top[destination]++] = temp;
	if (type == 4 || type == 8 || type == 9)
	{
		cct_gotoxy((src - 'A') * 10 + 9, 19 + base_y - top[source]);
		cout << "  ";
		cct_gotoxy((dst - 'A') * 10 + 9, 20 + base_y - top[destination]);
		cout << temp;
	}
}
/*��ʼ������*/
void init_hanoi(char src, char dst, int n, int type)
{
	int source = src - 'A';
	for (int i = 0; i < n; i++)
	{
		stack[source][i] = n - i;
	}
	top[source] = n;

	if (type > 3)
	{
		cct_cls();
	}

	if (type == 4 || type == 8 || type == 9)
	{
		if (type != 9)
		{
			cout << "�� " << src << " �ƶ��� " << dst << "���� " << n << " �㣬��ʱ����Ϊ " << delay << endl;
		}
		else
		{
			cout << "�� " << src << " �ƶ��� " << dst << "���� " << n << " ��";
		}
		//��ӡ��ʼջ
		int base_y = -8;
		// ������Ҫһ����ȡ��ǰ���λ�õĺ���(?)
		// �������಻ͬ�������ִ�ӡ�Ļ���λ��
		if (type == 8 || type == 9)
		{
			base_y = 10;
			print_pillar();
			for (int i = 0; i < n; i++)
			{
				cct_showch(12 - stack[src - 'A'][i] + 30 * (src - 'A'), 14 - i, ' ', stack[src - 'A'][i], COLOR_WHITE, 2 * stack[src - 'A'][i] + 1);
				Sleep(10);
			}
			//�ָ�״̬
			cct_setcolor(COLOR_BLACK, COLOR_WHITE);
		}
		cct_gotoxy(0, 25 + base_y);
		cout << "��ʼ: ";
		print_hanoi(type);
		cct_gotoxy(7, 20 + base_y);
		cout << setfill('=') << setw(25) << "" << setfill(' ');
		cct_gotoxy(0, 21 + base_y);
		for (int i = 0; i < 3; i++)
		{
			cout << setw(10) << (char)('A' + i);
		}
		for (int i = 0; i < n; i++)
		{
			cct_gotoxy((src - 'A') * 10 + 9, 19 - i + base_y);
			cout << n - i;
		}
		delay_control(type);
	}
}
//������պ���
void end_hanoi()
{
	for (int i = 0; i < 3; i++)
	{
		top[i] = 0;
		for (int j = 0; j < 10; j++)
		{
			stack[i][j] = 0;
		}
		step = 0;
	}
}
//������
void hanoi(int n, char src, char tmp, char dst, int type)
{
	if (n == 0)
		return;
	hanoi(n - 1, src, dst, tmp, type);//����Ϊ0���������Ϊn-1���̴ӵ�ǰ���ƶ����м���
	step++;//Ȼ��ʣ��һ�����ƶ���������
	transfer_hanoi(src, dst, type);	//�������ջ
	print_step(n, src, dst, type);	//��ӡ����
	print_hanoi(type);	//��ӡջ
	move_plate(src, dst, type);	//ͼ�λ��ƶ�����
	hanoi(n - 1, tmp, src, dst, type);	//����ٽ�n-1���̴��м����ƶ���������
}
//��Ϸ����
void hanoi_game(int n, char destination)
{
	cct_gotoxy(0, 36);
	clear_buffer();
	cout << "�������ƶ�������(������ʽ��AC=A���˵������ƶ���C��Q=�˳�) ";
	char src, dst;
	while (true)
	{

		cct_gotoxy(58, 36);
		cout << "                                                ";
		cct_gotoxy(58, 36);
		//char temp;
		src = _getch();
		cout << src;
		dst = _getch();
		cout << dst;
		/*if (temp=getchar()!= '\n')
		{
			clear_buffer();
			continue;
		}*/
		//�ж�����Ϸ���
		if (src > 'Z')
		{
			src -= 'a' - 'A';
		}
		if (src == 'Q')
		{
			cct_gotoxy(0, 37);
			cout << "��Ϸ��ֹ!";
			return;
		}
		if (src < 'A' || src>'C')
		{
			continue;
		}

		if (dst > 'Z')
		{
			dst -= 'a' - 'A';
		}
		if (dst < 'A' || dst>'C')
		{
			continue;
		}
		else if (src == dst)
		{
			continue;
		}
		//�жϲ����Ϸ���
		int src_value = src - 'A';
		int dst_value = dst - 'A';
		if (top[src_value] == 0)
		{
			cct_gotoxy(0, 37);
			cout << "Դ��Ϊ�գ�";
			Sleep(500);
			cct_gotoxy(1, 37);
			cout << "                                   ";
			continue;
		}
		else if (top[dst_value] != 0 && stack[src_value][top[src_value] - 1] > stack[dst_value][top[dst_value] - 1])
		{
			cct_gotoxy(0, 37);
			cout << "����ѹС�̣��Ƿ��ƶ���";
			Sleep(500);
			cct_gotoxy(0, 37);
			cout << "                                   ";
			continue;
		}

		step++;
		//�������ջ
		transfer_hanoi(src, dst, 9);
		//��ӡ����
		print_step(n, src, dst, 9);
		//��ӡջ
		print_hanoi(9);
		//ͼ�λ��ƶ�����
		move_plate(src, dst, 9);
		if (top[destination - 'A'] == n)
		{
			cct_gotoxy(1, 37);
			cout << "��Ϸ������������\n";
			return;
		}
	}
}
//���ղ�������
void hanoi_parameter(int type)
{
	int n;//����
	char src;//��ʼ��
	char dst;//Ŀ����
	char tmp;//�м���
	int temp;//����������Ĺ��߱���
	while (true)
	{
		cout << "�����뺺ŵ���Ĳ���(1-10)\n";
		cin >> n;
		if (n >= 1 && n <= 10)
		{
			break;
		}
		//���������Ƿ���ȷ����ջ�����
		cin.clear();
		temp = clear_buffer();

	}
	//���������Ƿ���ȷ����ջ�����
	temp = clear_buffer();
	while (true)
	{
		cout << "��������ʼ��(A-C)\n";
		if ((src = getchar()) >= 'A' && src <= 'C')
		{
			break;
		}
		else if (src >= 'a' && src <= 'c')
		{
			src -= 32;
			break;
		}

		//���������Ƿ���ȷ����ջ�����
		temp = clear_buffer();
	}
	//���������Ƿ���ȷ����ջ�����
	temp = clear_buffer();
	while (true)
	{
		cout << "������Ŀ����(A-C)\n";
		if ((dst = getchar()) == src || (dst == src + 32 && (dst -= 32)))
		{
			cout << "Ŀ����(" << dst << ")��������ʼ��(" << src << ")��ͬ\n";
		}
		else if (dst >= 'A' && dst <= 'C')
		{
			tmp = 'A' + 'B' + 'C' - dst - src;
			break;
		}
		else if ((dst = dst - 32) >= 'A' && dst <= 'C')
		{
			tmp = 'A' + 'B' + 'C' - dst - src;
			break;
		}

		//���������Ƿ���ȷ����ջ�����
		temp = clear_buffer();

	}
	if (type == 4 || type == 8)
	{
		while (true)
		{
			cout << "�������ƶ��ٶ�(0-5: 0-���س�������ʾ 1-��ʱ� 5-��ʱ���)\n";
			cin >> delay;
			if (delay >= 0 && delay <= 5)
			{
				break;
			}
			//���������Ƿ���ȷ����ջ�����
			cin.clear();
			temp = clear_buffer();
		}
	}
	//��ʼ��ջ
	init_hanoi(src, dst, n, type);

	if (type == 6)
	{
		print_pillar();
		int src_value = src - 'A';
		for (int i = 0; i < n; i++)
		{
			cct_showch(12 - stack[src_value][i] + 30 * src_value, 14 - i, ' ', stack[src_value][i], COLOR_WHITE, 2 * stack[src_value][i] + 1);
			Sleep(10);
		}
		//�ָ�״̬
		cct_setcolor(COLOR_BLACK, COLOR_WHITE);
	}
	else if (type == 7)
	{
		cout << "�� " << src << " �ƶ��� " << dst << "���� " << n << " ��";
		print_pillar();
		transfer_hanoi(src, dst, type);
		int src_value = src - 'A';
		for (int i = 0; i < n; i++)
		{
			cct_showch(12 - stack[src_value][i] + 30 * src_value, 14 - i, ' ', stack[src_value][i], COLOR_WHITE, 2 * stack[src_value][i] + 1);
			Sleep(10);
		}
		move_plate(src, dst, type);
		cct_gotoxy(1, 37);
	}
	else if (type == 9)
	{
		hanoi_game(n, dst);
	}
	else
	{
		//��ʼת��
		hanoi(n, src, tmp, dst, type);
	}

	//cct_gotoxy(18, 31);
}
//��ջ�����
int clear_buffer()
{
	static int temp;
	while ((temp = getchar()) != '\n')
	{
		;
	}
	return temp;
}