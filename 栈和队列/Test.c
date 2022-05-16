#define _CRT_SECURE_NO_WARNINGS 1
#include"Stack.h"
#include"Queue.h"

void TestStack()
{
	ST st;//����һ��ջ�Ľṹ��
	//1.��ʼ��
	StackInit(&st);
	StackPush(&st, 1);
	StackPush(&st, 2);
	StackPush(&st, 3);
	StackPush(&st, 4);
	StackPush(&st, 5);
	while (!StackEmpty(&st))//ջ��Ϊ��
	{
		printf("%d ", StackTop(&st));//ȡջ��Ԫ��
		StackPop(&st);//ɾ��
		//��ջ 1 2 3 4 5
		//��ջ 5 4 3 2 1
	}
	//ֱ��ջΪ��
	printf("\n");
	//����ջ
	StackDestroy(&st);

}

void TestQueue()
{
	Queue q; //����������ָ��
	QueueInit(&q);//��ʼ��  ���ṹ���ַ   
	QueuePush(&q, 1);
	QueuePush(&q, 2);
	QueuePush(&q, 3);
	QueuePush(&q, 4);
	QueuePush(&q, 5);

	while (!QueueEmpty(&q))//���в�Ϊ�վͽ���
	{
		printf("%d ", QueueFront(&q));//ȡ��ͷ������
		QueuePop(&q);//�ڶ������ݱ�ɶ�ͷ ���Ų���ȡ
	}
	printf("\n");
}

int main()
{
	//TestStack();
	TestQueue();
	return 0;
}