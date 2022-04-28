#define _CRT_SECURE_NO_WARNINGS 1

#include"SList.h"

//��ӡ����
void SListPrint(SLTNode* phead)//phead ��һ������ַ
{
	SLTNode* cur = phead;//�ڶ���һ��ָ�� cur
	while (cur != NULL)
	{
		printf("%d->", cur->data);//��ӡ��������ֵ
		cur = cur -> next;//curָ����һ����� ��ַ
	}
	printf("NULL\n");
}

//�������
SLTNode* BuySListNode(SLTDataType x)
{
	//β����������Ľ��--newnode
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	assert(newnode);
	newnode->data = x;
	newnode->next = NULL;

	return newnode;
}

//Ҫ�ı�plist����Ҫ��plist�ĵ�ַ
// ��Ҫ������ָ��

//β��
void SListPushBack(SLTNode** pphead, SLTDataType x)//��һ��ָ����� ����ָ��������
//*pphead ���� plist
{
	assert(pphead);

	//�½�� 
	SLTNode* newnode = BuySListNode(x);
	
	if (*pphead == NULL)//˵��һ����㶼û��
	{
		*pphead = newnode;
	}
	else //��Ϊ�� ��˵���н��
	{ 
		//��β���
		SLTNode* tail = *pphead;//tail ָ��ָ�� ��һ������ַ
		//tailҪ�ҵ� ָ��� ����ǰһ����� Ҳ����4
		//1 -> 2 -> 3 -> 4 -> 5 ->NULL
		while (tail->next != NULL)
		{
			tail = tail->next;//��β���   
		}
		tail->next = newnode;//��β���ָ�����β������Ľ���ַ

	}
}



//ͷ��
void SListPushFront(SLTNode** pphead, SLTDataType x)
{
	//1.�������½��-newnode
	SLTNode* newnode = BuySListNode(x);
	newnode->next = *pphead;//pphead��ͷ��֮ǰ��ͷ��һ���ĵ�ַ �ŵ�newnode����
	*pphead = newnode;//newnode�ĵ�ַ��ɵ�һ���ĵ�ַ��
} 

//βɾ
void SListPopBack(SLTNode** pphead)
{
	assert(pphead);

	//��û�н��
	assert(*pphead);//�ǿվͼ���������

	//ֻ��һ�����
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else //�ж�����
	{
		SLTNode* tailPrev = NULL;
		SLTNode* tail = *pphead;
		while (tail->next != NULL)
		{
			tailPrev = tail;//Ҳ����tailPrev����tail��һ���
			tail = tail->next;
		}
		//��tail��ͷ
		free(tail);
		tailPrev->next = NULL;

	}

	
}

//ͷɾ
void SListPopFront(SLTNode** pphead)
{
	assert(pphead);
	assert(*pphead != NULL);
	//if (*pphead == NULL)
		//return;
	SLTNode* next = (*pphead)->next;//�Ȱ���һ���ڵ�ĵ�ַ��������
	free(*pphead);//���ͷŵ�һ�����
	*pphead = next;//Ȼ��ڶ����Ľ��ָ��ͱ�ɵ�һ����
	 
}

//����
SLTNode* SListFind(SLTNode* phead, SLTDataType x)
{
	SLTNode* cur = phead;
	while (cur)
	{
		if (cur->data == x)
			return cur;

		cur = cur->next;
	}
	//û�ҵ�
	return NULL;
}

//��posλ��֮ǰ����
void SListInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x)
{
	assert(pos);
	assert(pphead);
	//ͷ��
	if (pos == *pphead)
	{
		SListPopFront(pphead, x);

	}
	else //����ͷ��
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

//ɾ��posλ�õ�ֵ
void SListErase(SLTNode** pphead, SLTNode* pos)
{
	assert(pphead);
	assert(pos);

	if (*pphead = pos)//ͷɾ
	{
		SListPopFront(pphead);
	}
	else //����ͷɾ pos�϶���ǰһ�� �ҵ�����ǰһ��
	{
		SLTNode* prev = *pphead;
		while (prev->next != pos)
		{
			prev = prev->next;

		}//��prev��next��ָ����pos ˵��prev����posǰһ����

		//��prev��nextָ��pos�ĺ�һ��
		prev->next = pos->next;
		free(pos);//ɾ��pos
		pos = NULL;
	}
}

//��pos֮�����
void SListInsertAfter(SLTNode* pos, SLTDataType x)
{
	assert(pos);
	/*SLTNode* newnode = BuySListNode(x);
	newnode->next = pos->next;
	pos->next = newnode;*/ //����дҪע��˳����д��

	//������д�����ں�����˳��
	SLTNode* newnode = BuySListNode(x);
	SLTNode* next = pos->next;
	pos->next = newnode;
	newnode->next = pos->next;
}


//ɾ��posλ��֮���ֵ
void SlistEraseAfter(SLTNode* pos)
{
	assert(pos);
	if (pos->next == NULL)//����β
		return;
	SLTNode* del = pos->next;
	//pos->next = pos->next->next;
	pos->next = del->next;
	free(del);
	del = NULL;
}