#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

//输入坐标
//是雷--就炸死了，游戏结束
//不是雷-告诉这个坐标周围8个坐标上总共多少个雷
//直到把所有非雷的位置全部找出来，游戏结束，扫雷成功。

void menu()
{
	printf("*************************\n");
	printf("******  0.exit  *********\n");
	printf("******  1.play  *********\n");
	printf("*************************\n");

}

void game()
{
	//扫雷游戏的实现
	char mine[ROWS][COLS] = { 0 };//布置好的雷的信息的格 布置雷前里面应该都是'0'
	//mine 数组 用来存放布置好的雷的信息的
	char show[ROWS][COLS] = { 0 };//玩游戏9*9的格 里面都是'*' 里面都是未知
	//show 数组是用来存放排查出雷的信息的
	 //初始化棋盘
	init_board(mine,ROWS,COLS,'0');
	init_board(show,ROWS,COLS,'*');
	//打印棋盘
	//show_board(mine,ROW,COL);//真正操控的是9*9的棋盘  //没有雷的棋盘
	// 布置雷
	set_mine(mine,ROW,COL);//放到9*9
	show_board(show, ROW, COL);//都是*的棋盘
	//排查雷
	find_mine(mine,show,ROW,COL);

}
int main()
{
	int input = 0;
	srand((unsigned int )time(NULL));
	do
	{
		menu();
		printf("请输入:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}