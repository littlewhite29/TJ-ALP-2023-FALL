/* 信管 2051891 黄治东 */
#pragma once
#include <cstdio>
#include <windows.h>
#define PRIMARY 1
#define MEDIUM 2
#define SENIOR 3

struct inner_map
{
	LARGE_INTEGER tick, begin, end;
	char map[17][31] = { 0 };
	char play_map[17][31] = { 0 };
	int type = 0;
	int difficulty;
	int row;
	int col;
	int mine_number;
};

int mine_sweeper_menu();
inner_map generate_inner_map(int type,int difficulty);
inner_map generate_inner_map(inner_map map, int row, int col);
void display_inner_map(inner_map map);
void display_play_map(inner_map map);
void display_graph_inner_map(inner_map map);
void display_graph_play_map(inner_map map);
bool check_victory(inner_map map);
int choose_difficulty();
inner_map init_mine_sweeper(inner_map map);
inner_map graph_init_mine_sweeper(inner_map map);
void mine_sweeper(inner_map map);
void graph_mine_sweeper(inner_map map);
void reveal_surrounding_place(inner_map *map, int row, int col);
void mine_clearance(struct inner_map* map,int *row,int*col);

void mouse_action_control(inner_map *map, int* row, int* col);