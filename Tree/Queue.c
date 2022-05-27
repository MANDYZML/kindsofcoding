#define _CRT_SECURE_NO_WARNINGS 1
#include"Queue.h"

//��ʼ��
void QueueInit(Queue* pq)//�ṹ��ָ����մ�����������ָ��Ľṹ��
{
	assert(pq);//�ṹ��ָ��϶���Ϊ��
	pq->head = pq->tail = NULL;//�����ڱ�λ

}
//�ͷ���������
void QueueDestroy(Queue* pq)
{
	assert(pq);
	QNode* cur = pq->head;//��ͷ��ʼɾ
	while (cur)
	{
		QNode* next = cur->next;//�ȱ�����һ��
		free(cur);
		cur = next;//���� ָ����һ��
	}
	pq->head = pq->tail = NULL;
}
//�������� -- ֻ���Ƕ�β
void QueuePush(Queue* pq, QDataType x)
{
	assert(pq);
	QNode* newnode = (QNode*)malloc(sizeof(QNode));//�����½ڵ�
	if (newnode == NULL)
	{
		printf("malloc fail\n");//�����½ڵ�ʧ��
		exit(-1);
	}

	newnode->data = x;
	newnode->next = NULL;//��ʼ��һ��

	if (pq->tail == NULL)
	{
		pq->head = pq->tail = newnode;
	}
	else //˵�����ǵ�һ���ڵ�
	{
		pq->tail->next = newnode;//��tail���������½ڵ�
		pq->tail = newnode;//tail����  ��β����½ڵ�
	}
}
//������ -- ֻ�ܳ���ͷ������
void QueuePop(Queue* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));//�ж�����Ϊ��Ϊ�� ��Ϊ�վͼ���

	//ͷɾ��ֻʣ��һ���ڵ�
	if(pq->head->next == NULL)//һֱͷɾ ֱ��Ϊ��  ˵��ֻʣһ���ڵ�
	{
		free(pq->head);//�ͷ�����ڵ�
		pq->head = pq->tail = NULL;
	}
	//����ֻʣ���һ���ڵ�
	else
	{
		QNode* next = pq->head ->next;//�Ȱ�next��������
		free(pq->head);
		pq->head = next;//��ͷ�����һ��
	}
}
//ȡ��ͷ������
QDataType QueueFront(Queue* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));

	//���в���Ϊ��
	return pq->head->data;
}
//ȡ��β������
QDataType QueueBack(Queue* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));

	return pq->tail->data;
}
//������Ƿ�Ϊ��
bool QueueEmpty(Queue* pq)
{
	assert(pq);
	return pq->head == NULL;
}
//�� ������
int QueueSize(Queue* pq)
{
	assert(pq);
	QNode* cur = pq->head;
	int size = 0;//����
	while (cur)
	{
		++size;
		cur = cur->next;
	}
	return size;
}