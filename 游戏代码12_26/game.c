#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"
//初始化棋盘 全变空格
void InitBoard(char board[ROW][COL], int row, int col)//char 类型数组  行  列
{
    int i = 0;
   for (i = 0; i < row; i++)
   {
	int j = 0;
	  for (j = 0; j < col; j++)
	  {
		board[i][j] = ' ';//九宫格里 初始化成空格

	  }
   }
}

//打印棋盘
//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			printf("%c", board[i][j]);//打印一行
//		}
//		printf("\n");//换行
//	}
//}

//这个写死了  如果想10*10 就不行了
//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)//打印三行
//	{
//		//一组数据打印--数据和分割行
//		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
//		//打印分割行
//		if(i<row-1)
//			printf("---|---|---\n");
//	}
//}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)//打印三行
	{
		//一组数据打印      --数据和分割行
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if(j < col - 1)
			printf("|");
		}
		printf("\n");
		//打印分割行
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
			
	}
}

//玩家下棋 --实现
void player_move(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家下棋\n");
	printf("请输入坐标:>");
	while (1)
	{
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//下棋
			//判断输入的坐标有没有被占用
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该坐标被占用，请重新输入\n");
			}
		}
		else
		{
			printf("坐标非法，请重新输入\n");
		}
	}
}

//电脑下棋--实现
void computer_move(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑下棋:>\n");
	while (1)//如果电脑下的坐标 发现有问题  会上来重新生成
		//所以是循环
	{
		//电脑随机下--生成坐标
		x = rand() % row;//0-2范围
		y = rand() % col;//0-2

		//判断这个坐标有没有下过棋
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';//电脑下棋
			break;
		}
	
	}
}


//判断输赢函数--实现   就是对棋盘上的位置进行判断
static int if_full(char board[ROW][COL], int row, int col)//只是为了（is_win 函数）判断输赢 不用放到头文件里面
//只在本文件内使用就行
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')//判断等不等于 空格
			{
			//假设里面有空格--就说明并没有满
				return 0;//说明没满
			}
		}
	}
	return 1;//说明满了
}
//行，列，--三组 对角线 --两组
char is_win(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//判断行
	for (i = 0; i < row; i++)
	{
		//一行里面 三个元素
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
			//一行三个元素相等 且一个不等于空格 剩下两个也不等于空格
			//那就是有人赢了 判断是什么字符
		{
			return board[i][1];//三个字符一样，判断并返回一个就行
		}
	}
	//判断列
	for (i = 0; i < col; i++)
	{
		//一行里面 三个元素
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
			//一行三个元素相等 且一个不等于空格 剩下两个也不等于空格
			//那就是有人赢了 判断是什么字符
		{
			return board[1][i];//三个字符一样，判断并返回一个就行
		}
	}
	//对角线-- 从左上到右下的对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
	//如果有人赢了
		return board[1][1];
	}
	//对角线--右上到左下
	if (board[0][2] == board[1][1] && board[2][0] == board[2][2] && board[1][1] != ' ')
	{
		//如果有人赢了
		return board[1][1];
	}

	//如果以上情况都没发生 --没人赢的情况下，棋盘上已经没有空余位置了
	//判断平局--判断数组有没有空格
	if (if_full(board, row, col) == 1)//如果返回1就是都满了
	{
		return 'Q';  
	}

	//游戏继续-上面的情况都不是
	return 'C';

}