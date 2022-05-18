#define _CRT_SECURE_NO_WARNINGS 1
#include"Heap.h"

//初始化
void HeapInit(HP* php)
{
	assert(php);
	php->a = NULL;
	php->size = php->capacity = 0;
}

//销毁堆
void HeapDrstroy(HP* php)
{
	assert(php);
	free(php->a);
	php->a = NULL;
	php->size = php->capacity = 0;
}

//向上调整 孩子小于父亲 就和父亲交换位置
void AdjustUp(HPDataType* a,int child)
{
	int parent = (child - 1) / 2;
	while (child > 0) //进来
	{
		//小堆要父亲小于孩子
		if (a[child] < a[parent])
		{
			Swap(&a[child], &a[parent]);//交换值 
			child = parent;
			parent = (child - 1) / 2;//再算父亲
		}
		else //孩子大于父亲
		{
			break;
		}
	}
}

//插入数据
void HeapPush(HP* php, HPDataType x)
{
	assert(php);
	//扩容
	if (php->size == php->capacity)
	{

	}
	php->a[php->size] = x;//size就是最后一个数据的下一个位置的下标
	php->size++;

	//新插入的值怎么调整
	AdjustUp(php->a, php->size - 1);//数组新插入的位置开始调
}
//把堆里的数据删除 
void HeapPop(HP* php);
//取堆顶的数据 --取最大的数据
HPDataType HeapTop(HP* php);
//查空
bool HeamEmpty(HP* php);
//堆的大小
int HeapSize(HP* php);