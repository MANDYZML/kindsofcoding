#define _CRT_SECURE_NO_WARNINGS 1
#include"Heap.h"

//数据存在一个节点里  一个节点就是一个结构体
//struct TreeNode 
//{
//	int data;//节点位置里存的值
//	struct TreeNode* 
//};

//树的最优表示法
//左孩子右兄弟
//typedef int DataType;
//struct TreeNode  //树中的一个节点
//{
//	struct TreeNode* firstChild1;//第一个指针指向第一个孩子
//	struct TreeNode* pNextBrother;//然后第一个孩子用兄弟指针指向 亲兄弟--也就是A的第二个孩子
//	//如果没有兄弟 就指向空
//	DataType data; //假设里面存的是根节点A
//};

void TestHeap()
{
	HP hp;
	HeapInit(&hp);
	int a[] = { 27,15,19,18,28,34,65,49,25,37 };
	for (int i = 0; i < sizeof(a) / sizeof(int); ++i)//把所有数据依次插入 构成一个堆
	{
		HeapPush(&hp, a[i]);//把数组当中的值依次插入进堆里面
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

//堆 排序
void TestHeapSort()
{
	//升序打印--小堆
	//降序打印--大堆
	HP hp;
	HeapInit(&hp);
	int a[] = { 27,15,19,18,28,34,65,49,25,37 };
	for (int i = 0; i < sizeof(a) / sizeof(int); ++i)//把所有数据依次插入 构成一个堆
	{
		HeapPush(&hp, a[i]);//把数组当中的值依次按小堆插入进堆里面
	}

	while (!HeapEmpty(&hp))
	{
		//小堆 顺序不用变
		printf("%d ", HeapTop(&hp));//取堆顶
		HeapPop(&hp);
	}
	printf("\n");//升序打印--小堆
}
int main()
{
	//TestHeap();
	TestHeapSort();
	return 0;
}
