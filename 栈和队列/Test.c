#define _CRT_SECURE_NO_WARNINGS 1
#include"Stack.h"

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

int main()
{
	TestStack();
	return 0;
}