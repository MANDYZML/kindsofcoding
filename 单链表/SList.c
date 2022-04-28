#define _CRT_SECURE_NO_WARNINGS 1

#include"SList.h"

//打印链表
void SListPrint(SLTNode* phead)//phead 第一个结点地址
{
	SLTNode* cur = phead;//在定义一个指针 cur
	while (cur != NULL)
	{
		printf("%d->", cur->data);//打印结点里面的值
		cur = cur -> next;//cur指向下一个结点 地址
	}
	printf("NULL\n");
}

//创建结点
SLTNode* BuySListNode(SLTDataType x)
{
	//尾插进来的数的结点--newnode
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	assert(newnode);
	newnode->data = x;
	newnode->next = NULL;

	return newnode;
}

//要改变plist，就要传plist的地址
// 需要传二级指针

//尾插
void SListPushBack(SLTNode** pphead, SLTDataType x)//传一级指针过来 二级指针来接收
//*pphead 就是 plist
{
	assert(pphead);

	//新结点 
	SLTNode* newnode = BuySListNode(x);
	
	if (*pphead == NULL)//说明一个结点都没有
	{
		*pphead = newnode;
	}
	else //不为空 就说明有结点
	{ 
		//找尾结点
		SLTNode* tail = *pphead;//tail 指针指向 第一个结点地址
		//tail要找到 指向空 结点的前一个结点 也就是4
		//1 -> 2 -> 3 -> 4 -> 5 ->NULL
		while (tail->next != NULL)
		{
			tail = tail->next;//找尾结点   
		}
		tail->next = newnode;//让尾结点指向的是尾插进来的结点地址

	}
}



//头插
void SListPushFront(SLTNode** pphead, SLTDataType x)
{
	//1.创建个新结点-newnode
	SLTNode* newnode = BuySListNode(x);
	newnode->next = *pphead;//pphead是头插之前开头第一个的地址 放到newnode里面
	*pphead = newnode;//newnode的地址变成第一个的地址了
} 

//尾删
void SListPopBack(SLTNode** pphead)
{
	assert(pphead);

	//当没有结点
	assert(*pphead);//非空就继续往下走

	//只有一个结点
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else //有多个结点
	{
		SLTNode* tailPrev = NULL;
		SLTNode* tail = *pphead;
		while (tail->next != NULL)
		{
			tailPrev = tail;//也就是tailPrev总在tail后一结点
			tail = tail->next;
		}
		//当tail到头
		free(tail);
		tailPrev->next = NULL;

	}

	
}

//头删
void SListPopFront(SLTNode** pphead)
{
	assert(pphead);
	assert(*pphead != NULL);
	//if (*pphead == NULL)
		//return;
	SLTNode* next = (*pphead)->next;//先把下一个节点的地址保存起来
	free(*pphead);//在释放第一个结点
	*pphead = next;//然后第二个的结点指针就变成第一个了
	 
}

//查找
SLTNode* SListFind(SLTNode* phead, SLTDataType x)
{
	SLTNode* cur = phead;
	while (cur)
	{
		if (cur->data == x)
			return cur;

		cur = cur->next;
	}
	//没找到
	return NULL;
}

//在pos位置之前插入
void SListInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x)
{
	assert(pos);
	assert(pphead);
	//头插
	if (pos == *pphead)
	{
		SListPopFront(pphead, x);

	}
	else //不是头插
	{
		SLTNode* prev = *pphead;
		while (prev-> next != pos)
		{
			prev = prev->next;

		}
		SLTNode* newnode = BuySListNode(x);
		prev->next = newnode;
		newnode->next = pos;
	}
}

//删除pos位置的值
void SListErase(SLTNode** pphead, SLTNode* pos)
{
	assert(pphead);
	assert(pos);

	if (*pphead = pos)//头删
	{
		SListPopFront(pphead);
	}
	else //不是头删 pos肯定有前一个 找到它的前一个
	{
		SLTNode* prev = *pphead;
		while (prev->next != pos)
		{
			prev = prev->next;

		}//当prev的next找指向了pos 说明prev就是pos前一个了

		//让prev的next指向pos的后一个
		prev->next = pos->next;
		free(pos);//删除pos
		pos = NULL;
	}
}

//在pos之后插入
void SListInsertAfter(SLTNode* pos, SLTDataType x)
{
	assert(pos);
	/*SLTNode* newnode = BuySListNode(x);
	newnode->next = pos->next;
	pos->next = newnode;*/ //这样写要注意顺序不能写反

	//这样的写法不在乎链接顺序
	SLTNode* newnode = BuySListNode(x);
	SLTNode* next = pos->next;
	pos->next = newnode;
	newnode->next = pos->next;
}


//删除pos位置之后的值
void SlistEraseAfter(SLTNode* pos)
{
	assert(pos);
	if (pos->next == NULL)//就是尾
		return;
	SLTNode* del = pos->next;
	//pos->next = pos->next->next;
	pos->next = del->next;
	free(del);
	del = NULL;
}