#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

//实现
void init_board(char arr[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			arr[i][j] = set;//初始化成'0' 或者'*'
		}

	}
}

//打印11*11的格  但是行列从1开始  就是9*9
void show_board(char arr[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("-----------扫雷-----------\n");
	for (i = 0; i <= col; i++)//打印列号
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);//打印行号
		//打一行
		for (j = 1; j <= col; j++)
		{
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}
	printf("-----------扫雷-----------\n");
}


//实现  布置雷-10个
void set_mine(char mine[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	int x = 0;//生成坐标
	int y = 0;
	//键盘上随机生成雷的坐标
	while (count)
	{
		//坐标1-9的值
		x = rand() % row+1;//如果row=9  %row 就是生成0-8的值 +1 就是生成1-9的值
		y = rand() % col+1;//一样
		if (mine[x][y] == '0')//==0 说明这个坐标还没有雷
		{
			mine[x][y] = '1';//布置雷
			count--;//布置了一个雷，雷的总数就--一次
		}
		//如果if 语句等于1 说明这个坐标之前已经布置过雷了
		//那么就不会进到if语句 count没变化，上去重新生成新坐标
		//循环语句的次数 >= 布置雷的次数
	}
}

get_mine_count(char mine[ROWS][COLS],int x,int y)//从mine数组里找 输入的坐标周围的8个坐标
{
	return mine[x - 1][y] + 
		mine[x - 1][y - 1] + 
		mine[x][y - 1] + 
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] + 
		mine[x - 1][y + 1]-8*'0';
}

//排查雷实现
void find_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < row*col-EASY_COUNT)//9*9= 81-10 = 71
	{
		printf("请输入要排查的坐标:>");
		scanf("%d %d", &x, &y);
		//判断坐标合不合法
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')//说明9*9格子里面 这个坐标是雷
			{
			//是雷，就炸死了
				printf("很遗憾，被炸死了\n");
				show_board(mine, ROW, COL);//打印雷的情况，告诉是怎么死的
				break;
			}
			else//这个位置不是雷，记录他周围八个坐标有几个雷
			{
				int count = get_mine_count(mine,x,y);
				show[x][y] = count + '0';//假如周围有1个雷，把排查到的雷放到show数组里
				//count = '0'  也就是个数字1
				//排查完之后上去接着排查
				show_board(show, ROW, COL);//输入坐标排查后，显示一下格子信息
				win++;
			}
		}
		else
		{
			printf("坐标非法，重新输入\n");
		}
	}
	if (win == row * col - EASY_COUNT)//win==71  说明排雷成功了
	{
		printf("恭喜你，排雷成功了\n");
		show_board(mine, ROW, COL);
	}
}