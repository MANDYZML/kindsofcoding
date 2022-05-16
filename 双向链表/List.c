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
	//LTNode* newnode = BuyListNode(x); //����һ���µĽ��
	//LTNode* tail = phead->prev;//βָ���ͷ��ǰ��
	//tail->next = newnode;//�������µĽ��
	//newnode->prev = tail;
	//newnode->next = phead;//ָ��ͷ
	//phead->prev = newnode;

	ListInsert(phead, x);
}

//ͷ��
void ListPushFront(LTNode* phead, LTDataType x)
{
	assert(phead);
	//LTNode* newnode = BuyListNode(x);
	//LTNode* next = phead->next; //��ͷ�ڵ��next����

	//phead->next = newnode;//ָ���½ڵ�
	//newnode->prev = phead;
	//newnode->next = next;
	//next->prev = newnode;
	ListInsert(phead->next, x);
}

//βɾ
void ListPopBack(LTNode* phead)
{
	assert(phead);
	assert(phead->next != phead);
	assert(!ListEmpty(phead));//�����ڿ� �ͼ���

	//LTNode* tail = phead->prev;//����β
	//LTNode* tailPrev = tail->prev; //β��ǰһ��

	//free(tail);
	//tailPrev->next = phead;
	//phead->prev = tailPrev;

	ListErase(phead->prev);
}

//ͷɾ
void ListPopFront(LTNode* phead)
{
	assert(phead);
	assert(phead->next != phead);

	ListErase(phead->next);
}

//�ж��б��ǲ��ǿ�
bool ListEmpty(LTNode* phead)
{
	assert(phead);

	return phead->next == phead;//ָ���Լ� ���ǿ� Ϊ��
}

//��posλ��֮ǰ����x
void ListInsert(LTNode* pos, LTDataType x)
{
	assert(pos);
	LTNode* prev = pos->prev; //����һ��newnodeǰ��ĵ�
	LTNode* newnode = BuyListNode(x);//�´���һ���ڵ�

	prev->next = newnode;
	newnode->prev = prev;
	newnode->next = pos;
	pos->prev = newnode;
}   

//ɾ��posλ�õĽ��
void ListErase(LTNode* pos)
{
	assert(pos);
	LTNode* prev = pos->prev;
	LTNode* next = pos->next;

	prev->next = next;
	next->prev = prev;
	free(pos);
}

//��������
int ListSize(LTNode* phead)
{
	assert(phead);
	//�������� ����phead�ͽ���
	LTNode* cur = phead->next;//�ڱ�λ�ĺ�һ�� ��ʼ����
	int size = 0;
	while (cur != phead)
	{
		++size;
		cur = cur->next; //������
	}
	return size;
}

//�б������
void ListDestory(LTNode* phead)
{
	assert(phead);
	//�������� ����phead�ͽ���
	LTNode* cur = phead->next;//�ڱ�λ�ĺ�һ�� ��ʼ����
	int size = 0;
	while (cur != phead)
	{
		LTNode* next = cur->next;//����һ��next
		ListErase(cur);
		cur = next;
	}
	free(phead);
}