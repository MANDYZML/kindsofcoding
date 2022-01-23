#define _CRT_SECURE_NO_WARNINGS 1

//数据实例
// 测试三子棋游戏的逻辑--test.c
// game.c 游戏的实现
// game.h 函数声明，符号的定义

//三子棋

#include "game.h"
void menu()
{
	printf("********************\n");
	printf("*****  1.play  *****\n");
	printf("*****  0.exit  *****\n");
	printf("********************\n");

}
void game()
{
	char ret = 0;//因为返回* # 等字符 所以是 char
	//存放下棋的数据
	char board[ROW][COL] = { 0 };//九宫格
	//初始化棋盘-没下棋之前格子里为全空格
	InitBoard(board,ROW,COL);//初始化数组  把数组,几行几列传过来
    //打印棋盘
	DisplayBoard(board,ROW,COL);//打印数组
	while(1)//为了玩家和电脑一直下-所以循环
	{
		//玩家下棋
		player_move(board, ROW, COL);//操作数组
		DisplayBoard(board, ROW, COL);

		//判断输赢-判断输赢函数-返回四种状况的哪一种
		ret = is_win(board, ROW, COL);//判断数组行列对角线有没有三个相连的情况
		//ret 接收返回值
		if (ret != 'C')//就是有人赢了或平局-游戏结束
		{
			break;
		}

		//电脑下棋
		computer_move(board, ROW, COL);//电脑随机下棋
		DisplayBoard(board, ROW, COL);
		ret = is_win(board, ROW, COL);//判断数组行列对角线有没有三个相连的情况
		//ret 接收返回值
		if (ret != 'C')//再判断-是否有人赢
		{
			break;
		}
	}
	//游戏结束-break跳到这里
	if (ret == '*')
	{
		printf("玩家赢了\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢了\n");
	}
	else
	{
		printf("平局\n");
	}
	DisplayBoard(board, ROW, COL);//有人赢了，把棋盘在打印以此
}

//游戏结束的状况
//玩家赢--'*'
//电脑赢--'#'
//平局--'Q'
//没有以上三种情况 --游戏继续--'C'
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));//要调用rand前面加
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)//--判断进哪个case
		{
		case 1:
			game();//游戏在game函数玩
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);//玩完一把再上去接着玩


}
int main()
{
	test();
	return 0;
}
