#define _CRT_SECURE_NO_WARNINGS 1
#include "List.h"


//����ͷ���
LTNode* BuyListNode(LTDataType x)
{
	//���������
	LTNode* node = (LTNode*)malloc(sizeof(LTNode));
	if (node = NULL)
	{
		perror("mallo fail");
		exit(-1);//��ֹ����
	}

	node->data = x;
	node->next = NULL;
	node->prev = NULL;
	return node;//ͷ���ָ��
}

//void ListInit(LTNode** pphead)//����ָ��������plist
//{
//	*pphead = BuyListNode(-1);//���ÿ��ٿռ�ĺ���
//	(*pphead)->next = *pphead;//ָ���Լ�
//	(*pphead)->prev = *pphead;
//}

LTNode* ListInit()
{
	LTNode* phead = BuyListNode(-1);//�����Ľ��ָ�븳��phead
	phead->next = phead;//һ����㶼û�е�ʱ�� Ҫָ���Լ�
	phead->prev = phead;

	return phead;//�ٷ���ͷ�ڵ�ָ��
}

//��ӡ
void ListPrint(LTNode* phead)
{
	assert(phead);

	LTNode* cur = phead->next;//������ָ��
	while (cur != phead)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}

//β�� 
//plist ����phead  phead ��ͷ�ڵ� �����ṹ���ָ��
void ListPushBack(LTNode* phead, LTDataType x)
{
	assert(phead);
	LTNode* newnode = BuyListNode(x); //����һ���µĽ��
	LTNode* tail = phead->prev;//βָ���ͷ��ǰ��
	tail->next = newnode;//�������µĽ��
	newnode->prev = tail;
	newnode->next = phead;//ָ��ͷ

}