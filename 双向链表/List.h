#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

typedef int LTDataType;
typedef struct ListNode
{
	struct ListNode* next;//指向后一个
	struct ListNode* prev;//指向前一个
	LTDataType data;
}LTNode;

//struct List
//{
//	LTNode* phead;
//	int size;
//};

//初始化
//void ListInit(LTNode** pphead);
LTNode* ListInit();//用返回值

//打印
void ListPrint(LTNode* phead);

//尾插
void ListPushBack(LTNode* phead, LTDataType x);

//头插
void ListPushFront(LTNode* phead, LTDataType x);

//尾删
void ListPopBack(LTNode* phead);

//头删
void ListPopFront(LTNode* phead);

//在pos位置之前插入x
void ListInsert(LTNode* pos, LTDataType x);

//删除pos位置的结点
void ListErase(LTNode* pos);


bool ListEmpty(LTNode* phead);
//求链表长度
int ListSize(LTNode* phead);

//双向列表的销毁
void ListDestory(LTNode* plist);