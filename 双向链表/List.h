#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int LTDataType;
typedef struct ListNode
{
	struct ListNode* next;//ָ���һ��
	struct ListNode* prev;//ָ��ǰһ��
	LTDataType data;
}LTNode;

//��ʼ��
//void ListInit(LTNode** pphead);
LTNode* ListInit();//�÷���ֵ

//��ӡ
void ListPrint(LTNode* phead);
//β��
void ListPushBack(LTNode* phead, LTDataType x);