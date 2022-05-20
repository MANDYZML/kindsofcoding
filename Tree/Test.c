#define _CRT_SECURE_NO_WARNINGS 1
#include"Heap.h"

//���ݴ���һ���ڵ���  һ���ڵ����һ���ṹ��
//struct TreeNode 
//{
//	int data;//�ڵ�λ������ֵ
//	struct TreeNode* 
//};

//�������ű�ʾ��
//�������ֵ�
//typedef int DataType;
//struct TreeNode  //���е�һ���ڵ�
//{
//	struct TreeNode* firstChild1;//��һ��ָ��ָ���һ������
//	struct TreeNode* pNextBrother;//Ȼ���һ���������ֵ�ָ��ָ�� ���ֵ�--Ҳ����A�ĵڶ�������
//	//���û���ֵ� ��ָ���
//	DataType data; //�����������Ǹ��ڵ�A
//};

void TestHeap()
{
	HP hp;
	HeapInit(&hp);
	int a[] = { 27,15,19,18,28,34,65,49,25,37 };
	for (int i = 0; i < sizeof(a) / sizeof(int); ++i)//�������������β��� ����һ����
	{
		HeapPush(&hp, a[i]);//�����鵱�е�ֵ���β����������
	}
	HeapPrint(&hp);

	HeapPush(&hp, 10);
	HeapPrint(&hp);

	HeapPop(&hp);
	HeapPrint(&hp);
	HeapPop(&hp);
	HeapPrint(&hp);
	HeapPop(&hp);
	HeapPrint(&hp);
	HeapPop(&hp);
	HeapPrint(&hp);
}

//�� ����
void TestHeapSort()
{
	//�����ӡ--С��
	//�����ӡ--���
	HP hp;
	HeapInit(&hp);
	int a[] = { 27,15,19,18,28,34,65,49,25,37 };
	for (int i = 0; i < sizeof(a) / sizeof(int); ++i)//�������������β��� ����һ����
	{
		HeapPush(&hp, a[i]);//�����鵱�е�ֵ���ΰ�С�Ѳ����������
	}

	while (!HeapEmpty(&hp))
	{
		//С�� ˳���ñ�
		printf("%d ", HeapTop(&hp));//ȡ�Ѷ�
		HeapPop(&hp);
	}
	printf("\n");//�����ӡ--С��
}
int main()
{
	//TestHeap();
	TestHeapSort();
	return 0;
}
