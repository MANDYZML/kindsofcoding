#define _CRT_SECURE_NO_WARNINGS 1

#include"SeqList.h"


//尾插
void TestSeqList1()
{
	SL sl;//sl是顺序表
	SLInit(&sl);//实参传给形参 传址调用
	SLPushBack(&sl, 1);
	SLPushBack(&sl, 2);
	SLPushBack(&sl, 3);
	SLPushBack(&sl, 4);
	SLPrint(&sl);

	SLPushBack(&sl, 5);
	SLPrint(&sl);

	SLPushBack(&sl, 5);
	SLPushBack(&sl, 5);
	SLPushBack(&sl, 5);
	SLPushBack(&sl, 5);
	SLPrint(&sl);
}

//头插
void TestSeqList2()
{
	SL sl;//sl是顺序表
	SLInit(&sl);
	SLPushFront(&sl, 1);
	SLPushFront(&sl, 2);
	SLPushFront(&sl, 3);
	SLPushFront(&sl, 4);
	SLPushFront(&sl, 5);
	SLPrint(&sl);

	SLPushFront(&sl, 5);
	SLPushFront(&sl, 5);
	SLPushFront(&sl, 5);
	SLPushFront(&sl, 5);
	SLPrint(&sl);
}


//尾删 -- 插入数据
void TestSeqList3()
{
	//先头插入几个数据
	SL sl;//sl是顺序表
	SLInit(&sl);
	SLPushFront(&sl, 1);
	SLPushFront(&sl, 2);
	SLPushFront(&sl, 3);
	SLPushFront(&sl, 4);
	SLPushFront(&sl, 5);
	SLPrint(&sl);

	SLPopBack(&sl);
	SLPrint(&sl);
	//54321-> 5432

	SLDestory(&sl);//只要编译跑起来 有白框 就大概是越界
}

//头删
void TestSeqList4()
{
	SL sl;//sl是顺序表
	SLInit(&sl);
	SLPushFront(&sl, 1);
	SLPushFront(&sl, 2);
	SLPushFront(&sl, 3);
	SLPushFront(&sl, 4);
	SLPushFront(&sl, 5);
	SLPrint(&sl);

	SLPopFront(&sl);
	SLPrint(&sl);
}
//某个坐标插入
void TestSeqList5()
{
	SL sl;//sl是顺序表
	SLInit(&sl);
	SLPushFront(&sl, 1);
	SLPushFront(&sl, 2);
	SLPushFront(&sl, 3);
	SLPushFront(&sl, 4);
	SLPushFront(&sl, 5);
	SLPrint(&sl);

	SLInsert(&sl, 3, 40);//头插  第三个坐标位置插入一个40
	SLPrint(&sl);
	SLInsert(&sl, 0, 40);
	SLPrint(&sl);

	SLDestory(&sl);
}

//某个坐标删除
void TestSeqList6()
{
	SL sl;//sl是顺序表
	SLInit(&sl);
	SLPushFront(&sl, 1);
	SLPushFront(&sl, 2);
	SLPushFront(&sl, 3);
	SLPushFront(&sl, 4);
	SLPushFront(&sl, 5);
	SLPrint(&sl);

	SLErase(&sl, 2);//删除第二个位置
	SLPrint(&sl);
	SLErase(&sl, 0);
	SLPrint(&sl);
	SLErase(&sl, 2);
	SLPrint(&sl);

	//头删
	SLPopFront(&sl);
	SLPrint(&sl);
	//尾删
	SLPopBack(&sl);
	SLPrint(&sl);
}

//查找
void TestSeqList7()
{
	SL sl;//sl是顺序表
	SLInit(&sl);
	SLPushFront(&sl, 1);
	SLPushFront(&sl, 2);
	SLPushFront(&sl, 2);
	SLPushFront(&sl, 2);
	SLPushFront(&sl, 2);
	SLPushFront(&sl, 2);
	SLPushFront(&sl, 3);
	SLPushFront(&sl, 4);
	SLPushFront(&sl, 5);
	SLPrint(&sl);

	//删除一个
	//int x = 0;
	//printf("请输入你要删除的值:");
	//scanf("%d", &x);
	//int pos = SLFind(&sl, x);//找3
	//if (pos != -1)//表明找到了
	//{
	//	SLErase(&sl, pos);//找到3 把3删了
	//}
	//else
	//{
	//	printf("没有找到:%d\n", x);

	//}
	//SLPrint(&sl);

	//删除输入的数字 里面的所有
	int x = 0;
	printf("请输入你要删除的值:");
	scanf("%d", &x);
	int pos = SLFind(&sl, x);
	while (pos != -1)
	{
		SLErase(&sl, pos);//一直删

		pos = SLFind(&sl, x);//再找 直到找不到
	}
	SLPrint(&sl);

	int y, z;
	printf("请输入你要修改的值和修改后的值:");
	scanf("%d%d", &y, &z);
	pos = SLFind(&sl, y);//找3
	if (pos != -1)//表明找到了
	{
		SLModify(&sl, pos,z);//找到y 改成z
	}
	else//万一修改的值不在
	{
		printf("没有找到:%d\n", y);

	}
	SLPrint(&sl);
}
//int main()
//{
//	TestSeqList7();
//
//	return 0;
//}

void menu()
{
	printf("********************************\n");
	printf("*****  1.尾插   2.头插   *******\n");
	printf("*****  3.查找   4.删除   *******\n");
	printf("*****  5.修改   6.打印   *******\n");
	printf("***** -1.退出            *******\n");
	printf("********************************\n");
}

int main()
{
	//插入顺序表
	SL sl;
	SLInit(&sl);//初始化

	int option = -1;
	do
	{
		menu();
		if (scanf("%d", &option) == EOF)
		{
			//printf("输入错误，请重新输入\n");
			//continue;//清理一下缓冲区

			printf("scanf输入错误\n"); 
			break;
		}
		int val, pos;
		int y, z;

		switch (option)
		{
		case 1:
			printf("请连续输入你要尾插的数据，以0结束:>");
			scanf("%d", &val);
			while (val != 0)//连续输入多个值
			{
				SLPushBack(&sl, val);
				scanf("%d", &val);
			}
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			printf("请输入你要修改的值和修改后的值:");
			scanf("%d%d", &y, &z);
			pos = SLFind(&sl, y);//找3
			if (pos != -1)//表明找到了
			{
				SLModify(&sl, pos, z);//找到y 改成z
			}
			else//万一修改的值不在
			{
				printf("没有找到:%d\n", y);

			}
			break;
		case 6:
			SLPrint(&sl);
			break;
		case 7:
			break;
		case 8:
			break;

		default: 
			//scanf  是输入%d 
			//缓冲区没有整型，比如说输入了字母
			printf("输入错误，请重新输入\n");
			break;
		}

	} while (option != -1);
	
	SLDestory(&sl);

	return 0;
}

