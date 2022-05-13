#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>


//链表结构
typedef int SLTDataType;//数据类型
typedef struct SListNode
{
	SLTDataType data;//数据
	struct SListNode* next;//指向下一个结点的指针

}SLTNode;//结构体新名称

//创建结点
SLTNode* BuySListNode(SLTDataType x);

//打印链表
void SListPrint(SLTNode* phead);

//尾插
void SListPushBack(SLTNode** pphead, SLTDataType x);

//头插
void SListPushFront(SLTNode** pphead, SLTDataType x);

//尾删
void SListPopBack(SLTNode** pphead);

//头删
void SListPopFront (SLTNode** pphead);

//查找
SLTNode* SListFind(SLTNode* phead, SLTDataType x);

//在pos位置之前插入
void SListInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x);

//删除pos位置的值
void SListErase(SLTNode** pphead, SLTNode* pos); 

//在pos之后插入
void SListInsertAfter(SLTNode* pos, SLTDataType x);

//删除pos位置之后的值
void SlistEraseAfter(SLTNode* pos);


