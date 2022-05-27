#define _CRT_SECURE_NO_WARNINGS 1
#include"Queue.h"

//初始化
void QueueInit(Queue* pq)//结构体指针接收传过来的两个指针的结构体
{
	assert(pq);//结构体指针肯定不为空
	pq->head = pq->tail = NULL;//不带哨兵位

}
//释放整个链表
void QueueDestroy(Queue* pq)
{
	assert(pq);
	QNode* cur = pq->head;//从头开始删
	while (cur)
	{
		QNode* next = cur->next;//先保存下一个
		free(cur);
		cur = next;//更新 指向下一个
	}
	pq->head = pq->tail = NULL;
}
//插入数据 -- 只能是队尾
void QueuePush(Queue* pq, QDataType x)
{
	assert(pq);
	QNode* newnode = (QNode*)malloc(sizeof(QNode));//创建新节点
	if (newnode == NULL)
	{
		printf("malloc fail\n");//创建新节点失败
		exit(-1);
	}

	newnode->data = x;
	newnode->next = NULL;//初始化一下

	if (pq->tail == NULL)
	{
		pq->head = pq->tail = newnode;
	}
	else //说明不是第一个节点
	{
		pq->tail->next = newnode;//在tail后面链接新节点
		pq->tail = newnode;//tail更新  队尾变成新节点
	}
}
//出数据 -- 只能出对头的数据
void QueuePop(Queue* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));//判断链表为不为空 不为空就继续

	//头删到只剩下一个节点
	if(pq->head->next == NULL)//一直头删 直到为空  说明只剩一个节点
	{
		free(pq->head);//释放这个节点
		pq->head = pq->tail = NULL;
	}
	//不是只剩最后一个节点
	else
	{
		QNode* next = pq->head ->next;//先把next保存起来
		free(pq->head);
		pq->head = next;//把头变成下一个
	}
}
//取对头的数据
QDataType QueueFront(Queue* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));

	//队列不能为空
	return pq->head->data;
}
//取队尾的数据
QDataType QueueBack(Queue* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));

	return pq->tail->data;
}
//查队列是否为空
bool QueueEmpty(Queue* pq)
{
	assert(pq);
	return pq->head == NULL;
}
//查 链表长度
int QueueSize(Queue* pq)
{
	assert(pq);
	QNode* cur = pq->head;
	int size = 0;//计数
	while (cur)
	{
		++size;
		cur = cur->next;
	}
	return size;
}