#define _CRT_SECURE_NO_WARNINGS 1
#include"Stack.h"
#include"Queue.h"

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

void TestQueue()
{
	Queue q; //里面有两个指针
	QueueInit(&q);//初始化  传结构体地址   
	QueuePush(&q, 1);
	QueuePush(&q, 2);
	QueuePush(&q, 3);
	QueuePush(&q, 4);
	QueuePush(&q, 5);

	while (!QueueEmpty(&q))//队列不为空就进来
	{
		printf("%d ", QueueFront(&q));//取对头的数据
		QueuePop(&q);//第二个数据变成对头 接着才能取
	}
	printf("\n");
}

int main()
{
	//TestStack();
	TestQueue();
	return 0;
}