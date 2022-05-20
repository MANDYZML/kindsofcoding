#define _CRT_SECURE_NO_WARNINGS 1
#include"Heap.h"

//交换
void Swap(HPDataType* p1, HPDataType* p2)
{
	HPDataType tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

//打印
void HeapPrint(HP* php)
{
	assert(php);
	for (int i = 0; i < php->size; ++i)
	{
		printf("%d ", php->a[i]);
	}
	printf("\n");
}
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

//向上调整 孩子小于父亲 就和父亲交换位置--栈顶要最小数据
void AdjustUp(HPDataType* a,int child)
{
	int parent = (child - 1) / 2;
	while (child > 0) //进来
	{
		//小堆要父亲小于孩子
		//if (a[child] < a[parent])
		if (a[child] > a[parent])//大堆
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
		//如果一开始扩容是空*2还是空 所以一开始给4个空间 之后扩容是*2
		int newcapacity = php->capacity == 0 ? 4 : php->capacity * 2;
		HPDataType* tmp = (HPDataType*)realloc(php->a, sizeof(HPDataType) * newcapacity);
		if (tmp == NULL)
		{
			printf("realloc fail\n");//扩容失败
			exit(-1);
		}
		//扩容成功
		php->a = tmp;
		php->capacity = newcapacity;
	}
	php->a[php->size] = x;//size就是最后一个数据的下一个位置的下标
	php->size++;

	//新插入的值怎么调整
	AdjustUp(php->a, php->size - 1);//数组新插入的位置开始调
}

//向下调整
void AdjustDown(HPDataType* a, int size, int parent)
{
	//简单思路
	int child = parent * 2 + 1;//默认是左孩子
	while (child < size)//child默认左孩子
	{
         //选出孩子当中小的那个
		//if (child+1 < size && a[child + 1] < a[child])//如果右孩子小于左孩子
		//选出孩子当中大的那个
		if (child+1 < size && a[child + 1] > a[child])//如果右孩子小于左孩子
		{
			++child;//变成小的是右孩子
		}
		//到这里 child一定是小的那个
		//孩子跟父亲比较
		//if (a[child] < a[parent])//因为是小堆 父亲要小于孩子
		if (a[child] > a[parent])//因为是大堆 父亲要大于孩子
		
		{
			Swap(&a[child], &a[parent]);
			parent = child;//让父亲到孩子的位置来
			child = parent * 2 + 1;//再接着这个父亲算孩子算孩子
		}
		else //说明 小的孩子都大于父亲  两孩子都大于父亲
		{
			//不用调了
			break;
		}
	}

	/*int leftchild = parent * 2 + 1;
	int rightchild = parent * 2 + 2;
	while (leftchild < rightchild)
	{
		if (leftchild < parent)
		{
			Swap(&a[leftchild], &a[parent]);
			parent = leftchild;
		}
		else
		{
			break;
		}
	}*/
	
}

//把堆里的数据删除 
void HeapPop(HP* php)
{
	assert(php);
	assert(php->size > 0);
	Swap(&(php->a[0]),&(php->a[php->size - 1]));//交换头和尾的数据
	php->size--;//把堆顶的数据交换到堆尾 在把它删了

	//向下调整
	AdjustDown(php->a, php->size, 0);
}
//取堆顶的数据 --取最大的数据
HPDataType HeapTop(HP* php)
{
	assert(php);
	assert(php->size > 0);

	return php->a[0];//下标为0的数据 就是栈顶
}
//查空
bool HeapEmpty(HP* php)
{
	assert(php);
	return php->size == 0;
}
//堆的大小
int HeapSize(HP* php)
{
	assert(php);
	return php->size;
}