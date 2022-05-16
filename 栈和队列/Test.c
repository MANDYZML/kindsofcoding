#define _CRT_SECURE_NO_WARNINGS 1
#include"Stack.h"

void TestStack()
{
	ST st;//定义一个栈的结构体
	//1.初始化
	StackInit(&st);
	StackPush(&st, 1);
	StackPush(&st, 2);
	StackPush(&st, 3);
	StackPush(&st, 4);
	StackPush(&st, 5);
	while (!StackEmpty(&st))//栈不为空
	{
		printf("%d ", StackTop(&st));//取栈顶元素
		StackPop(&st);//删除
		//入栈 1 2 3 4 5
		//出栈 5 4 3 2 1
	}
	//直到栈为空
	printf("\n");
	//销毁栈
	StackDestroy(&st);

}

int main()
{
	TestStack();
	return 0;
}