#define _CRT_SECURE_NO_WARNINGS 1

//猜数字游戏实现
// 基本逻辑
//1.会自动产生1-100的随机数
//2.然后猜数字
//  如果在猜的过程中猜对了--就 恭喜你，游戏结束
//  如果猜错--会告诉 猜大了还是猜小了，继续猜，直到猜对
//3.游戏可以一直玩  除非退出游戏


//#include <stdlib.h>
//#include <time.h>
////两个选项  一个开始游戏  一个退出游戏
//void menu()
//{
//	printf("******************************\n");
//	printf("********  1.play   ***********\n");
//	printf("********  0.exit   ***********\n");
//	printf("******************************\n");
//}
//
////time_t
//void game()
//{
//	//猜数字游戏的实现
//	//1.生成随机数
//	 //rand 函数返回了0-32767之间的数字
//	 //电脑的   时间（发生变化）---时间戳
//
//
//	 //srand((unsigned int)time(NULL)); 写在这里的话  随机数不够随机
//	 //随机数起点的设置 只需要设置一次就可以了
//
//	int ret = rand()%100 + 1;//rand之前需要调用srand  game在底下 所以确实是在rand之前
//						 //%100的余数是0-99  然后+1 范围就是1-100
//	//printf("%d\n", ret); //猜数字就不能打印出来
//
//	//2.猜数字
//	int guess = 0;
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);//猜的数字要存起来  guess 就是猜的值
//		//当猜的值放到guess里面后  进行比较
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//这里需要一个变的量
//	 //time 库函数 会返回一个时间戳  调用函数的时间点和计算机的起始时间的时间戳
//	//NULL--控制值
//	//srand  需要的是unsigned int 类型的值  所以把time强制转换成unsigned int类型
//	//放到主函数里 梦函数一进来 就设置起点数
//
//	do
//	{
//		menu();//打印菜单---menu函数
//		printf("请选择:>");
//		scanf("%d", &input);//input选值 可以是1 0 或者其他数
//		switch (input)//根据输入的值进行判断
//		{
//		case 1:
//			game();//game函数
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default://输入的不是1不是0
//			printf("选择错误,重新选择\n");
//			break;
//		}
//	} while (input);//上面的switch语句跳出后 来到这进行判断
//	return 0;
//}

#include<stdio.h>
#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("******************************\n");
	printf("********  1.play   ***********\n");
	printf("********  0.exit   ***********\n");
	printf("******************************\n");
}

void game()
{
	int ret = rand() % 100 + 1;
	//printf("%d\n", ret); 
//2.猜数字
	int guess = 0;
	while (1)
	{
		printf("请猜数字:>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("请选择:>");
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
			printf("选择错误,重新选择\n");
			break;
		}
	} while (input);
	return 0;
}