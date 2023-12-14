/* �Ź� 2051891 ���ζ� */
#pragma once

/* ------------------------------------------------------------------------------------------------------

	 ���ļ����ܣ�
	1��Ϊ�˱�֤ hanoi_main.cpp/hanoi_menu.cpp/hanoi_multiple_solutions.cpp ���໥���ʺ����ĺ�������
	2��һ�����ϵ�cpp���õ��ĺ궨�壨#define����ȫ��ֻ����const����������������
	3�����Բο� cmd_console_tools.h ��д���������Ķ�����ᣩ
   ------------------------------------------------------------------------------------------------------ */
void print_hanoi(int type);
void print_pillar();
void move_plate(char src, char dst,int type);

void print_step(int n, char src, char dst, int type);
void delay_control(int type);
void transfer_hanoi(char src, char dst, int type);
void init_hanoi(char src,char dst, int n,int type);
void end_hanoi();
void hanoi(int n, char src, char tmp, char dst, int type);
int clear_buffer();
void hanoi_parameter(int type);

int hanoi_menu();