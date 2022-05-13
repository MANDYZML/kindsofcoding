#define _CRT_SECURE_NO_WARNINGS 1
#include "List.h"


//����ͷ���
LTNode* BuyListNode(LTDataType x)
{
	//���������
	LTNode* node = (LTNode*)malloc(sizeof(LTNode));
	if (node == NULL)
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
	phead->prev = newnode;
}

//ͷ��
void ListPushFront(LTNode* phead, LTDataType x)
{
	assert(phead);
	LTNode* newnode = BuyListNode(x);
	LTNode* next = phead->next; //��ͷ�ڵ��next����

	phead->next = newnode;//ָ���½ڵ�
	newnode->prev = phead;
	newnode->next = next;
	next->prev = newnode;
}

//βɾ
void ListPopBack(LTNode* phead)
{
	assert(phead);
	assert(phead->next != phead);
	assert(!ListEmpty(phead));//�����ڿ� �ͼ���

	LTNode* tail = phead->prev;//����β
	LTNode* tailPrev = tail->prev; //β��ǰһ��

	free(tail);
	tailPrev->next = phead;
	phead->prev = tailPrev;
}

//ͷɾ
void ListPopFront(LTNode* phead)
{
	assert(phead);


}

//�ж��б��ǲ��ǿ�
bool ListEmpty(LTNode* phead)
{
	assert(phead);

	return phead->next == phead;//ָ���Լ� ���ǿ� Ϊ��
}