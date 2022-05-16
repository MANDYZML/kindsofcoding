#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

typedef int LTDataType;
typedef struct ListNode
{
	struct ListNode* next;//ָ���һ��
	struct ListNode* prev;//ָ��ǰһ��
	LTDataType data;
}LTNode;

//struct List
//{
//	LTNode* phead;
//	int size;
//};

//��ʼ��
//void ListInit(LTNode** pphead);
LTNode* ListInit();//�÷���ֵ

//��ӡ
void ListPrint(LTNode* phead);

//β��
void ListPushBack(LTNode* phead, LTDataType x);

//ͷ��
void ListPushFront(LTNode* phead, LTDataType x);

//βɾ
void ListPopBack(LTNode* phead);

//ͷɾ
void ListPopFront(LTNode* phead);

//��posλ��֮ǰ����x
void ListInsert(LTNode* pos, LTDataType x);

//ɾ��posλ�õĽ��
void ListErase(LTNode* pos);


bool ListEmpty(LTNode* phead);
//��������
int ListSize(LTNode* phead);

//˫���б������
void ListDestory(LTNode* plist);