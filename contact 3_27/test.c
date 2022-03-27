#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"//自己写的头文件用双引号



void menu()
{
	printf("**************************\n");
	printf("***1.add     2.del    ****\n");
	printf("***3.search  4.modify ****\n");
	printf("***5.sort    6.print  ****\n");
	printf("***0.exit             ****\n");
	printf("**************************\n");

}

void test()
{
	int input = 0;
	//创建通讯录  下面才能进行增删查改
	Contact con;//通讯录 con里面有数组叫data  还有sz
	//初始化通讯录
	InitContact(&con);//因为初始化要改变con的值

	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD: //比写case 1可读性增加了
			AddContact(&con);
			break;
		case DEL:

			break;
		case SEARCH:
			break;
		case MODIFY:
			break;
		case SORT:
			break;
		case PRINT:
			PrintContact(&con);
			break;
		case EXIT:
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);

}
int main()
{


	test();
	return 0;
}