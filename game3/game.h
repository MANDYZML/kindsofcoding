#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//��Ϊ���� rand srand time�Ⱥ���

//����� ���ô�д���βζ���Сд
#define ROW 9//��ɨ�׵�9*9����
#define COL 9

#define ROWS ROW+2//���ú��׵�11*11����
#define COLS COL+2

//���õ�����
#define EASY_COUNT 10

//��ʼ������
void init_board(char arr[ROWS][COLS],int rows,int cols,char set);

//��ӡ 11*11   ���Ǵ��������β�������9*9
void show_board(char arr[ROWS][COLS],int row,int col);

//������
void set_mine(char mine[ROWS][COLS],int row,int col);

//�Ų���
void find_mine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);//ֻҪ9*9��