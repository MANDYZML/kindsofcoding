#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>


//����ṹ
typedef int SLTDataType;//��������
typedef struct SListNode
{
	SLTDataType data;//����
	struct SListNode* next;//ָ����һ������ָ��

}SLTNode;//�ṹ��������

//�������
SLTNode* BuySListNode(SLTDataType x);

//��ӡ����
void SListPrint(SLTNode* phead);

//β��
void SListPushBack(SLTNode** pphead, SLTDataType x);

//ͷ��
void SListPushFront(SLTNode** pphead, SLTDataType x);

//βɾ
void SListPopBack(SLTNode** pphead);

//ͷɾ
void SListPopFront (SLTNode** pphead);

//����
SLTNode* SListFind(SLTNode* phead, SLTDataType x);

//��posλ��֮ǰ����
void SListInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x);

//ɾ��posλ�õ�ֵ
void SListErase(SLTNode** pphead, SLTNode* pos); 

//��pos֮�����
void SListInsertAfter(SLTNode* pos, SLTDataType x);

//ɾ��posλ��֮���ֵ
void SlistEraseAfter(SLTNode* pos);


