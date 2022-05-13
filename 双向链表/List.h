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

bool ListEmpty(LTNode* phead);