#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//因为用了 rand srand time等函数

//定义的 都用大写，形参都用小写
#define ROW 9//玩扫雷的9*9宫格
#define COL 9

#define ROWS ROW+2//布置好雷的11*11宫格
#define COLS COL+2

//布置的雷数
#define EASY_COUNT 10

//初始化数组
void init_board(char arr[ROWS][COLS],int rows,int cols,char set);

//打印 11*11   但是传过来的形参行列是9*9
void show_board(char arr[ROWS][COLS],int row,int col);

//布置雷
void set_mine(char mine[ROWS][COLS],int row,int col);

//排查雷
void find_mine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);//只要9*9的