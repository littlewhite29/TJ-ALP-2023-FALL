/* 信管 2051891 黄治东 */
#pragma once

/* ------------------------------------------------------------------------------------------------------

	 本文件功能：
	1、为了保证 hanoi_main.cpp/hanoi_menu.cpp/hanoi_multiple_solutions.cpp 能相互访问函数的函数声明
	2、一个以上的cpp中用到的宏定义（#define）或全局只读（const）变量，个数不限
	3、可以参考 cmd_console_tools.h 的写法（认真阅读并体会）
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