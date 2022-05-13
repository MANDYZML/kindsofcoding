#define _CRT_SECURE_NO_WARNINGS 1
#include "List.h"


//创建头结点
LTNode* BuyListNode(LTDataType x)
{
	//创建个结点
	LTNode* node = (LTNode*)malloc(sizeof(LTNode));
	if (node == NULL)
	{
		perror("mallo fail");
		exit(-1);//终止程序
	}

	node->data = x;
	node->next = NULL;
	node->prev = NULL;
	return node;//头结点指针
}

//void ListInit(LTNode** pphead)//二级指针来接收plist
//{
//	*pphead = BuyListNode(-1);//调用开辟空间的函数
//	(*pphead)->next = *pphead;//指向自己
//	(*pphead)->prev = *pphead;
//}

LTNode* ListInit()
{
	LTNode* phead = BuyListNode(-1);//创建的结点指针赋给phead
	phead->next = phead;//一个结点都没有的时候 要指向自己
	phead->prev = phead;

	return phead;//再返回头节点指针
}

//打印
void ListPrint(LTNode* phead)
{
	assert(phead);

	LTNode* cur = phead->next;//遍历的指针
	while (cur != phead)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}

//尾插 
//plist 传给phead  phead 是头节点 整个结构体的指针
void ListPushBack(LTNode* phead, LTDataType x)
{
	assert(phead);
	LTNode* newnode = BuyListNode(x); //创建一个新的结点
	LTNode* tail = phead->prev;//尾指向最开头的前面
	tail->next = newnode;//连接上新的结点
	newnode->prev = tail;
	newnode->next = phead;//指向头
	phead->prev = newnode;
}

//头插
void ListPushFront(LTNode* phead, LTDataType x)
{
	assert(phead);
	LTNode* newnode = BuyListNode(x);
	LTNode* next = phead->next; //把头节点的next保存

	phead->next = newnode;//指向新节点
	newnode->prev = phead;
	newnode->next = next;
	next->prev = newnode;
}

//尾删
void ListPopBack(LTNode* phead)
{
	assert(phead);
	assert(phead->next != phead);
	assert(!ListEmpty(phead));//不等于空 就继续

	LTNode* tail = phead->prev;//先找尾
	LTNode* tailPrev = tail->prev; //尾的前一个

	free(tail);
	tailPrev->next = phead;
	phead->prev = tailPrev;
}

//头删
void ListPopFront(LTNode* phead)
{
	assert(phead);


}

//判断列表是不是空
bool ListEmpty(LTNode* phead)
{
	assert(phead);

	return phead->next == phead;//指向自己 就是空 为真
}